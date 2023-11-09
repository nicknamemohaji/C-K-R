#include <stdio.h>

int main(void)
{
	int i, n, odd, square;
	
	printf("This program prints a table of squares\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	i = 1;
	odd = 3;
	for (square=1; i<=n; odd+=2)			// for문의 세 expression이 각각 다른 변수를 평가한다는 것에 주목
	{
		printf("%10d%10d\n", i, square);
		++i;
		square += odd;						// 완전제곱수의 차는 3, 5, 7, ... 로 증가하는 수열임을 이용한다
	}

	return 0;
}