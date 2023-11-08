/*
Q. Show the output produced by each of the following program fragments. 
*/

#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 5; j = 3; 
	printf("(a) %d %d\n", i / j, i % j);

	i = 2; j = 3;								// 소괄호로 묶인 부분이 우선 실행
	printf("(b) %d\n", (i + 10) % j);	 		// 즉, 12 % 4 -> 0

	i = 7; j = 8; k = 9;						// %, / 연산은 우선순위가 같으므로 LTR 순으로 실행
	printf("(c) %d\n", (i + 10) % k / j);		// 즉, 17 % 8 / 9 -> (17 % 8) / 9 -> 1 / 9 -> 0

	i = 1; j = 2; k = 3;						// 각 소괄호가 우선 실행, 이후 부분별로 LTR 순으로 실행
	printf("(d) %d\n", (i + 5) % (j + 2) / k);	// 즉, 6 % 4 / 3 -> 2 / 3 -> 0
}