/*
Q. Translate the program fragment of Exervise 1 into a single for statement
*/

#include <stdio.h>

int main(void)
{
	int i;
	
	for (i=1; i<=128; i*=2)
		printf("%d ", i);

	return 0;
}