/*
Q. What output does the following program fragment produce?
*/

#include <stdio.h>

int main(void)
{
	int i;
	
	i = 1;
	while (i <= 128)		// i <= 128까지 반복. 즉 8번의 iteration이 있고, 2^0부터 2^7까지 출력
	{
		printf("%d ", i);	// 각 iteration마다 i를 출력
		i *= 2;				// i에 2씩 곱함: 1, 2, 4, 8, ..
	}

	return 0;
}