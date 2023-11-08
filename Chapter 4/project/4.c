/*
Write a program that reads an integer entered by the user and displays it octal.

The output should be displayed by five digits, even if fewer digits are sufficient.
*/

#include <stdio.h>

int main(void)
{
	int n;
	int n1, n2, n3, n4, n5;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &n);
	n1 = n % 8;
	n /= 8;
	n2 = n % 8;
	n /= 8;
	n3 = n % 8;
	n /= 8;
	n4 = n % 8;
	n5 = n/= 8;
	printf("In octal, your number is: %1d%1d%1d%1d%1d\n", n5, n4, n3, n2, n1);
}