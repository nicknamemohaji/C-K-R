/*
Q. Which one of the following is not a legal way to write the number 65?
(Assume that the charset is ASCII)

A. (b)

이진수 표현은 표준 문법이 아니다:

5.c:19:21: warning: binary integer literals are a GNU extension [-Wgnu-binary-literal]
        printf("(b) %d\n", 0b1000001);
                           ^
*/

#include <stdio.h>

int main(void)
{
	printf("(a) %d\n", 'A');
	printf("(b) %d\n", 0b1000001);
	printf("(c) %d\n", 0101);
	printf("(d) %d\n", 0x41);
}
