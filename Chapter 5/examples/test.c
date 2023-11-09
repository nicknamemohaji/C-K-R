#include <stdio.h>

int main(void)
{
	int a = 3;
	if (a++ == 3)
		if (a == 3)
			printf("yesyes");
		else if (a == 4)
			printf("ohooh");
		else
			printf("nonono");
}