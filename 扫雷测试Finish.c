#define _CRT_SECURE_NO_WARNINGS 1
#include"ɨ��.h"
void Game()
{
	char Lei[H1][L1];//�����
	char PaiLei[H1][L1];//�Ų���
	InitBoard(Lei,H, L,'0');//��ʼ����������
	InitBoard(PaiLei,H, L,'*');//��ʼ����������
	//PrintBoard(Lei, H, L);//��ӡ����
	PrintBoard(PaiLei, H, L);
	LayingMines(Lei, H, L);//������
	PrintBoard(Lei, H, L);
	ClearMines(Lei, PaiLei, H, L );
}
void Gamemenu()//��Ϸ�˵�
{
	printf("####################\n");
	printf("#######1.play#######\n");
	printf("#######0.exit#######\n");
	printf("####################\n");
}
void Start()//��Ϸִ��
{
	int IN;
	srand((unsigned int)time(NULL));
	do
	{
		Gamemenu();
		printf("��ѡ��\n");
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