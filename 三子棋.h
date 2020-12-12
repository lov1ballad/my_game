#include<stdio.h>

#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

void Initboard(char arr[ROW][COL], int row, int col);//初始化棋盘

void Printboard(char arr[ROW][COL], int row, int col);//打印棋盘

void Game(char arr[ROW][COL], int row, int col);//游戏

void TurnYou(char arr[ROW][COL]);//轮到你下棋

void TurnCmp(char arr[ROW][COL]);//轮到电脑下棋

char Judge(char arr[ROW][COL]);//判断是否获胜