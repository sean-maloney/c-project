//Rick,Michael,Sean
#include<stdio.h>
#include<stdlib.h>// Libaries
#include<conio.h>
#include<time.h>

int move(char arr[]);
int checker(char arr[],  int b);// functions

int main()
{
	srand(time(0));
	int box, i, opponent, check, c; //intergeres we used
	char a[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	char str[30], ch;

	

	printf("Tic-tac-toe\n\n");
	printf(" 1 | 2 | 3 \n");
	printf(" %c | %c | %c \n", a[0], a[1], a[2]);
	printf("___|___|___\n");
	printf(" 4 | 5 | 6 \n");
	printf(" %c | %c | %c \n", a[3], a[4], a[5]);// prints boxes at start
	printf("___|___|___\n");
	printf(" 7 | 8 | 9 \n");
	printf(" %c | %c | %c \n", a[6], a[7], a[8]);
	printf("   |   |   \n");
	//printf("Please enter your name:");
	//scanf_s("%[^\n]s", &str);
	//ch = getchar();
	//printf("%s", str);
	for (i = 0; i <= 1; i+=0)
	{	
		printf("Please pick a box: ");
		scanf_s("%i", &box);// lets user slect a box
		c = checker(a, box);
		while (c == 1)
		{
			printf("The space is taken\n");
			printf("Please pick a box: "); // result of checker, blocks user from placing on taken spot
			scanf_s("%i", &box);
			c = checker(a, box);
		}
		switch (box)// switch statement to place x's 
		{
		case 1:
		{
			a[0] = 'x';
			break;
		}
		case 2:
		{
			a[1] = 'x';
			break;
		}
		case 3:
		{
			a[2] = 'x';
			break;
		}
		case 4:
		{
			a[3] = 'x';
			break;
		}
		case 5:
		{
			a[4] = 'x';
			break;
		}
		case 6:
		{
			a[5] = 'x';
			break;
		}
		case 7:
		{
			a[6] = 'x';
			break;
		}
		case 8:
		{
			a[7] = 'x';
			break;
		}
		case 9:
		{
			a[8] = 'x';
			break;
		}
		}
		printf(" 1 | 2 | 3 \n");
		printf(" %c | %c | %c \n", a[0], a[1], a[2]);
		printf("___|___|___\n");
		printf(" 4 | 5 | 6 \n");
		printf(" %c | %c | %c \n", a[3], a[4], a[5]); //updated list for player
		printf("___|___|___\n");
		printf(" 7 | 8 | 9 \n");
		printf(" %c | %c | %c \n", a[6], a[7], a[8]);
		printf("   |   |   \n");
		if (a[0] == 'x' && a[1] == 'x' && a[2] == 'x' || a[3] == 'x' && a[4] == 'x' && a[5] == 'x' ||// this scans the x's and see if a 3 in a row is made
			a[6] == 'x' && a[7] == 'x' && a[8] == 'x' || a[0] == 'x' && a[3] == 'x' && a[6] == 'x' ||
			a[1] == 'x' && a[4] == 'x' && a[7] == 'x' || a[2] == 'x' && a[5] == 'x' && a[8] == 'x' ||
			a[0] == 'x' && a[4] == 'x' && a[8] == 'x' || a[2] == 'x' && a[4] == 'x' && a[6] == 'x')
		{
			printf("you win :)");
			i = 10;
		}
		else if (a[0] == 'o' && a[1] == 'o' && a[2] == 'o' || a[3] == 'o' && a[4] == 'o' && a[5] == 'o' ||
			a[6] == 'o' && a[7] == 'o' && a[8] == 'o' || a[0] == 'o' && a[3] == 'o' && a[6] == 'o' ||// this scans the o's and see if a 3 in a row is made
			a[1] == 'o' && a[4] == 'o' && a[7] == 'o' || a[2] == 'o' && a[5] == 'o' && a[8] == 'o' ||
			a[0] == 'o' && a[4] == 'o' && a[8] == 'o' || a[2] == 'o' && a[4] == 'o' && a[6] == 'o')
		{
			printf("you lose :(");
			i = 2;
		}
		opponent = move(a);// allows bot to make a move
		while (opponent == 10)
		{
			opponent = move(a);
		}
		{
			a[opponent] = 'o';
		}
		printf("Computer's turn\n");
		printf(" 1 | 2 | 3 \n");
		printf(" %c | %c | %c \n", a[0], a[1], a[2]);
		printf("___|___|___\n");
		printf(" 4 | 5 | 6 \n");
		printf(" %c | %c | %c \n", a[3], a[4], a[5]);// updated list for bot
		printf("___|___|___\n");
		printf(" 7 | 8 | 9 \n");
		printf(" %c | %c | %c \n", a[6], a[7], a[8]);
		printf("   |   |   \n");
		if (a[0] == 'x' && a[1] == 'x' && a[2] == 'x' || a[3] == 'x' && a[4] == 'x' && a[5] == 'x' ||
			a[6] == 'x' && a[7] == 'x' && a[8] == 'x' || a[0] == 'x' && a[3] == 'x' && a[6] == 'x' ||
			a[1] == 'x' && a[4] == 'x' && a[7] == 'x' || a[2] == 'x' && a[5] == 'x' && a[8] == 'x' ||
			a[0] == 'x' && a[4] == 'x' && a[8] == 'x' || a[2] == 'x' && a[4] == 'x' && a[6] == 'x')
		{
			printf("you win :)");
			i = 10;
		}
		else if (a[0] == 'o' && a[1] == 'o' && a[2] == 'o' || a[3] == 'o' && a[4] == 'o' && a[5] == 'o' ||
			a[6] == 'o' && a[7] == 'o' && a[8] == 'o' || a[0] == 'o' && a[3] == 'o' && a[6] == 'o' ||
			a[1] == 'o' && a[4] == 'o' && a[7] == 'o' || a[2] == 'o' && a[5] == 'o' && a[8] == 'o' ||
			a[0] == 'o' && a[4] == 'o' && a[8] == 'o' || a[2] == 'o' && a[4] == 'o' && a[6] == 'o')
		{
			printf("you lose :(");
			i = 2;
		}
	}
	return 0;
}

int move(char arr[9])
{
	int i, b;
	for (i = 0; i <= 1; i+=0)
	{
		b = rand() % 9;
		if (arr[b] != ' ')//ranomizer
		{
			return 10;
		}
		else
		{
			return b;
		}
	}
}

int checker(char arr[9], int b)
{
	if (arr[b - 1] != ' ')
	{
		return 1;
	} //checks if a space is taken or not
	else
	{
		return 0;
	}
}
