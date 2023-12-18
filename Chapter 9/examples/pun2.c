#include <stdio.h>

void print_pun(void)	// 받는 인자가 없으면 빈 소괄호만 있어도 괜찮지만, void를 써 주는 것이 컨벤션
{
	printf("To C, or not to C; that is the question.\n");
}

int main(void)
{
	print_pun();	// 인자가 없어도 소괄호를 이용해 함수 호출이란 것을 명시
	return 0;
}
