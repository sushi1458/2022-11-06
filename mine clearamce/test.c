#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void game()
{
	char board1[ROWS][COLS] = { 0 };
	char board2[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(board1, ROWS, COLS,'0');
	InitBoard(board2, ROWS, COLS,'*');
	//��ӡ����
	Displayboard(board2, ROW, COL);

	//������
	Setboard1(board1,ROW,COL);
	//Displayboard(board1, ROW, COL);
	//ɨ��
	Findboard1(board1, board2, ROW, COL);

}
void menu()
{
	printf("*******************ɨ��*******************\n");
	printf("**********    1.play   0.exit   **********\n");
	printf("******************************************\n");
}
void test()
{
	int input= 0;
	srand((unsigned int)time(NULL));
	do
	{
		
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("ɨ��\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
		}
		}while (input);
		
	}

int main()
{		
	test();
		return 0;
}