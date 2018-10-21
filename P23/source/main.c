#include <stdio.h>
#include<stdlib.h>
#include <time.h>
enum Status{ continus, win, lose };
int rollDice(void);
int main(void)
{
	int sum;
	int mypoint;
	enum Status gameStatus;
	srand(time(NULL));
	sum = rollDice();
	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = win;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = lose;
		break;
	default:
		gameStatus = continus;
		mypoint = sum;
		printf("point is %d\n", mypoint);
		break;
	}
	while (gameStatus == continus)
	{
		sum = rollDice();
		if (sum == mypoint)
		{
			gameStatus = win;
		}
		else
		{
			if (sum == 7)
			{
				gameStatus = lose;
			}
		}
	}

		if (gameStatus == win)
		{
			printf("Play wins\n");
		}
		else
		{
			printf("Play loses\n");
		}
		system("pause");
		return 0;
}
	
	int rollDice(void)
	{
		int die1;
		int die2;
		int worksum;
		die1 = 1 + (rand() % 6);
		die2 = 1 + (rand() % 6);
		worksum = die1 + die2;
		printf("Play rolled %d+%d=%d\n", die1, die2, worksum);
		return worksum;
	}