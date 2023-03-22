//Rick,Michael,Sean
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int move(char arr[]);

int main()
{
	srand(time(0));
	int box, i, opponent;
	char a[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' '};



	printf("Tic-tac-toe\n\n");
	printf(" 1   2   3\n");
	printf("1  |   |   \n");
	printf(" %c | %c | %c \n", a[0], a[1], a[2]);
	printf("___|___|___\n");
	printf("2  |   |   \n");
	printf(" %c | %c | %c \n", a[3], a[4], a[5]);
	printf("___|___|___\n");
	printf("3  |   |   \n");
	printf(" %c | %c | %c \n", a[6], a[7], a[8]);


	for (i = 0; i <= 9; i++)
	{

		printf("Please pick a box: ");
		scanf_s("%i", &box);
		
			switch (box)
			{
			case 11:
			{
				a[0] = 'x';
				break;
			}
			case 12:
			{
				a[1] = 'x';
				break;
			}
			case 13:
			{
				a[2] = 'x';
				break;
			}
			case 21:
			{
				a[3] = 'x';
				break;
			}
			case 22:
			{
				a[4] = 'x';
				break;
			}
			case 23:
			{
				a[5] = 'x';
				break;
			}
			case 31:
			{
				a[6] = 'x';
				break;
			}
			case 32:
			{
				a[7] = 'x';
				break;
			}
			case 33:
			{
				a[8] = 'x';
				break;
			}
			}
			opponent = move(a);

			if (opponent == 0)
			{
				opponent = move(a);
			}

			else
			{
				a[opponent] = 'O';
			}

			printf("Tic-tac-toe\n\n");
			printf(" 1   2   3\n");
			printf("1  |   |   \n");
			printf(" %c | %c | %c \n", a[0], a[1], a[2]);
			printf("___|___|___\n");
			printf("2  |   |   \n");
			printf(" %c | %c | %c \n", a[3], a[4], a[5]);
			printf("___|___|___\n");
			printf("3  |   |   \n");
			printf(" %c | %c | %c \n", a[6], a[7], a[8]);
		}

	return 0; 
}

	int move(char arr[9])
{
	int i, b;
	for (i = 0; i <= 9; i++)
	{
		b = rand() % 9;
		if (arr[b] == 'x')
		{
			return 0;
		}

		else
		{
			return b;
		}
	}


	return 0;
}

