//Rick,Michael,Sean
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int main()
{
	char a[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };

	printf("Tic-tac-toe\n\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n", a[0], a[1], a[2]);
	printf("___|___|___\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n", a[3], a[4], a[5]);
	printf("___|___|___\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n", a[6], a[7], a[8]);
	printf("   |   |   \n");
	return 0;
}