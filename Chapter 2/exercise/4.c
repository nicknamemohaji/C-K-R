/**
 * Q: Write a program that declares several int and float variables - 
 * without initializing them - and then prints their values.
 * Is there any patterns to the values? (Usually there isn't)
 * 
 * A: 첫 번째 선언한 a와 세 번째로 선언한 c는 값이 들쭉날쭉함.
 * b는 값이 32766(0x7ffe)로 일정, 나머지 변수들은 0으로 일정
*/
#include <stdio.h>

int main(void)
{
	int a, b;
	float c, d;
	int e, f;
	float g, h;

	printf("%d %d %f %f %d %d %f %f\n", a, b, c, d, e, f, g, h);
	return 0;
}