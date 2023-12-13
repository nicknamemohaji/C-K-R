/*
Q. (...)
Write a "B1FF filter" that reads a message enetered by the user and translates it into B1FF-speak
(...)
Your program should convert the message to upper-case letters, substitute digits for certain letters
(A->4, B->8, E->3, I->1, O->0, S->5), and then append 10 or so exclmation marks. 

Hint: Store the original message in an array of characters, then go back through the array, translating and printing 
characters one by one.
*/

#include <stdio.h>

#define STRING_LEN 50

int main(void)
{
	char	message[STRING_LEN];

	printf("Enter message: ");
	for (int i=0; i<STRING_LEN; i++)
	{
		message[i] = getchar();
		if (message[i] == '\n')
			break ;
	}

	printf("In B1FF-speak: ");
	for (int i=0; message[i] != '\n'; i++)
	{
		if ('a' <= message[i] && message[i] <= 'z')
			message[i] += 'A' - 'a';
		switch(message[i])
		{
			case 'A': message[i] = '4'; break ;
			case 'B': message[i] = '8'; break ;
			case 'E': message[i] = '3'; break ;
			case 'I': message[i] = '1'; break ;
			case 'O': message[i] = '0'; break ;
			case 'S': message[i] = '5'; break ;		
		}
		printf("%c", message[i]);
	}
	for (int i=0; i<10; i++)
		printf("!");
	printf("\n");

	return 0;
}