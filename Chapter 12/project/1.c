/*
Q. 
(a) Write a program that reads a message, then prints the reversal of the message.
(b) Revise the program to use a pointer instead of an integer to keep track of the current position in the array.
*/

#include <stdio.h>

#define MAX_LEN 100

// (a)
// int main(void)
// {
//     char message[MAX_LEN], ch;
//     int idx = 0;

//     printf("Enter a message: ");
//     do {
//         ch = getchar();
//         message[idx++] = ch;
//     } while (ch != '\n' && idx < MAX_LEN);
//     if (message[idx] == '\n')
//         idx--;
    
//     for (int i = idx - 1; i >= 0; i--)
//         printf("%c", message[i]);
//     printf("\n");

//     return 0;
// }

// (b)
int main(void)
{
    char message[MAX_LEN], ch;
    char *p = message;

    printf("Enter a message: ");
    do {
        ch = getchar();
        *(p++) = ch;
    } while (ch != '\n' && p - message < MAX_LEN);
    if (*p == '\n')
        p--;
    
    for (; p >= message; p--)
        printf("%c", *p);
    printf("\n");

    return 0;
}