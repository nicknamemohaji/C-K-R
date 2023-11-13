/*
Q. Assume that a program contains the following decimals: 
(...)

Give the value and the type of each expression listed below.
(...)
*/

#include <stdio.h>

int main(void)
{
	char c = '\1';
	short s = 2;
	int i = -3;
	long m = 5;
	float f = 6.5f;
	double d = 7.5;

	printf("(a) %d\n", c * i);		// char -> int (integer promotion), 1 * -3 = -3 (int)
	printf("(b) %f\n", f / c);		// char -> float (conversion rule), 6.5 / 1.0 = 6.5 (float)
	printf("(c) %f\n", f - d);		// float -> double (conversion rule), 6.5 - 7.5 = -1.0 (double)
	printf("(d) %ld\n", s + m);		// short -> int (integer promotion) -> long (integer rank), 2 + 5 = 7 (long)
	printf("(e) %f\n", d / s);		// short -> double (conversion rule), 7.5 / 2.0 = 3.75 (double)
	printf("(f) %d\n", (int) f);	// float -> int이므로 소수점 절삭, 6 (int)
}