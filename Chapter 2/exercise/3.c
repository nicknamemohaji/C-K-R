/**
 * Q: Condense the dweight.c program by 
 * (1) replacing the assignments to (...) with initializers and
 * (2) removing the weight variable, instead calculating (...) within the last printf
*/
#include <stdio.h>
#define DWEIGHT_CONSTANT 166

int main(void)
{
	int height = 8,
		length = 12, 
		width = 10, 
		volume = height * width * length;

	printf("Dimensions %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimenional weight (pounds): %d\n", 
			(volume + (DWEIGHT_CONSTANT - 1)) / DWEIGHT_CONSTANT);

	return 0;
}