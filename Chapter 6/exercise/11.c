/*
Q. What output does the following program fragment produce?
*/

#include <stdio.h>

int main(void)
{
	int i, sum;

	sum = 0;
	for (i=0; i<10; i++)	// 0부터 9까지, i를 1씩 늘려가며 10 번 반복한다.
	{
		if (i % 2)			// i를 늘려주는 작업은 step expression에서 하므로 continue해도 문제없이 반복
			continue ;		// 홀수이면 건너뛴다.
		sum += i;			// sum에 짝수 i를 더한다.
	}
	printf("%d\n", sum);	// 즉, 출력은 0부터 9까지 짝수의 합인 20

	return 0;
}