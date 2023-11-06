#include <stdio.h>

/**
 * 변수가 아닌 값들은 모두 constant로 처리
 * 정수형으로 간주되므로 `f`나 `l`등의 접미사를 붙여 형을 명시하는 것이 권장
 * - 이 상황에서 (5 / 9)로 선언시 SCALE_FACTOR에는 0이 들어감
 * string literal의 경우 큰따옴표로 감싸서 표현
*/
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
	/**
	 * 변수 이름(identifier): 문자, _, 숫자로 구성
	 * - 문자 또는 _로 시작해야 함
	 * - C99부터는 unicode 영역의 모든 문자 사용 가능(?) ---- std=c90 넣고 돌려도 컴파일 잘 되는데;
	 * - 대소문자 구분
	 * Coding conventions... indentation, naming conventions, whitespace between operators, ...
	*/
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius equivalent: %.1f\n", celsius);

	return 0;
}