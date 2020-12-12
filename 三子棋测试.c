#define _CRT_SECURE_NO_WARNINGS 1
#include"Èý×ÓÆå.h"

void Startgame()
{
	char arr[ROW][COL] = { 0 };
	Initboard(arr, ROW, COL);
	Printboard(arr, ROW, COL);
	Game(arr, ROW, COL);
}
void menu()
{
	printf("*************************\n");
	printf("*        1. play        *\n");
	printf("*        0. exit        *\n");
	printf("*************************\n");

}
void GameBegin()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ:");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			Startgame();
			break;
		case 2:
			printf("exit game! \n");
			break;
		default:
			printf("error choice! input again! \n");
			break;
		}
	} while (i);

}

int main()
{
	GameBegin();
	return 0;
}
