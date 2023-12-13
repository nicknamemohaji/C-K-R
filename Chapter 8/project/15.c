/*
Q. (...) Write a program that encrypts a message using a Ceaser cipher. The user will enter the message to be
encrypted and the shift amouint (the number of positions bu which letters should be shifted)

You may assume that the messsage does not exceed 0 characters. Characters other than letters should be left unchanged.
Lower-case letters remain lower-case when encrypted, and upper-case letters remain upper-case.

Hint: To handle the wrap-around problem, use the expression
	((ch - 'A') + n) % 26 + 'A'
to calculate the encrypted version of an uppercase letter, where ch stores the letter and n stores the shift amount. 
*/

#include <stdio.h>

int main(void)
{
	char plaintext[80], ch;
	int n, len = 0;

	printf("Enter message to be encrypted: ");
	for (;;) {
		ch = getchar();
		if (ch == '\n')
		 	break ;
		plaintext[len] = ch;
		len++;
	}
	printf("Enter shift amount (1 - 25): ");
	scanf("%d", &n);

	printf("Encrypted message: ");
	for (int i=0; i<len; i++)
	{
		if ('a' <= plaintext[i] && plaintext[i] <= 'z')
			printf("%c", 'a' + (plaintext[i] - 'a' + n) % 26);
		else if ('A' <= plaintext[i] && plaintext[i] <= 'Z')
			printf("%c", 'A' + (plaintext[i] - 'A' + n) % 26);
		else
			printf("%c", plaintext[i]);
	}
	printf("\n");

	return 0;
}