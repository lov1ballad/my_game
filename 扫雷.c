#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include "É¨À×.h"
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
		for (j = 1; j <= l; j++)
		{
			printf("%c ", arr1[i][j]);
		}
		printf("\n");
	}
}