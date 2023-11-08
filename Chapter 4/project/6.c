/*
European countries use a 13-digit code, known as EAN instead of the 12-digit UPC found in NA.
Each EAN ends with a check digit, just as a UPD does. 
The technique for calculating the check digit is also similar: 
(...)

Your job is to modify the upc.c program so that it calculates the check digit for an EAN. 
The user will enter the first 12 digits of the EAN as a single number
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, n5,
		n6, n7, n8, n9, n10,
		n11, n12,
		first_sum, second_sum, total;

	printf("Enter the first 11 digits of upc: ");
	scanf("%1d%1d%1d%1d%1d", &n1, &n2,&n3, &n4, &n5);
	scanf("%1d%1d%1d%1d%1d", &n6, &n7, &n8, &n9, &n10);
	scanf("%1d%1d", &n11, &n12);

	first_sum = n2 + n4 + n6 + n8 + n10 + n12;
	second_sum = n1 + n3 + n5 + n7 + n9 + n11;
	total = first_sum * 3 + second_sum - 1;
	total %= 10;
	printf("Check digit: %d\n", 9 - total);

	return 0;
}