#include <stdio.h>

#define PI 3.14f

int main(void)
{
	int r = 10;

	printf("4/3: %.1f\n", (4/3) * PI * (r * r * r));						// 정수형끼리의 연산이므로, 1 * PI * r^3으로 계산 (X)
	printf("(float) (4/3): %.1f\n", (float) (4/3) * PI * (r * r * r));	// 정수형으로 나눈 후 부동소수점으로 전환하므로 1.0f * PI * r^3 (X)
	printf("4.0f/3: %.1f\n", (4.0f/3) * PI * (r * r * r));				// float이 int보다 순위가 높으므로 둘 중 하나만 부동소수점이어도 형 변환 후 연산 -> 올바른 값이 나옴 (O)
	printf("4/3.0f: %.1f\n", (4/3.0f) * PI * (r * r * r));				// 위와 동일... 참고: https://learn.microsoft.com/en-us/cpp/c-language/usual-arithmetic-conversions?view=msvc-170 (O)
	printf("4.0f/3.0f: %.1f\n", (4.0f/3.0f) * PI * (r * r * r));
	return 0;
}