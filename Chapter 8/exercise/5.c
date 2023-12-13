/*
Q. The Fibonacci numbers are (...)

Write a program fragment that declares an array named fib_numbers of length 40 and fills the array with the first 40 Fibonacci numbers.
*/

#include <stdio.h>

int main(void)
{
	unsigned long fib_numbers[40] = {0, 1};
	for (int i = 2; i < 40; i++)
		fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
	
	/* ==== check ==== */
	for (int i=0; i<40; i++)
		printf("%d: %lu\n", i + 1, fib_numbers[i]);
}