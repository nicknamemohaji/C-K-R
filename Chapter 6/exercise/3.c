/*
Q. What output does the following for statement produce?
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i=5, j=i-1; i>0, j>0; --i, j=i-1)
		printf("%d ", i);
	/*
	초기값 i = 5, j = 4
	Control expression에 comma expression이 사용되었는데, comma expression의 값은
	우변의 값이므로 j>0이 실질적인 조건이 됨.

	각 iteration이 지날 때마다, i와 j가 1씩 감소...

	(0) 5, 4
	(1) 4, 3
	(2) 3, 2
	(3) 2, 1
	(4) 1, 0

	따라서 {5 4 3 2 } 출력
	*/
	
	return 0;
}