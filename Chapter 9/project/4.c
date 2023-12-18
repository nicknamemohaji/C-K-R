/*
Q. Modify Project 16 from Chapter 8 so that it includes following functions:
	void read_word(int counts[26]);
	bool equal_array(int counts1[26], int counts2[26]);

main will call read_word twice, once for each of the two words entered by the user. 
As it reads a word, read_word will use the lettters in the word to update the counts array, as described in the original project. 
(main will declare two arrays, one for each word. These arrays are used to track how many times each letter occurs in the words.)

main will then call equal_array, passing it the two arrays.
equal_array will return true if the elements in the two arrays are identical and false otherwise.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
	int counts1[26] = {0}, counts2[26] = {0};
	int letters[26] = {0}, len = 0;
	char ch;


	printf("Enter first word: ");
	read_word(counts1);
	printf("Enter second word: ");
	read_word(counts2);

	if (equal_array(counts1, counts2))
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");
		
	return 0;
}

void read_word(int counts[26])
{
	char ch;
	for (;;)
	{
		ch = getchar();
		if (ch == '\n')
			break ;
		if (isalpha(ch))
			counts[tolower(ch) - 'a']++;
	}
}

bool equal_array(int counts1[26], int counts2[26])
{
	for (int i=0; i<26; i++)
	{
		if (counts1[i] != counts2[i])
			return false;
	}
	return true;
}