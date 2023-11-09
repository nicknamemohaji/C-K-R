/*
Q. The following program fragments illustrate the relational and eqality operators. 
Show the output produced by each, assumint that i, j, and k are int variables
*/

#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 2; j = 3;
	k = i * j == 6;						// 연산자 우선순위상 i * j가 먼저 처리. 6 == 6이므로 대입 연산자의 rvalue는 1으로 최종 결정
	printf("(a) %d\n", k);

	i = 5; j = 10; k = 1;
	printf("(b) %d\n", k > i < j);		// 관계연산은 left associative이므로 (k > i) < j임.  (k < i)이므로 0 < j가 되고, 참이므로 1 출력

	i = 3; j = 2; k = 1;
	printf("(c) %d\n", i < j == j < k);	// 연산자 우선순위상 관계 > 동등. 0 == 0이므로 1 출력

	i = 3; j = 4; k = 5;
	printf("(d) %d\n", i % j + i < k);		// 우선순위상 ((i % j) + i) < k. 6 > 5이므로 0 출력

	return 0;
}