/*
Q. 
(a) Write a program that reads a message, then checks whether it’s a palindrome.
Ignore all characters that aren’t letters. Use integer variables to keep track of positions in the array.
(b) Revise the program to use pointers instead of integers to keep track of positions in the array.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LEN 100

// (a)
// int main(void)
// {
//     char message[MAX_LEN], ch;
//     int idx = 0;
//     bool palindrome = true;

//     printf("Enter a message: ");
//     do {
//         ch = getchar();
//         if (!isalpha(ch))
//             continue ;
//         message[idx++] = tolower(ch);
//     } while (ch != '\n' && idx < MAX_LEN);

//     for (int i = 0; i < idx / 2; i++)
//     {
//         if (message[i] != message[(idx - 1) - i])
//             palindrome = false;
//     }
//     if (palindrome)
//         printf("Palindrome\n");
//     else
//         printf("Not a palidrome\n");

//     return 0;
// }

// (b)
int main(void)
{
    char message[MAX_LEN], ch;
    char *p = message, *message_p = message;
    bool palindrome = true;

    printf("Enter a message: ");
    do {
        ch = getchar();
        if (!isalpha(ch))
            continue ;
        *(p++) = tolower(ch);
    } while (ch != '\n' && p - message_p < MAX_LEN);
    p--;

    while (message_p < p)
    {
        if (*(p--) != *(message_p++))
            palindrome = false;
    }
    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palidrome\n");

    return 0;
}