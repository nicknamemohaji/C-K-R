/*
Q. Repeat Exercise 3, but this time use a designated initializer. Make the initializer short as possible.
*/

#include <stdbool.h>

int main(void)
{
	bool weekend[] = {[0] = true, [6] = true};							// 가장 마지막 인덱스가 6이므로, 크기가 7인 배열을 선언한다
	// bool weekend[7] = {[0] = true, [6] = true};						// array initializer는 명시되지 않은 위치를 0으로 초기화하므로, true 위치만 지정해주면 된다		
}