/*
Q. Write a program that reverses the words in a sentance.

Hint: Use a loop to read the characters one by one and store them in a one-dimensional char array.
Have the loop stop at a period/quetion mark/or exclamantion point (the 'terminating characater'),
which is saved in a separate char variable. Then use a second loop to search backward through ther array for the begginning 
of the last word. Print the last word, then search backward for the next-to last word. Repeat until 
the beggining of the array is reached. Finally, print the terminating character. 
*/

#include <stdio.h>
#define STRING_LEN 100

int main(void)
{
	char ch, sentence[STRING_LEN], termination;
	int	pos, len = 0;

	printf("Enter a sentence: ");
	for(;;) {
		ch = getchar();
		if (ch == '.' || ch == '?' || ch == '!')
		{
			termination = ch;
			break ;
		}
		sentence[len] = ch;
		len++;
	}
	len--;
	
	printf("Reversal of sentence: ");
	while (len >= 0)
	{
		pos = len; 
		while (sentence[pos] != ' ' && pos > 0)
			pos--;
		if (sentence[pos] == ' ')
			pos++;
		while (pos <= len)
		{
			printf("%c", sentence[pos]);
			pos++;
		}
		while (sentence[len] != ' ' && len >= 0)
			len--;
		if (sentence[len] == ' ')
		{
			printf(" ");
			len--;
		}
	}
	printf("%c\n", termination);

	return 0;
}