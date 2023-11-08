/*
Q. Show the output produced by each of following program fragments.
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	i = 6;
	j = i += i;						// j = (i += i); i -> 12; j = 12 -> 12;
	printf("(a) %d %d\n", i, j);

	i = 5;
	j = (i -= 2) + 1;				// i -> 3; j = 3 + 1 -> 4
	printf("(b) %d %d\n", i, j);

	i = 7;
	j = 6 + (i = 2.5);				// i는 정수형이므로 소수점 절삭돼 2 저장 -> 2; j = 6 + 2 -> 8
	printf("(c) %d %d\n", i, j);

	i = 2; j = 8;
	j = (i = 6) + (j = 3);			// i -> 6; j -> 3; j = 6 + 3 ->9;
	printf("(d) %d %d\n", i, j);

	return 0;
}