#include <stdio.h>

int main(void)
{
	int cmd;
	float balance = 0.0f, credit, debit;

	printf("**** ACME checkbook-balancing program ***\n");
	printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

	// while(1)도 가능. (최적화를 끈 경우) for (;;)는 바로 jmp하지만, 
	// while(1)은 항상 비교를 수행하기 때문에 약간의 최적화를 가져갈 수 있다고 함. 
	for (;;)		
	{
		printf("Enter command: ");
		scanf("%d", &cmd);
		switch (cmd)
		{
		case 0:
			balance = 0.0f;
			break ;
		case 1:
			printf("Enter amount of credit: ");
			scanf("%f", &credit);
			balance += credit;
			break ;
		case 2:
			printf("Enter amount of debit: ");
			scanf("%f", &debit);
			balance -= debit;
			break ;
		case 3:
			printf("Current balance: $%.2f\n", balance);
			break ;
		case 4:
			return 0;		
		default:
			printf("Wrong command\n");
			break ;
		}
	}
}