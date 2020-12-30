#define _CRT_SECURE_NO_WARNINGS 1
#include"通讯录1.h"

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
	contact con = { 0 };//创建通讯录
	InitCon(&con);//初始化
	do
	{
		menu();
		printf("请选择：");
	flag:
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcon(&con);//传con的地址，因为要修改con中的data和sz；
			break;
		case DEL:
			Delcon(&con);
			break;
		case SHOW:
			Showcon(&con);
			break;
		case EXIT:
			printf("…………您已退出通讯录…………\n");
			break;
		case SAVE:
			break;
		case FIND:
			break;
		default:
			printf("选择错误，请重新选择：");
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