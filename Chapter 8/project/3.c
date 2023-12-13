/*
Q. Modiffy the repdigit.c program of Section 8.1 so that the user can enter more than one number to be tested for repeated digits.
The program should terminate when the user enters a number that's less than or equal to 0.
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int digit;
	long n;
	bool digit_seen[10];

	for (;;)
	{
		// 매 반복마다 초기화한다
		for (int i=0; i<10; i++)
			digit_seen[i] = false;
		
		printf("Enter a number: ");
		scanf("%ld", &n);

		// 종료 조건
		if (n == 0)
			break ;

		// 각 자릿수를 확인
		while (n > 0)
		{
			digit = n % 10;
			if (digit_seen[digit])
				break;
			digit_seen[digit] = true;
			n /= 10;
		}

		// 반복되는 수가 있으면 조기 종료됨...
		if (n > 0)
			printf("Repeated digit\n");
		else
			printf("No repeated digit\n");
	}
	
	return 0;
}