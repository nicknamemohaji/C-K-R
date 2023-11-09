/*
Q. The following program fragments illustrate the short-circuit behavior of logical expressions.
Show the output produced by each, assuming that i, j, and k are int variables
*/

#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 3; j = 4; k = 5;
	printf("(a) %d ", i < k || ++j < k);
	printf("%d %d %d\n", i, j, k);
	/*
	(i < k) || ((++j) < k)에서 좌변이 참이므로 우변의 expression은 실행되지 않는다(not evaluated).
	따라서 j의 값은 변하지 않고 그대로 4
	*/

	i = 7; j = 8; k = 9;
	printf("(b) %d ", i - 7 && j++ < k);
	printf("%d %d %d\n", i, j, k);
	/*
	(i - 7) && ((j++) < k)에서 좌변이 거짓(0)이므로 우변의 expression은 실행되지 않는다.
	따라서 j의 값은 그대로 8
	*/

	i = 7; j = 8; k = 9;
	printf("(c) %d ", (i = j) || (j = k));
	printf("%d %d %d\n", i, j, k);
	/*
	i = j에서 i -> 8. 좌변이 참이므로 우변은 건너뛴다.
	따라서 i = 8, j는 그대로 8
	*/

	i = 1; j = 1; k = 1;
	printf("(d) %d ", ++i || ++j && ++k);
	printf("%d %d %d\n", i, j, k);
	/*
	((++i) || (++j)) && (++k)에서, ++i는 실행되어 OR조건문은 참이다. 이미 참임이 결정되었으므로 ++j는 실행되지 않는다.
	AND에서는 좌변만으로 알 수 없으므로 우변의 ++k까지 최종 실행.
	따라서 i = 2, j = 1, k = 2;
	*/

	return 0;
}