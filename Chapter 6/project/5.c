/*
Q. Programming Project 1 in Chapter 4 (...). 
Generalize the program so that the number can have one, two, three or more digits. 
*/

#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	do
	{
		if (n % 10 != 0)
			printf("%d", n % 10);
		n /= 10;
	} while (n > 0);
	printf("\n");
	

	return 0;
}