/*
Q) Suppose that we call scanf as follows:
scanf("%f%d%f", &x, &i, &y);

If the user enters
12.3 45.6 789
what will be the values of x, i, and y after the call?

A) x=12.3, i=45, j=0.6; 버퍼에는 " 789"가 남아있다.
*/

#include <stdio.h>

int main(void)
{
	int i;
	float x, y;

	scanf("%f%d%f", &x, &i, &y);
	printf("x %f, i %d, y %f\n", x, i, y);
}