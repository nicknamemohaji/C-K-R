/*
Q. The power function of Section 9.6 can be made faster by having it calculate x^n in a different way. 
(...)

Write a precursive function that computes x^n. (The recursion ends when n = 0, in which case the function returns 1.)
To test your function, write a program that asks the user to enter values for x and n, calls power to compute x^n, and then displays the value returned by the function.
*/

#include <stdio.h>

int power(int x, int n)
{
	if (n == 0)
		return 1;
	if (n % 2 == 0)
	{
		int pow = power(x, n / 2);
		return pow * pow;
	}
	else
		return power(x, n - 1) * x;
}

int main(void)
{
	int x, n;

	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter n: ");
	scanf("%d", &n);

	printf("Result is: %d\n", power(x, n));

	return 0;
}