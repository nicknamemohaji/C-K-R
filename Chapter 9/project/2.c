/*
Q. Modify Project 5 from Chapter 5 so that it uses a function to compute the amount of income tax. 
When passwd an amount of taxable income, the function will return the tax due. 
*/

#include <stdio.h>

float compute_tax(float);

int main(void)
{
	float taxable;

	printf("Enter the amount of taxable income: ");
	scanf("%f", &taxable);


	printf("The tax due is $%.2f\n", compute_tax(taxable));

	return 0;	
}

float compute_tax(float taxable)
{
	float due;

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
	else 
		due = taxable * 0.01f;
	return due;
}