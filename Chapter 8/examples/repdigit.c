#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int digit;
	long n;
	// array initializer를 사용했으니 컴파일러에서 나머지 원소들은 0으로 채운다.
	// 근데 false == 0이니 모두 false로 초기화한 것과 같은 효과
	bool digit_seen[10] = {false};

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0)
	{
		digit = n % 10;
		if (digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}

	// 반복문이 조기 종료됐으면 중복되는 숫자가 있는 것
	if (n > 0)
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");
	
	return 0;
}