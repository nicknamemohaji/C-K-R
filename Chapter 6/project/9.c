/*
Q. Programming project 8 in Chapter 2 (...)
Modify the program so that it also asks the user to enter the number of payments and then 
displays tthe balance remaining after each of these payments.
*/

#include <stdio.h>

int main(void)
{
	float loan;
	float yearly_interest;
	float monthly_interest;
	float monthly_payment;
	int number_of_payments;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &yearly_interest);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);\
	printf("Enter number of payments: ");
	scanf("%d", &number_of_payments);
	printf("\n");

	monthly_interest = yearly_interest / 12.0f;

	for (int i = 0; i < number_of_payments; i++)
	{
		loan = (loan * (1.0f + monthly_interest / 100.0f)) - monthly_payment;
		printf("Balance remaining after %d payments: %f\n", i + 1, loan);
	}

}