/*
Q. What output do the following calls of printf produce?
*/

#include <stdio.h>

int main(void)
{
	printf("(a): [");
	printf("%6d, %5d", 86, 1040);
	printf("]\n");

	printf("(b): [");
	printf("%12.5e", 30.253);
	printf("]\n");

	printf("(c): [");
	printf("%.4f", 83.162);
	printf("]\n");

	printf("(d): [");
	printf("%-6.2g", .0000009979);
	printf("]\n");

	return 0;
}