/*
Write a program that finds the largest and smallest of four integers entered by the user

Use as few if statements as possible. Hint: Four if statements are sufficient.
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4;
	int s1, l1, s2, l2;

	printf("Enter four integers: ");
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

	s1 = n1 > n2 ? n2 : n1;
	l1 = n1 > n2 ? n1 : n2;							// if statement #1 

	s2 = n3 > n4 ? n4 : n3;
	l2 = n3 > n4 ? n3 : n4;							// if statement #2

	printf("Largest: %d\n", l1 > l2 ? l1 : l2);		// if statement #3
	printf("Smallest: %d\n", s1 > s2 ? s2 : s1);	// if statement #4
}