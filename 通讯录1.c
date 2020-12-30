#define _CRT_SECURE_NO_WARNINGS 1
#include"ͨѶ¼1.h"

int FindByname(contact* pc, char name[])//ͨ�����ֲ����±�
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
	if (pc->sz == MAX)//¼����Ϣʱ�����ж�ͨѶ¼�Ƿ�����
	{
		printf("ͨѶ¼�ѵ����������\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", pc->data[pc->sz].name);
		printf("���������䣺");
		scanf("%d", &pc->data[pc->sz].age);
		printf("�������Ա�");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰��");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ��");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("¼��ɹ�\n");
	}
}

void Showcon(const contact* pc)
{
	int i = 0;
	printf("\t%-20s\t%-5s\t%-5s\t%-12s\t%-15s\n", 
		"����", "����","�Ա�","�绰","��ַ");
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
		printf("ͨѶ¼Ϊ��\n");//���ȵ��ж��Ƿ����ɾ
	}
	else//ͨ��������ɾ��
	{
		char name[MAX_NAME] = { 0 };
		printf("������Ҫɾ���˵����֣�");//����
		scanf("%s", name);
		int ret = FindByname(pc, name);//���Һ���
		if (ret == -1)
		{
			printf("���޴���\n");
		}
		else
		{
			int i = 0;
			for (i = ret; i < pc->sz-1; i++)
			{
				pc->data[i] = pc->data[i + 1];//�����±��Ԫ�ر���ߵ�Ԫ�ظ���
			}
			pc->sz--;
			printf("ɾ���ɹ���\n");
		}
	}
}