#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ",board[i][j]);
//			if (j< col - 1)
//			{
//				printf("|");
//			}
//			
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			int j = 0;
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//			printf("\n");
//		}
//	}
//
//}
////玩家下棋
//void PlarerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("你的回合>\n");
//	
//	while (1)
//	{
//		printf("请输入你的坐标：");
//		scanf("%d%d", &x, &y);
//		//判断xy坐标的合法性
//		if (x >= 1 && x <= row  && y >= 1 && y <= col )
//		{
//			if (board[x - 1][y - 1]==' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("该位置已被占用！\n");
//			}
//		}
//		else
//		{
//			printf("请输入正确的坐标！\n");
//		}
//	}
//}
////电脑下棋
//void Computermove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("电脑的回合>\n");
//	srand((unsigned int)time(NULL));
//	while (1){
//		x = rand() % row;
//		y = rand() % col;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
////判断棋盘是否下满
//int IsFull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//				return 0;
//		}
//	}
//	return 1;
//}
//
////判断是否获胜
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	//横三行
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//	//竖三列
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//			return board[1][i];
//	}
//	//两个对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (1 == IsFull(board, ROW, COL))
//	{
//		return 'Q';
//	}
//	else
//		return 'C';
//}
