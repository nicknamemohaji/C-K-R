/*
Q. Write a program that computes the factorial of a positive integer

(a) Use a short variable to store the value of the factorial. What is the largest value of n for which the program correctly prints the factorial of n?
(b) Repeat part (a), using an int variable instead.
(c) Repeat part (a), using an long variable instead.
(d) Repeat part (a), using a long long variable instead.
(e) Repeat part (a), using an float variable instead.
(f) Repeat part (a), using an double variable instead.
(g) Repeat part (a), using an long double variable instead.

*/

#include <stdio.h>

int main(void)
{
	short n;

	printf("Enter a positive integer: ");
	scanf("%hd", &n);

	short val_s = n;
	for (short i = n - 1; i >= 1; i--)
		val_s *= i;
	printf("(a) Factorial of %hd: %hd\n", n, val_s);		// n = 7

	int val_i = (int) n;
	for (int i = (int) n - 1; i >= 1; i--)
		val_i *= i;
	printf("(b) Factorial of %hd: %d\n", n, val_i);			// n = 12

	long val_l = (long) n;
	for (long i = (long) n - 1l; i >= 1l; i--)
		val_l *= i;
	printf("(c) Factorial of %hd: %ld\n", n, val_l);		// n = 20

	long long val_ll = (long long) n;
	for (long long i = (long long) n - 1ll; i >= 1ll; i--)
		val_ll *= i;
	printf("(d) Factorial of %hd: %lld\n", n, val_ll);		// n = 20

	float var_f = (float) n;
	for (float i = (float) n - 1.0f; i >= 1.0f; i--)
		var_f *= i;
	printf("(e) Factorial of %hd: %.0f\n", n, var_f);		// n = 35

	double var_d = (double) n;
	for (double i = (double) n - 1.0; i >= 1.0; i--)
		var_d *= i;
	printf("(f) Factorial of %hd: %.0lf\n", n, var_d);		// n = 170

	long double var_ld = (long double) n;
	for (long double i = (long double) n - 1.0l; i >= 1.0l; i--)
		var_ld *= i;
	printf("(g) Factorial of %hd: %.0Lf\n", n, var_ld);		// n = 1754

	return 0;
}