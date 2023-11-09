/*
Modify the upc.c program so that it checks whether a UPC is valid.
After the user enters a UPC, the program will display either VALID or NOT VALID
*/

#include <stdio.h>

int main(void)
{
	int d, check,
		i1, i2, i3, i4, i5,
		j1, j2, j3, j4, j5,
		first_sum, second_sum, total;
	
	printf("Enter 12-digit UPC code ");
	scanf("%1d", &d);
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	scanf("%1d", &check);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = first_sum * 3 + second_sum;

	if (9 - ((total - 1) % 10) == check)
		printf("VALID\n");
	else
		printf("NOT VALID\n");

	return 0;
}