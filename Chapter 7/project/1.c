/*
Q. The square2.c program will fail (usually by printing strange answers) if i * i exceeds the maximum int value.
Run the program and determine the smallest value of n that causes failure. Try changing the type of i to short and running the program again. Then try long.

From these experiments, what can you conclude about the number of bits used to stort integer types on your machine?

A.

[int] 46341에서 값이 튐: 2147395600이 마지막 정상값이고, 이 값은 2 ** 31과 유사하므로 int는 32-bit
[short] 182에서 값이 튐: 32761이 마지막 정상값이고, 이 값은 2 ** 15와 유사하므로 short는 16-bit
[long] GG (64비트임)
*/

#include <stdio.h>

int main(void)
{
	long i, n;
	
	printf("This program prints a table of squares\n");
	printf("Enter number of entries in table: ");
	scanf("%ld", &n);

	for (i=1; i<=n; i++)
		printf("%10ld%10ld\n", i, i * i);

	return 0;
}