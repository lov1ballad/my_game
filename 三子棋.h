#include<stdio.h>

#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

void Initboard(char arr[ROW][COL], int row, int col);//��ʼ������

void Printboard(char arr[ROW][COL], int row, int col);//��ӡ����

void Game(char arr[ROW][COL], int row, int col);//��Ϸ

void TurnYou(char arr[ROW][COL]);//�ֵ�������

void TurnCmp(char arr[ROW][COL]);//�ֵ���������

char Judge(char arr[ROW][COL]);//�ж��Ƿ��ʤ