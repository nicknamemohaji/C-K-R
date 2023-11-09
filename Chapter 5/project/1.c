/*
Write a program that calculatees how many digits a number contains

You may assume that the number has no more than four digits.
*/

#include <stdio.h>

int main(void)
{
	int n, digits;

	printf("Enter a number: ");
	scanf("%d", &n);

	// description not clear but i'll assume it's natural number 
	if (n < 10)
		digits = 1;
	else if ((n >= 10) && n < 100)		// 좌변은 생략 가능
		digits = 2;
	else if ((n >= 100) && n < 1000)	// 좌변은 생략 가능
		digits = 3;
	else
		digits = 4;
	printf("The number %d has %d digits\n", n, digits);

	return 0;
}