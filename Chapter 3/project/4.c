#include <stdio.h>

int main(void)
{
	int tel1, tel2, tel3;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &tel1, &tel2, &tel3);
	printf("You entered %d.%d.%d\n", tel1, tel2, tel3);

	return 0;
}