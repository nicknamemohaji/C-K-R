/*
Extend the program in Programming Project 1 to handle three-digit numbers.
*/

#include <stdio.h>

int main(void)
{
	int n;
	int n1, n2, n3;

	printf("Enter a three-digit number: ");
	scanf("%d", &n);

	n1 = n / 100;
	n2 = (n / 10) % 10;
	n3 = n % 10; 
	printf("The reversal is: %1d%1d%1d\n", n3, n2, n1);

	return 0;
}