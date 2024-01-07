/*
Q. Modify the stack example of Section 10.2 so that it stores characters instead of integers. 
Next, add a main function that asks the user to enter a series of parentheses and/or braces, 
then indicates whether or not they're properly nested.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

# define STACK_SIZE 1000


/* external variables */
int contents[STACK_SIZE];
int top = 0;
bool underflow = false;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char ch;
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == '(' || ch == '{')
            push(ch);
        else if (ch == ')' || ch == '}')
        {
            int item = pop();
            if (ch == ')' && item != '(')
                underflow = true;
            else if (ch == '}' && item != '{')
                underflow = true;
        }
    }
    if (underflow || !is_empty())
        printf("Not nested properly\n");
    else
        printf("Nested properly\n");
    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return (top == 0);
}

bool is_full(void)
{
    return (top == STACK_SIZE);
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("Stack too small\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Stack empty\n");
    underflow = true;
}
