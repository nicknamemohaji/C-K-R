# Function definition

함수 선언은 다음 형태를 가진다. 
```
return-type function-name (parameters)
{
	body (declarations, statements)
}
```
- `return-type`: 함수 반환값의 자료형을 지정한다
	- 배열은 반환할 수 없다
	- 반환값이 없다면 `void`형으로 명시한다
	- C89에서는 반환값이 생략되면 `int`형으로 간주하지만, C99부터는 반드시 반환값이 있어야 한다
	- 다른 문법과 마찬가지로 *개행이 자유롭다*. 다음과 같은 형태도 문법상 문제가 없다.
	```c
	double
	average
	(double a, double b)
	{
		return (a + b) / 2;
	}
	```
- `function-name`: 함수의 이름을 지정한다
	- 고유한 이름이어야 한다
- `parameters`: 함수의 인자들을 지정한다
	- 각 인자별로 자료형을 알려야 한다 - 같은 자료형의 변수를 여러 번 받더라도 일일히 명시해야 함
	- 받는 인자가 없으면 `void`를 이용해 인자가 없음을 알린다

## Parameters

> `Prameter` vs `Argument`

두 단어 모두 `인자`로 번역된다. 함수 선언에 있는 변수명을 parameter, 호출할 때 넣는 값을 argument라 한다. 이 둘은 크게 구분할 필요가 없다. 

> *call-by-value*

- 함수를 호출할 때 **함수 scope의 지역 변수**로 값이 복사된다
- Caller scope의 지역 변수와 파라미터 이름이 같아도 상관 없다
- 파라미터를 수정해도 caller에는 영향이 없다 (따라서 변경이 필요할 때는 포인터 사용)

> `default argument promotion`

함수 프로토타입이 없거나 *가변인자를 받는 함수(variadic function)*의 경우 인자들을 다음 규칙에 맞추어 (암묵적으로) 변환한 후 전달한다.
1. `float` -> `double`
2. integer promotion: int보다 작은 정수 자료형(`char`, `short` 등)은 int (또는 unsigned int)로 전환한다

함수 프로토타입이 있는 경우, 인자들은 implicit type casing을 거쳐 전달된다. 

> array arguments

인자로 배열을 전달할 때에는 *포인터로 전달된다*. 
- 포인터만 가지고는 경계가 어디인지 알 수 없기 때문에, 별도의 인자로 배열 길이를 전달해주어야 한다
- 포인터를 통해 배열이 전달되기 때문에 함수 내에서 원소를 수정하면 caller에서도 반영된다 
- 일차원 배열의 경우 길이를 생략할 수 있지만, 다차원 배열의 경우 두 번째 이후부터는 길이를 반드시 지정해야 한다. (다차원 배열을 전달해야 할 때는 포인터 배열을 사용해서 이 문제를 해결할 수 있다)

여기부터는 C서운 사실들.
- VLA를 인자로 전달할 때, 크기에 대해 관계를 다음과 같이 정의해줄 수 있다
	```c
	int sum(int m, int n, int arr[m][n])
	```
	- 이때 반드시 배열의 크기가 되는 변수가 배열보다 앞에 나와야 한다
	- 위 함수의 프로토타입은 다음과 같이 작성할 수 있다
		```c
		int sum(int, int, int [*][*])
		```
		여기에서  `*`은 해당 배열의 크기가 이전 인자와 관련이 있다는 것을 알려준다
- `static` 키워드를 사용해 인자로 전달되는 배열의 최소 크기를 명시할 수도 있다
	```c
	int sum(int arr[static 5], int n)
	```
	이는 컴파일러 최적화에 도움을 주고(prefetch), 혹시 NULL pointer를 전달하는 코드가 있으면 오류를 발생시켜 도움을 준다고 하는데... UB이다. static 키워드의 사용 가능만 있지 [컴파일러가 어떻게 처리해야 할 지는 정의되지 않았다](https://stackoverflow.com/questions/3430315/what-is-the-purpose-of-static-keyword-in-array-parameter-of-function-like-char). 


## Implicit function declaration

컴파일러는 순차적으로 코드를 번역한다. 즉, 코드의 호출 시점 이전에 선언된 함수에 대한 정보만 알 수 있다. 
만약 호출 시점 이전에 함수가 선언되지 않았다면 `implicit declaration`을 자동적으로 생성하고 이에 맞춰 컴파일을 시도한다.

implicit declaration된 함수는 다음 특성을 갖는다고 여겨진다:
- `int` 자료형을 반환값으로 갖는다
- `deault argument promotion`을 이용해 인자를 지정한다
만약 implicit declaration된 함수와 실제 함수의 선언이 다르다면 ***컴파일 에러가 발생***한다.

따라서 `function definition`을 Caller 함수 나중(혹은 다른 파일)에 작성하려면 `function declaration`을 Caller 이전에 넣어줄 필요가 있다. 

> C99부터는 implicit function declaration이 발생하면 에러로 처리한다. (그런데 무시할 수 있는 에러이다...)

# Function declaration (*prototype*)

declaration(prototype)은 본 함수의 선언 이전에 컴파일러에 함수 원형을 알리는 역할을 한다. definition보다 뒤에 와도 상관없지만, 사용하는 목적상 코드의 가장 위에 나열한다. 

```
return-type function-name (parmeters) ;
```

function body 없이 함수의 반환 자료형과 인자에 대한 정보만을 사전에 선언한다. declaration에서 정의하는 프로토타입은 본 함수의 반환값/인자와 동일해야 한다. 이때 각 인자의 변수명은 달라도 되고 생략할 수도 있다. 그러나 자료형과 순서는 같아야 한다.

다음 두 declaration은 모두 문법적으로 올바른 프로토타입이다.
```c
double average(double a, double b);
double average(double, double);
```

참고: 세미콜론을 동반하지만, *C에서는 declaration/definition은 statement가 아니다*. (cf. [C++에서는 declaration statement를 정의](https://stackoverflow.com/questions/45624842/are-function-definitions-function-calls-and-declarations-statements-in-c))

C서운 사실: function declaration과 variable declaration은 동등하다. 다음 코드들은 문법적으로 올바르다.
```c
double x, y, average(double, double);
double f1(double), f2(double);
```

이렇게 때문에 function declaration을 지역적으로 선언하는 것도 가능하다.
```c
int main(void)
{
	double x, f1(double);
	x = f1(1.1);
}
```
그치만 지역적으로 선언되었더라도 프로토타입은 프로토타입이다.
프로토타입 중 하나라도 다르면 컴파일시에 *confilicting type* 오류가 발생하니까, 전역적으로 선언하는 것이 더 권장되는 방법. 
