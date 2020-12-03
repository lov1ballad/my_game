#define _CRT_SECURE_NO_WARNINGS 1
#include"扫雷.h"
void Game()
{
	char Lei[H1][L1];//存放雷
	char PaiLei[H1][L1];//排查雷
	InitBoard(Lei,H, L,'0');//初始化放雷棋盘
	InitBoard(PaiLei,H, L,'*');//初始化排雷棋盘
	//PrintBoard(Lei, H, L);//打印棋盘
	PrintBoard(PaiLei, H, L);
	LayingMines(Lei, H, L);//布置雷
	PrintBoard(Lei, H, L);
	ClearMines(Lei, PaiLei, H, L );
}
void Gamemenu()//游戏菜单
{
	printf("####################\n");
	printf("#######1.play#######\n");
	printf("#######0.exit#######\n");
	printf("####################\n");
}
void Start()//游戏执行
{
	int IN;
	srand((unsigned int)time(NULL));
	do
	{
		Gamemenu();
		printf("请选择：\n");
		scanf("%d", &IN);
		switch (IN)
		{
		case 1:
			Game();
			break;
		case 2:
			printf("exit game! \n");
			break;
		default:
			printf("error choice! input again! \n");
			break;
		}
	} while (IN);
}
int main()
{
	Start();

	return 0;
}