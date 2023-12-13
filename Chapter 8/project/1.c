/*
Q. Modify the repdigit.c program of Section 8.1 so that it shows which digits were repeated
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	long n;
	int digit, digit_count[10] = {0};
	bool is_repeated = false;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0)
	{
		digit = n % 10;
		if (digit_count[digit] != 0)
			is_repeated = true;
		digit_count[digit] += 1;
		n /= 10;
	}

	if (is_repeated)
	{
		printf("Repeated digits: ");
		for (int i = 0; i < 10; i++)
		{
			if (digit_count[i] > 1)
				printf("%3d", i);
		}
	}
	else
		printf("No repeated digit.");
	
	printf("\n");
	return 0;
}
