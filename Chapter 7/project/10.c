/*
Q. Write a program that counts the number of vowels in a sentence
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int sum = 0;

	printf("Enter a sentence: ");
	do {
		ch = getchar();
		ch = toupper(ch);

		switch (ch)
		{
			case 'A':	// FALLTHROUGH
			case 'E':	// FALLTHROUGH
			case 'I':	// FALLTHROUGH
			case 'O':	// FALLTHROUGH
			case 'U':
				sum += 1;
				break;
		}
	} while (ch != '\n');
	printf("Your sentence contains %d vowels.\n", sum);

	return 0;
}