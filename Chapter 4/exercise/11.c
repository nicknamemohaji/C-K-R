/*
Q. Show the output produced by each of following program fragments.
*/

#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 1;
	printf("(a) %d ", i++ -1);			// 후위연산이므로 (1 - 1) 출력, i -> 2
	printf("%d\n", i);

	i = 10; j = 5;
	printf("(b) %d ", i++ - ++j);		// 각각 후위/전위이므로 (10 - 6) 출력, i->11, j->6
	printf("%d %d\n", i, j);

	i = 7; j = 8;
	printf("(c) %d ", i ++ - --j);		// 각각 후위/전위이므로 (7 - 7) 출력, i->8, j->7
	printf("%d %d\n", i, j);

	i = 3; j = 4; k = 5;
	printf("(d) %d ", i++ - j++ + --k);	// (3 - 4 + 4) 출력, i->4, j->5, k->4
	printf("%d %d %d\n", i, j, k);
}