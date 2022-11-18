#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void game()
{
	char board1[ROWS][COLS] = { 0 };
	char board2[ROWS][COLS] = { 0 };
	//初始化数组
	InitBoard(board1, ROWS, COLS,'0');
	InitBoard(board2, ROWS, COLS,'*');
	//打印棋盘
	Displayboard(board2, ROW, COL);

	//布置雷
	Setboard1(board1,ROW,COL);
	//Displayboard(board1, ROW, COL);
	//扫雷
	Findboard1(board1, board2, ROW, COL);

}
void menu()
{
	printf("*******************扫雷*******************\n");
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
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("扫雷\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}
		}while (input);
		
	}

int main()
{		
	test();
		return 0;
}