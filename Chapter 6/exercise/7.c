/*
Q. Translate the program fragment of Exercise 2 into a single for statement
*/

#include <stdio.h>

int main(void)
{
	int i;

	// 어차피 초기값 i가 0보다 커서 iteration이 실행되므로, do statement와 같은 출력을 가진다.
	for (i = 9384; i > 0; i /= 10)
		printf("%d ", i);

	return 0;
}