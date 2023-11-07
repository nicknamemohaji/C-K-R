/*
Q) Suppose that we call scanf as follows:
scanf("%d%f%d", &i, &x, &j);

If the user enters
10.3 5 6
what will be the values of i, x, and j after the call?

A) i=10, x=0.3, j=5; 버퍼에는 " 6"이 남아있다.

1. "10.3 5 6" -> %d conversion에서 .은 illegal한 문자이므로 '1', '0'까지만 해석된다. 
이 값은 i에 저장되고 scanf는 계속 파싱
2. ".3 5 6" -> %f conversion는 정수부 없이 소수부부터 오는 입력을 허용한다.
따라서 illegal한 공백 문자 전까지 '.', '3'이 해석되어 x에 저장되고 계속 scan
3. " 5 6" -> leading blank 무시, 5까지 해석하고 나머지는 버퍼에 남음
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	float x;
	
	scanf("%d%f%d", &i, &x, &j);
	printf("i %d, x %f, j %d\n", i, x, j);

	return 0;
}