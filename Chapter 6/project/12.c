/*
Q. Modify project 11 so that the program continues adding terms until the current term 
becomes less that epsilon, where epsilon is a small (floating point) number entered by the user
*/

#include <stdio.h>

int main(void)
{
	int n, temp;
	float approx = 1.0f, epsilon, term;

	printf("Enter epsilon: ");
	scanf("%f", &epsilon);

	term = 1.0f;
	for (int i = 1; term > epsilon; i++)
	{
		temp = 1;
		for (int j=1; j <= i; j++)
			temp *= j;
		term = 1.0f / temp;
		approx += term;
	}
	printf("The approximated value is: %f\n", approx);

	return 0;
}