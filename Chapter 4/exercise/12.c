/*
Q. Show the output produced by each of following program fragments.
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	i = 5;
	j = ++i * 3 - 2;	// i->6; j = 6 * 3 - 2 -> 16
	printf("(a) %d %d\n", i, j);

	i = 5;
	j = 3 - 2 * i++;	// j = 3 - 2 * 5 -> -7; i->6
	printf("(b) %d %d\n", i, j);

	i = 7;
	j = 3 * i-- + 2;	// j = 3 * 7 + 2 -> 23; i->6
	printf("(c) %d %d\n", i, j);

	i = 7;
	j = 3 + --i * 2;	// i->6; j = 3 + 6 * 2 -> 15
	printf("(d) %d %d\n", i, j);

	return 0;
}