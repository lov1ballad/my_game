#define H 9
#define L 9
#define H1 H+2
#define L1 L+2
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char arr[H1][L1], int h1, int l1, char set);//��ʼ������

void PrintBoard(char arr1[H1][L1],int h,int l);//��ӡ������

void LayingMines(char arr2[H1][L1], int h, int l);//������

void ClearMines(char arr3[H1][L1], char arr4[H1][L1], int h, int l);//����