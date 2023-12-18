/*
Q. Write a program that simulates the game of craps, which is played with two dice. (...)

Write your program as three functions: main, roll_dice, and play game. Here are the prototypes for the latter two functions:
	int roll_dice(void);
	bool play_game(void);

roll_dice should generate two random numbers, each between 1 and 6, and return their sum.
play_game should play one crps game(calling roll_dice to determine the outcome of each dice roll); it will return true if the player wins and false if the player loses. 
play_game is also reponsible for displaying messages showing the results of the player's dice rolls.

main will call play_game repeatedly, keeping track of the number of wins and loses and displaying the "you win" and "you lose" mssages.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
	int win = 0, lose = 0;
	char ch;
	srand(time(NULL));

	for (;;) 
	{
		if (play_game())
		{
			win++;
			printf("You win!\n");
		}
		else
		{
			lose++;
			printf("You lose!\n");
		}
		printf("\n");
		printf("Play again? ");
		do {
			ch = getchar();
		} while (ch == '\n');
		if (ch == 'y' || ch == 'Y')
			continue;
		break;
	}

	printf("Wins: %d Loses: %d\n", win, lose);

	return 0;
}

int roll_dice(void)
{
	return (rand() % 6 + 1) + (rand() % 6 + 1);
}

bool play_game(void)
{
	int point, dice;

	// 처음 상황
	dice = roll_dice();
	printf("You rolled: %d\n", dice);
	if (dice == 7 || dice == 11)
		return true;
	else if (dice == 2 || dice == 3 || dice == 12)
		return false;

	// 두 번째 이후부터
	point = dice;
	printf("Your point is %d\n", point);
	for (;;)
	{
		dice = roll_dice();
		printf("You rolled: %d\n", dice);
		if (dice == point)
			return true;
		else if (dice == 7)
			return false;
	}
}