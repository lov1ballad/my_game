#include<stdio.h>
#include<string.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 15
#define MAX_ADDR 20

typedef struct Peoinfo//一个人的信息
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;

typedef struct contact//通讯录
{
	Peoinfo data[MAX];//总储存空间
	int sz;//当前储存量
}contact;
//暴露在菜单的功能函数的声明↓
void InitCon(contact* pc);//初始化通讯录函数的声明

void Addcon(contact* pc);//增加通讯录函数的声明

void Showcon(const contact* pc);//显示通讯录函数的声明

void Delcon(contact* pc);//删除信息函数的声明