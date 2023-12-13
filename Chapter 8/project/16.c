/*
Q. Write a program that tests whether two words are anagrams (permutations of the same letters)

(...)

Hint: You may wish to use functions from <ctype.h>, such as isalpha and tolower
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int letters[26] = {0}, len = 0;
	char ch;

	printf("Enter first word: ");
	for (;;)
	{
		ch = getchar();
		if (ch == '\n')
			break ;
		len++;
		if (isalpha(ch))
			letters[tolower(ch) - 'a']++;
	}

	printf("Enter second word: ");
	for (;;)
	{
		ch = getchar();
		if (ch == '\n')
			break ;
		len--;
		if (isalpha(ch))
			letters[tolower(ch) - 'a']--;
	}

	for (int i=0; i<26; i++)
		if (letters[i] != 0)
			len = -1;
	if (len != 0)
		printf("The words are not anagrams.\n");
	else
		printf("The words are anagrams.\n");
		
	return 0;
}
