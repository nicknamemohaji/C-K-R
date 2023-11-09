/*
Q. What output does the following program fragment produce?
*/

#include <stdio.h>

int main(void)
{
	int i = 1;
	switch (i % 3)
	{
		case 0:
			printf("zero");			
		case 1:					// 1 % 3 == 1이므로 이 라벨로 진입
			printf("one");		// one을 출력.. 그러나
		case 2:					// case의 statement 후에 break statement가 없으므로 계속 진행
			printf("two");		// 여기도 break가 없으므로 계속 진행.. 이지만 switch의 끝이므로 그냥 탈출
	}
}