/*
Q. Write a program that asks the user to enter a fraction, then reduces the fracvtion to lowest terms.

Hint: To reduce a fraction to lowest terms, first compute the GCD (...)
*/

#include <stdio.h>

int main(void)
{
	int	numerator, divider, 
		numerator_temp, divider_temp, temp;
	
	printf("Enter a fraction: ");
	scanf("%d /%d", &numerator, &divider);
	numerator_temp = numerator;
	divider_temp = divider;

	// calculate GCD
	while (divider_temp != 0)
	{
		temp = numerator_temp % divider_temp;
		numerator_temp = divider_temp;
		divider_temp = temp;
	}
	// divide by GCD
	numerator /= numerator_temp;
	divider /= numerator_temp;

	printf("In lowest terms: %d/%d\n", numerator, divider);
	return 0;
}