/*
Q. Write a program that prompts the user for a number and then displays the number, 
using characters to simulate the effect of a seven-segment display.

Characters other than digits should be ignored. Write the program so that 
the maximum size of the number is controlled by a macro named MAX_DIGITS,
which has the value 10. If the number contains more than this number of digits,
the extra digits are ignored.

Hint: (...) 
Write your program as four functions: main, clear_digits_array, process_digit, and print_digits_array.
Here are the prototypes for the latter three functions:
    void clear_digits_array(void);
    void process_digit(int digit, int position);
    void print_digits_array(void);
(...)
*/

#include <stdio.h>

# define MAX_DIGITS 10

const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},		// 0
    {0, 1, 1, 0, 0, 0, 0},		// 1
    {1, 1, 0, 1, 1, 0, 1},		// 2
    {1, 1, 1, 1, 0, 0, 1},		// 3
    {0, 1, 1, 0, 0, 1, 1},		// 4
    {1, 0, 1, 1, 0, 1, 1},		// 5
    {1, 0, 1, 1, 1, 1, 1},		// 6
    {1, 1, 1, 0, 0, 0, 0},		// 7
    {1, 1, 1, 1, 1, 1, 1}, 		// 8
    {1, 1, 1, 1, 0, 1, 1}		// 9
};
char digits[MAX_DIGITS * 4][3];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char digit;
    int position = 0;

    clear_digits_array();
    printf("Enter a number: ");
    do
    {
        digit = getchar();
        if (digit >= '0' && digit <= '9')
        {
            process_digit(digit - '0', position);
            position++;
        }
    } while(digit != '\n' && position <= MAX_DIGITS);
    print_digits_array();
}

void clear_digits_array(void)
{
    for (int i = 0; i < MAX_DIGITS * 4; i++)
    {
        digits[i][0] = '\0';
        digits[i][1] = '\0';
        digits[i][2] = '\0';
    }
}

void print_digits_array(void)
{
    for (int row=0; row < 4; row++)
    {
        for (int pos = 0; pos < MAX_DIGITS && digits[pos * 4][0] != '\0'; pos++)
        {
            printf("%c", digits[pos * 4 + row][0]);
            printf("%c", digits[pos * 4 + row][1]);
            printf("%c", digits[pos * 4 + row][2]);
        }
        printf("\n");
    }
}

void process_digit(int digit, int position)
{
    digits[position * 4][0] = ' ';
    digits[position * 4][1] = segments[digit][0] ? '_' : ' ';
    digits[position * 4][2] = ' ';
    digits[position * 4 + 1][0] = segments[digit][5] ? '|' : ' ';
    digits[position * 4 + 1][1] = segments[digit][6] ? '_' : ' ';
    digits[position * 4 + 1][2] = segments[digit][1] ? '|' : ' ';
    digits[position * 4 + 2][0] = segments[digit][4] ? '|' : ' ';
    digits[position * 4 + 2][1] = segments[digit][3] ? '_' : ' ';
    digits[position * 4 + 2][2] = segments[digit][2] ? '|' : ' ';
}