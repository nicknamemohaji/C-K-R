#include <stdio.h>

int main(void)
{
	float loan;
	float yearly_interest;
	float monthly_interest;
	float monthly_payment;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &yearly_interest);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	monthly_interest = yearly_interest / 12.0f;
	loan = (loan * (1.0f + monthly_interest / 100.0f)) - monthly_payment;
	printf("\n");
	printf("Balance remaining after first payment: %f\n", loan);
	loan = (loan * (1.0f + monthly_interest / 100.0f)) - monthly_payment;
	printf("Balance remaining after second payment: %f\n", loan);
	loan = (loan * (1.0f + monthly_interest / 100.0f)) - monthly_payment;
	printf("Balance remaining after third payment: %f\n", loan);
}