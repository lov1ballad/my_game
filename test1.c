#define _CRT_SECURE_NO_WARNINGS 1
#include"ͨѶ¼1.h"

enum choice
{
	EXIT,//0
	ADD,
	DEL,
	FIND,
	MODIFY,
	SHOW,
	SORT,
	CLS,
	SAVE
};
void menu()
{
	printf("#######################################\n");
	printf("#####  1. add           2. del    #####\n");
	printf("#####  3. find          4. modify #####\n");
	printf("#####  5. show          6. sort   #####\n");
	printf("#####  0. exit          7. cls    #####\n");
	printf("#####  8. save                    #####\n");
	printf("#######################################\n");
}
void test()
{
	int input = 0;
	contact con = { 0 };//����ͨѶ¼
	InitCon(&con);//��ʼ��
	do
	{
		menu();
		printf("��ѡ��");
	flag:
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcon(&con);//��con�ĵ�ַ����ΪҪ�޸�con�е�data��sz��
			break;
		case DEL:
			Delcon(&con);
			break;
		case SHOW:
			Showcon(&con);
			break;
		case EXIT:
			printf("�������������˳�ͨѶ¼��������\n");
			break;
		case SAVE:
			break;
		case FIND:
			break;
		default:
			printf("ѡ�����������ѡ��");
			goto flag;
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}