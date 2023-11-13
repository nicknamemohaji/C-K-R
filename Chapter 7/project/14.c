/*
Q. Write a program that uses Newton's method to compute the square root of a possitive floating point number.
(...)

Have the program terminate when the absolute values of the difference between the old value of y and the new value of y is less than the product of .0000 and y.
Hint: Call the fabs function to find the absolute value of a double.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y = 1.0, new_y;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	new_y = (y + x / y) / 2;
	while (fabs(new_y - y) > y * 0.00001)
	{
		y = new_y;
		new_y = (y + x / y) / 2;
	}

	printf("Square root: %f", y);

	return 0;
}