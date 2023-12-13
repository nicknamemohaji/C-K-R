/*
Q. Modify the reverse.c program of section 8.1 to use the expression 
	(int) (sizeof(a) / sizeof(a[0]))
(or a macro with this value) for the array length.
*/

#include <stdio.h>

#define N 10
#define ArrayLen(ARR) (int)(sizeof(ARR) / sizeof(ARR[0]))

int main(void)
{
	int a[N], i;

	printf("Enter %d numbers: ", ArrayLen(a));
	for (i = 0; i < ArrayLen(a); i++)
		scanf("%d", &a[i]);
	
	printf("In reverse order: ");
	for (i = ArrayLen(a) -1 ; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}