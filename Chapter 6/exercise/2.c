/*
Q. What output does the following program fragment produce?
*/

#include <stdio.h>

int main(void)
{
	int i;

	i = 9384;
	do {
		printf("%d ", i);
		i /= 10;			// i를 10씩 나눔. 즉, {9384, 938, 93, 9} 순으로 출력
	} while (i > 0);		// i > 0일 동안 반복. 네 자리 수이므로 네 번의 iteration이 일어남

	return 0;
}