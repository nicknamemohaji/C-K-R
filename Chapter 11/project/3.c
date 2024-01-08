/*
Modify Programming Project 3 from Chapter 6 so that it includes the following function:
    void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

numerator and denominator are the numerator and denominator of a fraction. 
reduced_numerator and reduced_denominator are pointers to variables in which the function will 
store the numerator and denominator of the fraction once it has been reduced to lowest terms.
*/

/*
Q. Write a program that asks the user to enter a fraction, then reduces the fracvtion to lowest terms.

Hint: To reduce a fraction to lowest terms, first compute the GCD (...)
*/

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
	int	numerator, divider;
	
	printf("Enter a fraction: ");
	scanf("%d /%d", &numerator, &divider);
    reduce(numerator, divider, &numerator, &divider);

	printf("In lowest terms: %d/%d\n", numerator, divider);
	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int temp;

	// calculate GCD
	while (denominator != 0)
	{
		temp = numerator % denominator;
		numerator = denominator;
		denominator = temp;
	}
	// divide by GCD
    *reduced_numerator /= numerator;
    *reduced_denominator /= numerator;
}
