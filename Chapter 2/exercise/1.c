/**
 * Q: Do you get a warning message from the compiler? If so, what's needed to make it go away?
 * 
 * A: -Wall -pedantic -std=c89 옵션을 넣어도 에러가 뜨지 않음
 * 왜죠? return 0를 자동 추가하는건 c99부터라면서요...
*/

#include <stdio.h>

int main(void)
{
	printf("hello, world\n");
}
