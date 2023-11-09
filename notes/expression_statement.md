# statement

실행 가능한 명령이다. 일반적으로 C의 statement는 세미콜론으로 종료를 알린다. control-flow나 메모리 등, 상태 변화의 원인이다.

- return statement(`return`)
	- 함수에서 빠져나오는 명령
	- 함수 형식에 따라 어떤 값을 '반환'할 지 명시
- expression statement
	- expression을 statement처럼 사용하는 문법
	- 모든 종류의 expression에서 사용 가능
	- `i = i + 1;`을 예시로 들면...
		- `i + 1`은 expression이다 (산술 연산)
		- `i = ()`은 expression이다 (대입 연산)
		- expression은 독립적으로 존재할 수 없다 -> 세미콜론을 붙여 statement로 지정할 수 있다
		- statement가 된다면 i에 `i + 1`의 연산결과를 저장하는 statement이다
- selection statement
	- if statement
		- ` if (expression) statement` 형태, 또는 
		- ` if (expression) statement else statement` 형태로 쓰인다
		- expression의 값이 참으로 *평가*되면(= 0이 아니면) 따라오는 statement를 실행한다
		- **statement를 실행한다**는 문장에 주목하자. 조건이 참이면 *한 개의* statement가 실행된다. 이때 compund statement가 주로 사용되는 것
		- else는 clause(구문)이므로, 하나의 statement로 취급된다. 즉, 다음 코드는 문법상 문제가 없는 것: 
			```c
			if (expr)
				if (expr2)
				{
					statement, ...
				}
				else
				{
					statement, ...
				}
			```
			- 안쪽에 if-else 구문이 있지만 중괄호를 사용하여 compound statement로 만들지 않은 것에 주목하자. else까지도 하나의 if statement로 취급하기 때문이다
			- 같은 이유로, `if - if - else`가 compound statement로 구분되지 않고 묶여있는 경우 안쪽의 if-else가 쌍을 이루게 된다.
		- cascaded if statement: 사실 `else if`는 별도의 문법이 아니다. nested if statement인 것. if-else if-...-else 형태에서, else는 처음 if와 짝을 이루지 않는다!! 
	- switch statement
		- `switch (expression) { case constant-expression: statements; ...; default: statements }` 형태
		- expression의 값에 따라 case를 구분하여 statement를 실행한다
		- expression, constant-expression은 모두 정수형이다
		- statement가 아니라 *복수형인* statements라는 것에 주목. if statement와 다르게 여러 개의 명령을 처리하기 위해 compound statement로 묶어 줄 필요가 없다
		- `case` 라벨로 점프하는 것... 조건에 맞는 특정 라벨로 점프한다고 생각하면 된다
		- `constatns-expression`은 라벨의 조건이다. 이름에서 알 수 있듯, 상수값만 가질 수 있다. 즉, *변수를 포함하지 않은* expression이어야 한다는 것. `10 / 2`는 가능하지만, `i / 2`는 가질 수 없다.
		- `default` 라벨은 필수가 아니다. 만족하는 case가 없으면 아무런 동작도 하지 않고 넘어간다
		- 하나의 statements 앞에 여러 개의 case가 있어도 된다

- iteration statement
	- for statement
	- while statement
	- do statement
- jump statement
	- break statement
	- continue statement
	- goto statement
- compound statement
	- `{ statement; statement; ... }`
	- 중괄호로 statement를 묶은 statement
	- 여러 개의 statement를 하나의 compound statement로 취급한다
- null statement

# expression

특정한 값이다. 어떤 statement 안에서 사용된다. 

operator(연산자), constant(상수) 또는 variable(변수)가 expression을 구성한다. 주의할 점은 연산자 각각이 하나의 expression일 수도 있다는 점이다.

