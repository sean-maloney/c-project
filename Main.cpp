//Rick,Michael,Sean
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int move(char arr[]);
int check(char arr[]);

int main()
{
	srand(time(0));
	int box, i, opponent, check;
	char a[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };



	printf("Tic-tac-toe\n\n");
	printf(" 1 | 2 | 3 \n");
	printf(" %c | %c | %c \n", a[0], a[1], a[2]);
	printf("___|___|___\n");
	printf(" 4 | 5 | 6 \n");
	printf(" %c | %c | %c \n", a[3], a[4], a[5]);
	printf("___|___|___\n");
	printf(" 7 | 8 | 9 \n");
	printf(" %c | %c | %c \n", a[6], a[7], a[8]);
	printf("   |   |   \n");


	for (i = 0; i <= 9; i++)
	{
		printf("Please pick a box: ");
		scanf_s("%i", &box);

		switch (box)
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

		opponent = move(a);

		if (opponent == 0)
		{
			opponent = move(a);
		}

		else
		{
			a[opponent] = 'o';
		}

		printf(" 1 | 2 | 3 \n");
		printf(" %c | %c | %c \n", a[0], a[1], a[2]);
		printf("___|___|___\n");
		printf(" 4 | 5 | 6 \n");
		printf(" %c | %c | %c \n", a[3], a[4], a[5]);
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
			i = 10;
		}
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

		else if (arr[b] == 'o')
		{
			return 0;
		}

		else
		{
			return b;
		}
	}


<<<<<<< HEAD
	return 0;
}

=======
}
>>>>>>> 4bea0023aaf74df1302983e13f463ff807cb4a6b
