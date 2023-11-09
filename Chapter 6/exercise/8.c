/*
Q. What output does the following for statement produce?
*/

#include <stdio.h>

int main(void)
{
	int i;

	for (i=10; i>=1; i/=2)
		printf("%d ", i++);
	/*
	(0) 10
	10 출력, 10 -> 11		(후위연산자이므로 expression의 값은 10이고, evaluation이 완전히 끝난 후에 1이 더해짐)
	(1) 11 -> 5				(integer type이므로 몫만 남음)
	5 출력, 5 -> 6
	(2) 6 -> 3
	3 출력, 3->4
	(3) 4 -> 2
	2 출력, 2 -> 3
	(4) 3 -> 1
	1 출력, 1 -> 2
	(5) 2 -> 1
	1 출력, 1 -> 2
	...
	*/
}