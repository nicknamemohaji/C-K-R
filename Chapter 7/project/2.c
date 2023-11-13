/*
Q. Modify the square2.c program so that it pauses after every 24 squares and displays the following message:
(...)

After displaying the message, the program should use getchar to read a character. getchar won't allow the program th continue until the user presses the Enter key
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	
	printf("This program prints a table of squares\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	getchar();		// scanf에서 남은 입력 버퍼를 넘어가야됨

	for (i=1; i<=n; i++)
	{
		printf("%10d%10d\n", i, i * i);
		if (i % 24 == 0)
		{
			printf("Press Enter to continue... ");
			while(getchar() != '\n') ;
		}
	}

	return 0;
}