/*
Considere the following mystery function. Trace the execution of the function by hand. 
Then write a program that calls the function, passing it a number entered by the user. What does the function do?
*/

#include <stdio.h>

void pb(int n)
{
	if (n != 0)
	{
		pb (n / 2);
		putchar ('0' + n % 2);
	}
}
/*
pb(5)를 생각해보자.
pb(5) -> 
	pb(2) -> 
		pb(1) -> 
			pb(0):  n == 0이므로 아무런 동작도 하지 않고 종료한다.
		1을 출력한다.
	0을 출력한다.
1을 출력한다.

즉, 이 함수는 재귀적으로 10진수를 이진수로 바꾸고 출력한다. 
*/

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	pb(n);

	return 0;
}