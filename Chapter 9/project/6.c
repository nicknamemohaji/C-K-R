/*
Q. Write a function that computes the value of the following polynomial: 
	(...)

Write a program that asks the user to enter a value for x, calls the function to compute the value of the polynomial, and then displays the value returned by the function.
*/

#include <stdio.h>

int calculate(int x)
{
	// Horner's Rule - Chapter 2의 Project 6번 참고
	return x * (x * (x * (x * (x * (3) + 2) - 5) - 1) + 7) - 6;
}

int main(void)
{
	int x;

	printf("Enter x: ");
	scanf("%d", &x);

	printf("Calculated result is: %d\n", calculate(x));

	return 0;
}