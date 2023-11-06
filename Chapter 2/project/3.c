#include <stdio.h>

#define PI 3.14f

int main(void)
{
	int r;
	
	printf("Type radius of sphere: ");
	scanf("%d", &r);
	
	printf("Volume of the sphere is: %.1f\n", (4.0f/3.0f) * PI * (r * r * r));
	return 0;
}