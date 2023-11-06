#include <stdio.h>

int main(void)
{
	/**
	 * 변수 선언부 - 초기화되지 않은 값이니 주의
	 * 선언과 동시에 initialize 할 수도 있음; 각 변수마다 하나씩 초기화 필요
	*/
	int height, length, width, volume, weight;

	height = 8;
	length = 12;
	width = 10;
	volume = height * width * length;
	/**
	 * 정수형 끼리의 연산이기 때문에, volume / 166을 한다면 소수점이 절삭됨
	 * -> 올림을 처리하기 위해 165를 더한 후 166으로 나눠줌
	 * (165를 더하고 나눈다면 volume을 166으로 나눈 나머지가 1 이상일 때 +1되기 때문)
	*/
	weight = (volume + 165) / 166;

	printf("Dimensions %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimenional weight (pounds): %d\n", weight);

	return 0;
}