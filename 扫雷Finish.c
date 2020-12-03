#define _CRT_SECURE_NO_WARNINGS 1
#include "扫雷.h"
void InitBoard(char arr[H1][L1], int h1, int l1, char set)
{
	for (int i = 1; i <= h1; i++)
	{
		for (int j = 1; j <= l1; j++)
		{
			arr[i][j] = set;
		}
	}
}
void PrintBoard(char arr1[H1][L1], int h, int l)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= h; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= h; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= l; j++)
		{
			printf("%c ", arr1[i][j]);
		}
		printf("\n");
	}
}
void LayingMines(char arr2[H1][L1], int h, int l)
{
	int count = 10;
	while (count)
	{
		int x = rand() % h + 1;
		int y = rand() % l + 1;
			if (arr2[x][y] == '0')
			{
				arr2[x][y] = '1';
				count--;
			}
	}
	
}
int WithoutMinesCount(char arr5[H1][L1], int x, int y)
{
	return arr5[x - 1][y] +
		   arr5[x - 1][y - 1] +
		   arr5[x][y - 1] +
		   arr5[x + 1][y - 1] +
		   arr5[x + 1][y] +
		   arr5[x + 1][y + 1] +
		   arr5[x][y + 1] +
		   arr5[x - 1][y + 1] - 8 * '0';
}
void ClearMines(char arr3[H1][L1], char arr4[H1][L1], int h, int l)
{
	int x = 0, y = 0;
	while (1)
	{
		printf("请输入排雷的坐标：\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= h && y >= 1 && y <= l)
		{
			if (arr3[x][y] == '1')
			{
				printf("你被雷炸死了\n");
				PrintBoard(arr3, h, l);
				break;
			}
			else
			{
				int count = WithoutMinesCount(arr3, x, y);
				arr4[x][y] = count + '0';
				PrintBoard(arr4, h, l);
				printf("恭喜你没被炸死，请继续。\n");
			}
		}
		else
		{
			printf("坐标非法，重新输入：\n");
		}
	}
}