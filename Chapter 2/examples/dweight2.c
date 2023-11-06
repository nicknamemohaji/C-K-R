#include <stdio.h>
/**
 * macro definition: 전처리 과정에서 이 상수들은 치환됨
 * - 연산이 포함된 경우 괄호로 묶어주는 것이 권장
 * - 메크로 이름은 대문자로만 쓰는 것이 컨벤션
*/
#define INCHES_PER_POUND 165

int main(void)
{
	int height, length, width, volume, weight;

	printf("Enter height of the box: ");
	scanf("%d", &height);
	printf("Enter length of the box: ");
	scanf("%d", &length);
	printf("Enter width of the box: ");
	scanf("%d", &width);
	volume = height * length * width;
	weight = (volume + (INCHES_PER_POUND - 1)) / INCHES_PER_POUND;
	
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimenional weight (pounds): %d\n", weight);

	return 0;	
}