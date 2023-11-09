/*
In one state, single residents are subject to the following inccome tax: 
(...)

Write a program that asks the user to enter the amount of taxable income, then displays the tax due.
*/

#include <stdio.h>

int main(void)
{
	float taxable, due;

	printf("Enter the amount of taxable income: ");
	scanf("%f", &taxable);

	if (taxable > 7000.0f)
		due = 230.0f + (taxable - 7000.0f) * 0.06f;
	else if (taxable > 5250.0f)
		due = 142.5f + (taxable - 5250.0f) * 0.05f;
	else if (taxable > 3750.0f)
		due = 82.5f + (taxable - 3750.0f) * 0.04f;
	else if (taxable > 2250.0f)
		due = 37.5f + (taxable - 2250.0f) * 0.03f;
	else if (taxable > 750.0f)
		due = 7.5f + (taxable - 750.0f) * 0.02f;
	else due = taxable * 0.01f;
	printf("The tax due is $%.2f\n", due);

	return 0;	
}