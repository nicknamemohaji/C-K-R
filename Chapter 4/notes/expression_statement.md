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
		- statement가 된다면 i에 `i + 1`의 연산결과를 저장하는 statement이다.
- selection statement
- iteration statement
- jump statement
- compound statement
- null statement

# expression

특정한 값이다. 어떤 statement 안에서 사용된다. 

operator(연산자), constant(상수) 또는 variable(변수)가 expression을 구성한다. 주의할 점은 연산자 각각이 하나의 expression일 수도 있다는 점이다.

- arithmetic operator (산술 연산자)
- assignment operator (대입 연산자)
- increment / decrement operator (증가 / 감소 연산자)
- relational operator, equality operator (관계 연산자)
- logical operator (논리 연산자)
- comma operator
- bitwise operator
- address operator
- indirection operator
- sizeof operator
- 구조체 관련 연산자

> lvalue: 대입 연산자의 좌변에 오는 값으로, 메모리 상의 객체이다.(해당 expression/statment 이후에도 값이 살아남아 전해진다) C언에서는 변수만 가능하다. 

> rvalue: 대입 연산자의 우변에 오는 값으로, 레지스터 상의 값이다(?).(해당 expression/statement가 끝나면 값이 사라진다) C언어에서는 expression에 해당한다.(변수 각각을 expression으로 본다면, lvalue는 rvalue가 될 수 있다는 조건을 만족)
