/*
Q. Give the values of i and j after each of the following expression statements has been executed.
*/

#include <stdio.h>

int main(void)
{
	int i = 1, j = 2;

	i += j;
	printf("(a) %d %d\n", i, j);
	i--;
	printf("(b) %d %d\n", i, j);
	i * j / i;						// expression statement가 실행되면 2라는 값이 남지만
	printf("(c) %d %d\n", i, j);	// 이 값을 대입하지 않으므로 변수 값에는 영향이 없다.
	i % ++j;						// expression statement의 실행결과는 2
	printf("(d) %d %d\n", i, j);	// 전위연산자를 사용했으므로 j값은 바뀜

	return 0;
}