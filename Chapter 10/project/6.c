/*
Q. Some calculators use a system of writing mathematical expressions known as Reverse Polish Notation (RPN).
In this notation, operators are placed after their operands instead of between their operands.

For example, 1 + 2 would be written 1 2 + in RPN, and 1 + 2 * 3 would be written 1 2 3 * +.

RPN expressions can easily be evaluated using a stack. The algorithm involves reading the operators and operands
in an expression from left to right, performing the following actions:

    When an operand is encountered, push it onto the stack.
    When an operator is encountered, pop its operands from the stack, perform the operation on those operands,

Write a program that evaluates RPN expressions. The operands will be single-digit integers.
The operators are +, -, *, /, and =. The = operator causes the top stack item to be displayed; afterwards,
the stack is cleared and the user is prompted to enter another expression. The process continues until
the user enters a character that is not an operator or operand.

If the stack overflows, the program will display the message Expression is too complex and terminate.
If the stack underflows (because of an expression such as 1 2 + +), the program will display the message
Not enough operands in expression and terminate.
*/

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

    for (;;)
    {
        printf("Enter an RPN expression: ");
        for (;;) {
            scanf("  %c", &ch);
            if (ch >= '0' && ch <= '9')
                push(ch - '0');
            else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                int op1 = pop();
                int op2 = pop();
                switch (ch)
                {
                    case '+':
                        push(op1 + op2);
                        break;
                    case '-':
                        push(op2 - op1);
                        break;
                    case '*':
                        push(op1 * op2);
                        break;
                    case '/':
                        push(op2 / op1);
                        break;
                }
            }
            else if (ch == '=')
            {
                if (top != 1)
                    printf("Not enough operands in expression\n");
                else
                    printf("Value of expression: %d\n", pop());
                make_empty();
                break;
            }
            else if (ch == 'q')
                exit(EXIT_SUCCESS);
            else
            {
                printf("Invalid expression %d>>%c<<\n", ch, ch);
                exit(EXIT_FAILURE);
            }
        };
    }
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
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operans in expression\n");
    exit(EXIT_FAILURE);
}
