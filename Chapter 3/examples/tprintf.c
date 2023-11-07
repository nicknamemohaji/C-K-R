#include <stdio.h>

int main(void)
{
	int i;
	float x;

	i = 40;
	x = 839.21f;

	/**
	 * 이 예제는 간단한 포맷을 사용해본다: %[field width][.precision]conversion
	 * - field width[int]는 최소 길이를 지정한다. 양수는 우로 정렬, 음수는 좌로 정렬. 남은 공간은 공백으로 채운다.
	 * - precision은 conversion에 따라 동작이 다르다
	 * 	- d: 출력할 최소 길이를 지정. 남은 공간은 0으로 채운다.
	 *  - f: 출력할 소수점 자리수를 지정
	 * f는 일반적인 부동소수점 출력, e는 지수표현, g는 크기에 맞춰 f 또는 g 변환을 사용한다. 
	*/
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0;
}