#include<stdio.h>
#include<string.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 15
#define MAX_ADDR 20

typedef struct Peoinfo//һ���˵���Ϣ
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;

typedef struct contact//ͨѶ¼
{
	Peoinfo data[MAX];//�ܴ���ռ�
	int sz;//��ǰ������
}contact;
//��¶�ڲ˵��Ĺ��ܺ�����������
void InitCon(contact* pc);//��ʼ��ͨѶ¼����������

void Addcon(contact* pc);//����ͨѶ¼����������

void Showcon(const contact* pc);//��ʾͨѶ¼����������

void Delcon(contact* pc);//ɾ����Ϣ����������