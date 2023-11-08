/*
Q. Show the output produced by each of the following program fragments.
*/

#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 7; j = 8;
	i *= j + 1;							// i = i * (j + 1) -> 63
	printf("(a) %d %d\n", i, j);

	i = j = k = 1;
	i += j += k;						// i = i + (j += k); j += k -> 2; i = i + j -> 3
	printf("(b) %d %d %d\n", i, j, k);

	i = 1; j = 2; k = 3;
	i -= j -= k;						// i = i - (j -= k); j -= k -> -1; i = i - (-1) -> 2
	printf("(c) %d %d %d\n", i, j, k);

	i = 2; j = 1; k = 0;
	i *= j *= k;						// i = i * (j *= k); j *= k -> 0; i = i * 0 -> 0
	printf("(d) %d %d %d\n", i, j, k);	
}