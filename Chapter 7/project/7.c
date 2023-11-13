/*
Q. Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply, or divide two fractions
*/

#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	int temp, num_temp, denom_temp;
	char op;

	printf("Enter two fractions separated by a operator: ");
	scanf("%d /%d %c%d /%d", &num1, &denom1, &op, &num2, &denom2);

	result_denom = denom1 * denom2;
	switch(op)
	{
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			break;
		case '-':
			result_num = num1 * denom2 - num2 * denom1;
			break;
		case '/':
			result_num = (num1 * denom2) / (num2 * denom1);
			break;
		case '*':
			result_num = (num1 * denom2) * (num2 * denom1);
			break;
		default:
			printf("invalid operator\n");
			return 1;
	}

	num_temp = result_num;
	denom_temp = result_denom;
	// calculate GCD
	while (denom_temp != 0)
	{
		temp = num_temp % denom_temp;
		num_temp = denom_temp;
		denom_temp = temp;
	}
	// divide by GCD
	result_num /= num_temp;
	result_denom /= num_temp;

	printf("The result is %d/%d\n", result_num, result_denom);
	
	return 0;
}