- arithmetic operator (산술 연산자)
	- unary arithmentic operator 
		- 한 개의 값(operand) 필요
		- `+` , `-`: 값의 부호 변화 
		- 연산자 우선순위상 unary operator가 binary operator보다 순위가 높아서 먼저 적용됨
			- 예를 들어, `i = -j + 1`에서는 unary의 우선순위가 높으므로 `i = ((-j) + 1)` 순으로 연산됨
			- but, 우선순위가 높다고 우선적으로 적용되는 것은 아님. operand 개수가 두 개이면 binary로 해석
			- 예를 들어, `i = j + 1`에서는 operand가 두 개이므로 binary operator로 해석
		- right associative 연산자이므로 적용 순서는 RTL
	- binary arithmetic operator
		- 두 개의 값(operand) 필요
		- `+`, `-`: 덧셈 연산(additive)
		- `*`, `/`, `%`: 곱셈 연산(multiplicative)
		- 연산자 우선순위상 multiplicative가 additive보다 순위가 높아서 먼저 적용됨
		- C99 이전 표준에서는 `/`, `%` 연산의 operand 중 음수가 있으면 IB라서 확실하게 말할 수 없음
		- left associative 연산자이므로 적용 순서는 LTR
		- (`%` 연산을 제외하고) operand의 자료형이 달라도 허용. 실수형 vs 정수형이면 실수형으로 캐스팅되고, 정수형끼리에는 [conversion rank](https://stackoverflow.com/questions/46073295/implicit-type-promotion-rules)에 따라 큰 쪽으로 캐스팅됨
- assignment operator (대입 연산자)
	- simple assignment operator: `=`
		- right associative
		- `lvalue = rvalue` 형식 요구
		- 대입 자체는 statement이 아니라 *expression이므로* 대입도 하나의 값을 가짐: lvalue에 저장된 값을 값으로 가짐
		- 따라서 `i = (j = 3) + 1;`이라는 *statement*에서, 
			- `(j = 3)`이라는 *expression*은 j에 3을 저장한 후 3이라는 값을 가지게 되고
			- `i = 3 + 1`이라는 *expression*에서 arithmetic operator의 우선순위가 assignment operator보다 순위가 높으므로 `3 + 1`이라는  *expression*이 4라는 값을 가지게 되고
			- `i = 4;`라는 *expression statement`가 되는데
			- `i = 4`라는 *expression`은 i에 4라는 값을 저장하고 나서 4라는 값이 가지게 되고
			- 이 값은 `4;`라는 *expression statement`에서 더 이상 처리되지 않고 날라감.
	- compund assignment operator
		- arithmetic operator 관련: `+=`, `-=`, `*=`, `/=`, `%=`
		- bitwise operator 관련: `<<=`, `>>=`, `&=`, `^=`, `|=`
		- rvalue에 해당하는 expression의 결과를 lvalue에 연산하고 저장
		- rvalue가 하나의 값으로 정해졌을 때 lvalue에 연산한다는 것에 주의 (예를 들어, `i *= j + 3`은 `i = i * (j + 3)`이지 `i = i * j + 3`이 아님)
	- increment / decrement operator: `++`, `--`
		- 1을 더하거나 뺌
		- **순서가 중요**: 전위연산이냐, 후위연산이냐에 따라 다르게 동작
		- prefix operator (전위 연산자)
			- 예) `++a`
			- 변수의 값이 변화한 후에 expression이 계산됨
			- 즉, expression 실행 시점에 변화된 값이 계산됨
			- right associative
		- postfix operator (후위 연산자)
			- 예) `a++`
			- expression이 계산된 후에 값이 변화
			- 즉, expression 실행 시점에서는 변화 이전의 값이 계산됨
			- left associative
			- prefix operator보다 우선순위가 높음
- relational operator (관계 연산자): `<`, `<=`, `>`, `>=`
	- left associative
	- 결과로 0(false) 또는 1(true)를 가짐
	- 산술 연산자보다 순위가 낮기 때문에 산술 연산이 우선 수행
	- binary operator라는 점을 주의. `a < b < c`같은 expression은 `(a < b) < c`가 되는데, `a < b`는 0 또는 1이기 때문에 `0 < c`와 같은 식으로 계산됨.
- equality operator (동등 연산자): `==`, `!=`
	- left associative
	- 재밌는 트릭 하나: 양변의 결과가 같은지 확인하려면 `(A) == (B)`을 사용할 수 있음. 논리 연산자들을 이용해 같은 효과를 얻으려면 `((A) && (B)) || (!(A) && !(B))`, 이를 더 간단하게 나타내면 `!((A) ^ (B))`
- logical operator (논리 연산자): `&&`, `||`, `!`
	- unary logical operator: `!`
	- binary logical operator: `&&`, `||`
		- left associative이므로, 좌항 계산 후 우항을 계산하고, 두 연산의 값을 평가
		- 이때 이미 좌항에서 조건식의 값이 결정된다면 우항을 계산하지 않고 조기 종료 
		- 예) `||`에서 좌항이 참인 경우, 우항을 계산하지 않고 전체 expression을 참으로 평가
- conditional operator (조건 연산자; 삼항 연산자라고도 함): `?:`
	- C 연산자 중 유일하게 3개의 operand 필요 -> ternary operator (삼항 연산자)
	- `a ? b : c` 형태로 사용, a가 참이면 b expression / 거짓이면 c expression의 결과를 값으로 가짐
	- 산술 연산자와 같은 방식으로 implicit type casting 발생
- comma operator
- bitwise operator
- address operator
- indirection operator
- sizeof operator
- 구조체 관련 연산자

> lvalue: 대입 연산자의 좌변에 오는 값으로, 메모리 상의 객체이다.(해당 expression/statment 이후에도 값이 살아남아 전해진다) C언에서는 변수만 가능하다. 

> rvalue: 대입 연산자의 우변에 오는 값으로, 레지스터 상의 값이다(? 이 부분은 implementation-defined임).(해당 expression/statement가 끝나면 값이 사라진다)

C언어에서는 expression이 rvalue에 해당한다.(변수 각각을 expression으로 본다면, lvalue는 rvalue가 될 수 있다는 조건을 만족)

연산자의 우선순위는 subexpression으로 묶인 부분이 먼저 실행된다. 즉, 소괄호 안에 있는 내용이 우선적으로 처리된다는 뜻.
