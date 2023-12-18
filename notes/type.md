## Basic Types

### Integer Types (정수형)

- sign bit 여부
	- unsigned: 최상위 비트까지 표현에 사용
		- integer constant를 unsigned로 지정하려면 `u` 접미사를 사용
		- 10진수 integer constant는 signed 자료형만 시도(int -> long int -> ...)
		- 8진수, 16진수 integer constant는 unsigned 자료형도 시도 (int -> unsigned int -> ...)
	- signed: 최상위 비트는 부호 표현에 사용
	- 생략 가능; 일반적으로 sign bit 여부가 없으면 signed 자료형으로 생각(implementation-defined)
- 메모리 크기 (implementation-defined): 표준은 *최소 크기만* 지정. 일반적인 구현은 컴파일러에 따라 다름(`limits.h` 확인)
	- short int: 최소 16비트 이상 (-32757 ~ 32767)
	- int: 최소 16비트 이상 (-32757 ~ 32767)
	- long int: 최소 32비트 이상 (-2147483647 ~ 2147483647)
		- integer constant를 long으로 지정하려면 `l` 접미사를 사용
	- long long int(C99): 최소 64비트 이상
	- sign bit와 크기 순서는 상관 없음
		- `unsigned long`과 `long unsigned` 모두 허용
		- `100lu`와 `100ul` 모두 허용
		- `unsigned long`과 같이 쓰는 것이 컨벤션
		- short / long / ...에서 int는 생략하는 것이 컨벤션
- Overflow, Underflow (undefined behavior)


- 기타 정수형 취급되는 자료형
	- _Bool (C99): 0 또는 1만을 가지는 자료형. unsigned integer 취급
	- char: 최소 8비트 이상 (-127 ~ 128)
		- 정수형에서 사용 가능한 operator들을 char 자료형에도 모두 적용 가능
		- signed / unsigned 모두 가능
		- character constants
			- `'`로 묶어서 표현 (`"`로 묶는 string literal과 다름)
			- 정수형으로 처리
		- escape sequence
			- character escape: `\n`과 같은 형태. 11개의 escape sequence가 있음
			- numeric escape: `\33`(8진수) 또는 `\x1b`(16진수)와 같은 형태
			- C서운 이야기 하나: string literal에 `??`을 입력하면 triagraph character로 해석될 수 있다. `??=`는 `#` 하나로 치환된다. 다음 코드를 `-triagraphs` 옵션을 넣고 컴파일해보자... 
			```c
			??=include <stdio.h>

			int main(void)
			??<
				printf("Hellooooo ??/n");
			??>
			```
			- C서운 이야기 둘: C는 UNIX와 깊은 연관이 있다. UNIX의 개행은 `\r\n`이 아니라 `\n`이기 때문에, C에서도 개행으로 `\n`을 사용한다. 이에 모자라, 표준 라이브러리는 입출력시 파일의 개행을 항상 `\n`으로 변환해준다.
- extended integer types (implementation-defined)
	- ex) `__int128` (GCC) 

### Floating Types (실수형)
- 메모리 크기 (-> precision, implementation-defined)
	- float: single precision
		- `f` 접미사를 이용해 single precision으로 지정 가능
	- double: double precision
		- floating constant는 기본적으로 double
	- long double: extended precision
		- `lf` 접미사를 이용해 long double으로 지정 가능
- 일반적으로 **IEEE 754** 표기법 사용
	- 모든 컴퓨터가 IEEE 754 표기법을 쓰는 것은 아님
	- sign + exponent + fraction
	- `(1 + fraction) * 2 ^ (exponent - bias)`의 지수 표기법 사용
		- exponent는 일반적인 정수형으로 읽으면 되고(2^0, 2^1, 2^2, ...)
		- fraction은 역수로 읽어주면 됨(2^-1, 2^-2, ...)
		- bias는 precision에 따라 다름


## Implicit Type Casting

### 언제?

연산 대상의 형이 같아야 할 때. 그러니까, 
- 관계/산술/동등 연산자 양변의 자료형이 다를 때 (-> usual arithmetic conversion)
- 대입 연산자 양변의 자료형이 다를 때
	- conversion during assignment
	- rvalue는 lvalue의 형을 따른다
- 함수 호출시 파라미터와 인자의 자료형이 다를 때
- 함수 return시 함수의 자료형과 return value의 자료형이 다를 때

### Usual Arithmetic Conversions

1. operand 중 하나가 실수형이라면 실수형으로 전환한다
	- integer types: float > double > long double
	- float: float > double > long double
2. operand에 실수형이 없으면 `integer promotion rule`을 적용한다(C99)
> `integer promotion rule`: int보다 작은 정수 자료형(`char`, `short` 등)은 int (또는 unsigned int)로 전환한다
3. 그 후 `conversion rank`를 적용한다
	- 각 정수형은 순위가 있다
		1. long long, unsigned long long
		2. long, unsigned long
		3. int, unsigned int
		4. short, unsigned short
		5. char, unsigned char
		6. _Bool
	- 양변의 부호 여부가 같고, operand의 순위가 다르면 낮은 쪽을 높은 쪽으로 변환
	- unsigned >= signed인 경우 unsigned로 변환
	- signed > unsigned인 경우 signed로 변환

형변환 중 값이 손실될 수 있음에 주의. `(unsigned int) -1`이나 `(float) 9999999999999999ll`은 오버플로우가 발생해 예상과 다른 값이 나온다. 
