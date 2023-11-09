/*
Q. Translate the for statement in Exercise 8 into an equivalent while statement. 
You will neew one statement in addition to the while loop itself. 
*/

#include <stdio.h>

int main(void)
{
	int i;

	i = 10;						// loop 외에 추가된 statment 
	while (i >= 1)
	{							// compound statement가 loop body이므로 while loop의 일부로 본다...
		printf("%d ", i++);
		i /= 2;
	}							// ... 여기까지를
}