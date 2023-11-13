/*
Q. Give the decimal value of each of the following integer constants

(a) 077
(b) 0x77
(c) 0XABC

*/

#include <stdio.h>
int main(void)
{
	printf("(a) %d \n", 077);		// 0으로 시작하는 integer constant는 octal(8진수)이다. 8 * 7 + 1 * 7 = 63
	printf("(b) %d \n", 0x77);		// 0x로 시작하는 integer constatn는 hexademical(16진수)이다. 16 * 7 + 1 * 7 = 119
	printf("(c) %d \n", 0XABC);		// 16진수 표현은 대문자, 소문자 상관없다. 256 * 10 + 16 * 11 + 1 * 12 = 2748
	
	return 0;
}
