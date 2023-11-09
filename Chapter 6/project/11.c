/*
Q. The value of the mathematical constant e can be expressed as an infinite series (...)

Write a program that approximates e by computing the value of (...)
when n is an integer entered by the user
*/

#include <stdio.h>

int main(void)
{
	int n, temp;
	float approx = 1.0f;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		temp = 1;
		for (int j=1; j<= i; j++)
			temp *= j;
		approx += (1.0f / temp);			// operand중 하나가 float이고, binary arithmetic이므로 float으로 형변환됨
	}
	printf("The approximated value is: %f\n", approx);

	return 0;
}