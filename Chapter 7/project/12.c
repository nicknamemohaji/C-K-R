/*
Q. Write a program that evaluates an expression

The operands in the expression are floating-point numbers: the operators are +, -, / and *.
The expression is evaluated from left to right (no operator takes precedence)
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	float sum, n;
	char ch;

	printf("Enter an expression: ");

	scanf("%f", &sum);
	for (;;){
		ch = getchar();
		if (ch == '\n')
			break;
		
		scanf("%f", &n);
		switch(ch)
		{
			case '+':
				sum += n;
				break;
			case '-':
				sum -= n;
				break;
			case '/':
				sum /= n;
				break;
			case '*':
				sum *= n;
				break;
		}
	}

	printf("Value of expressoin: %f\n", sum);
	return 0;
}