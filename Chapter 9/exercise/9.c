/*
Q. What will be the output of the following program?

A. i=1, j=2

swap 함수가 올바르게 작동하려면 변수값이 아니라 포인터를 받아야 한다. C는 call by value이므로, 매게변수끼리 바꿔도 Caller에는 영향이 없다. 
*/

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
	int i=1, j=2;

	swap(i, j);
	printf("i = %d, j = %d\n", i, j);
	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}