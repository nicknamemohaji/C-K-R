/*
Q: Write calls of printf that displays float variable x in the following forms
(...)

A: 
(a) Exponential notation(%e): ljustified(8), precision(1)
(b) Exponential notation(%e): rjustified(10), precision(6)
(c) Decimal notation(%f): ljustified(8), precision(3)
(d) Deciaml notation(%f), rjustified(6), precision(0)
*/

#include <stdio.h>

int main(void)
{
	float x = 31.337f;

	printf("(a): |%-8.1e|\n", x);
	printf("(b): |%10.6e|\n", x);
	printf("(c): |%-8.3f|\n", x);
	printf("(d): |%6.0f|\n", x);
}