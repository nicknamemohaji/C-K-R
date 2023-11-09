/*
Q. Write a program that finds the largest ina series of numbers entered by the user.
The program must prompt the user to enter numbers one by one. When the user enters 0
or a negative number, the program mustdisplay the largest nonnegative number entered.

Notice that numbers aren't necessarily integers.
*/

#include <stdio.h>

int main(void)
{
	float n, max;

	printf("Enter a number: ");
	scanf("%f", &max);
	if (max <= 0.0f)
		return 0;
	do {
		printf("Enter a number: ");
		scanf("%f", &n);
		if (n > max)
			max = n;
	} while (n >= 0.0f);
	printf("The largest number entered was %f\n", max);
	
	return 0;
}