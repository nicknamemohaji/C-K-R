/*
Write a program that asks the user to enter a two-digit number,
then prints the number with its digits reversed.

Read the number using %d, then breeak it into two digits.
*/

#include <stdio.h>

int main(void)
{
	int n;
	int n1, n2;

	printf("Enter a two-digit number: ");
	scanf("%d", &n);

	n1 = n / 10;
	n2 = n % 10; 
	printf("The reversal is: %1d%1d\n", n2, n1);

	return 0;
}