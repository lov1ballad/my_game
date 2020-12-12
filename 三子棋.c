#define _CRT_SECURE_NO_WARNINGS 1
#include"三子棋.h"
void Initboard(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}

}
void Printboard(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	printf(" ------- \n");
	for (i = 0; i < row; i++)
	{
		printf("%d|", i+1);
		for (j = 0; j < col; j++)
		{
			printf("%c|", arr[i][j]);
		}
		printf("\n");
		printf(" ------- \n");
	}

}
void TurnYou(char arr[ROW][COL])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (arr[x - 1][y - 1] == ' ')
		{
			arr[x - 1][y - 1] = 'X';
			break;
		}
		else
		{
			printf("此格已有输入\n");
		}
	}

}
void TurnCmp(char arr[ROW][COL])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '0';
			break;
		}
	}

}
char Judge(char arr[ROW][COL])
{
	int i = 0;
	if ((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[1][1] != ' '))
	{
		return 'b';
	}
	if ((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]) && (arr[1][1] != ' '))
	{
		return 'b';
	}
	for (i = 0; i < 3; i++)
	{
		if ((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]) && (arr[i][1] != ' '))
		{
			return 'b';
			break;
		}
	}
	for (i = 0; i < 3; i++)
	{
		if ((arr[0][i] == arr[1][i]) && (arr[1][i] == arr[2][i]) && (arr[1][i] != ' '))
		{
			return 'b';
			break;
		}
	}
}
void Game(char arr[ROW][COL], int row, int col)
{
	int count = 0;
	char a;
	while (1)
	{
		if (count >= 9)
		{
			printf("棋盘已满\n");
			break;
		}
		TurnYou(arr);
		count++;
		Printboard(arr, ROW, COL);
		if ((a = Judge(arr)) == 'b')
		{
			printf("玩家获胜\n");
			break;
		}
		if (count >= 9)
		{
			printf("平手\n");
			break;
		}
		count++;
		printf("电脑方：\n");
		TurnCmp(arr);
		Printboard(arr, ROW, COL);
		if ((a = Judge(arr)) == 'b')
		{
			printf("电脑获胜\n");
			break;
		}

	}

}