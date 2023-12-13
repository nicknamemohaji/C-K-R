/*
Q. Write a declaration of an array named weekend containing seven bool values. Include an initializer that makes the first and lasst values true; all other values should be false.
*/

#include <stdbool.h>

int main(void)
{
	bool weekend[7] = {true, false, false, false, false, false, true};
	// bool weekend[] = {true, false, false, false, false, false, true};	// 열거하고 크기를 명시하지 않는다면, 7개의 원소를 열거했으므로 크기가 7인 배열을 선언한다
}