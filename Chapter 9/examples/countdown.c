#include <stdio.h>

// 반환값이 없는 함수에 대해서는 return type을 void로 설정한다
// void형은 rvalue조차 될 수 없음: 대입, 연산 등이 불가능
void print_count(int n)
{
	printf("T minus %d and counting.\n", n);
	// return statement가 없이 종료되어도 caller 함수로 넘어간다 
}

int main(void)
{
	int i;

	for (i = 10; i > 0; --i)
	{
		print_count(i);		// 반환값이 없으므로 인자로 사용하지 않고 직접 호출
	}
	return 0;
}