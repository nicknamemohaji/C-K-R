#include <stdio.h>

double average(double a, double b);


int main(void)
{
	double x, y, z;

	printf("Enter three numbers: ");
	scanf("%lf%lf%lf", &x, &y, &z);
	printf("Average of %g and %g: %g\n", x, y, average(x, y));	// 반환값이 printf의 인자로 들어감
	printf("Average of %g and %g: %g\n", y, z, average(y, z));
	printf("Average of %g and %g: %g\n", x, z, average(x, z));
}

double average(double a, double b)	// 각 인자들에 대해 각각의 자료형을 적어야 한다
{
	return (a + b) / 2;		
	// a + b가 double이므로, double / int에서 int가 double로 형변환된 후 double / double의 연산이 반환됨
	// (arithmetic type conversion)
}