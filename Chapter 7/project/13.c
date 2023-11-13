/*
Q. Write a program that calculates the average word length for a sentence:
*/

#include <stdio.h>

int main(void)
{
	int word_count = 1, letter_count = 0;
	char ch;

	printf("Enter a sentence: ");
	for (;;)
	{
		ch = getchar();
		if (ch == ' ')
			word_count++;
		else if (ch == '\n')
			break;
		else
			letter_count++;
	}

	printf("Average word length: %.1f\n", (float)letter_count / (float) word_count);
	return 0;
}