#define _CRT_SECURE_NO_WARNINGS 1
#include"通讯录1.h"

int FindByname(contact* pc, char name[])//通过名字查找下标
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void InitCon(contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void Addcon(contact* pc)
{
	if (pc->sz == MAX)//录入信息时首先判断通讯录是否已满
	{
		printf("通讯录已到达最大容量\n");
	}
	else
	{
		printf("请输入名字：");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入年龄：");
		scanf("%d", &pc->data[pc->sz].age);
		printf("请输入性别：");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话：");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址：");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("录入成功\n");
	}
}

void Showcon(const contact* pc)
{
	int i = 0;
	printf("\t%-20s\t%-5s\t%-5s\t%-12s\t%-15s\n", 
		"姓名", "年龄","性别","电话","地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("\t%-20s\t%-5d\t%-5s\t%-12s\t%-15s\n",
			pc->data[i].name, pc->data[i].age, 
			pc->data[i].sex, pc->data[i].tele, 
			pc->data[i].addr);

	}
}

void Delcon(contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");//首先得判断是否可以删
	}
	else//通过名字来删除
	{
		char name[MAX_NAME] = { 0 };
		printf("请输入要删除人的名字：");//查找
		scanf("%s", name);
		int ret = FindByname(pc, name);//查找函数
		if (ret == -1)
		{
			printf("查无此人\n");
		}
		else
		{
			int i = 0;
			for (i = ret; i < pc->sz-1; i++)
			{
				pc->data[i] = pc->data[i + 1];//返回下标的元素被后边的元素覆盖
			}
			pc->sz--;
			printf("删除成功！\n");
		}
	}
}