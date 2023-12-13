/*
Q. Modiffy the repdigit.c program of Section 8.1 so that it prints a table showing how many times each digit appears
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	long n;
	int digit, digit_count[10] = {0};

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0)
	{
		digit = n % 10;
		digit_count[digit] += 1;
		n /= 10;
	}

	printf("%-20s", "Digits");
	for (int i = 0; i < 10; i++)
		printf("%3d", i);
	printf("\n");

	printf("%-20s", "Occurrences: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%3d", digit_count[i]);
	}
	printf("\n");
	return 0;
}
