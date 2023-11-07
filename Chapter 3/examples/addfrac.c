#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	/**
	 * scanf는 공백을 건너뛰고, conversion 또는 일반 문자를 중요하게 생각한다
	 * 만약 올바른 입력이 아니라면 거기서 파싱을 멈추고, 나머지는 버퍼에 그대로 남겨서
	 * 직후 scanf는 버퍼에 남은 값을 파싱한다. 
	 * 
	 * conversion 또는 일반 문자 사이에는 공백이 허용되기 때문에 다음 예시들은 정상적으로 입력된다:
	 * - "5/	9"
	 * - "-10/11"
	 * - "21/
	 * 100"
	 * 반면, 다음 예시들은 숫자 뒤에 곧바로 /가 오지 않기 때문에, 비정상적으로 처리된다:
	 * - "5 /9"
	 * - "15 7"
	 * - "21 /
	 * 100"
	 * 
	 * 만약 분자 뒤에도 공백을 허용하고 싶다면 포맷을 "%d/%d" 대신 "%d /%d"로 주면 된다.
	 * (공백을 건너뛰기 때문에, 0개의 공백이 있어도 정상적으로 입력됨)
	*/
	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1);

	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);
	
	return 0;
}