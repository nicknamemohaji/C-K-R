/*
Q. Modify Programming Project 14 from Chapter 8 so that it uses a pointer instead of an
integer to keep track of the current position in the array that contains the sentence.
*/

#include <stdio.h>
#define STRING_LEN 100

int main(void)
{
	char ch, sentence[STRING_LEN], termination;
    char *len_p = sentence, *start_p = sentence, *end_p;

	printf("Enter a sentence: ");
	for(;;) {
		ch = getchar();
		if (ch == '.' || ch == '?' || ch == '!')
		{
			termination = ch;
			break ;
		}
		*(len_p++) = ch;
	}
	
	printf("Reversal of sentence: ");
    
	while (start_p < len_p)
	{
        end_p = start_p;
        // 단어의 끝까지 이동
		while (*end_p != ' ' && end_p < len_p)
			end_p++;
		if (*end_p == ' ')      // 만약 공백이 연속된다면 다음 반복에서 end_p < start_p가 되므로
			end_p--;            // 역순으로 출력하는 반복문은 무시됨
        
        // 역순으로 출력
		while (end_p >= start_p)
        {
            printf("%c", *end_p);
            end_p--;
        }

        // 다음 단어 전으로 이동...
		while (*start_p != ' ' && start_p < len_p)
            start_p++;
        // 단어 사이의 공백 출력
        if (*start_p == ' ')
        {
            start_p++;
            printf(" ");
        }
	}
	printf("%c\n", termination);

	return 0;
}