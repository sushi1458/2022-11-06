#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
	
	    for (j = 0; j < cols; j++)
	    {
		board[i][j] = set;
	     }
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <=col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
			
		}
		printf("\n");
		
		}

	}
void Setboard1(char board[ROWS][COLS], int row, int col)
{
	int count = EAST_COUNT;
	while (count)
	{

	int x = rand() % row+1;
	int y = rand() % col+1;
	if (board[x][y] == '0')
	{
	board[x][y] = '1';
	count--;
	}
	
	}
}
void Findboard1(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col - EAST_COUNT)
	{
		printf("请输入你要排查的坐标：\n");
		scanf("%d%d", &x, &y);
		if (board2[x][y] != '*')
		{
			printf("你已经排查过这里了！\n");
			continue;
		}
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{

			if (board1[x][y] == '0')
			{
				int count = 0;
				count = get_board1_count(board1,x,y);
				ExtendWhite(board1, board2, ROW, COL, x, y, count);
				system("cls");
				Displayboard(board2, row, col);
				win++;
				
			}
			else
			{
				printf("你输了！\n");
				Displayboard(board1, row, col);
				break;
			}

		}
		else
			printf("输入错误");
	}
	if (win == row*col - EAST_COUNT)
	{
		printf("你赢了！");
	}
}
int get_board1_count(char board1[ROWS][COLS], int x, int y)
{
return	board1[x - 1][y - 1] +
		board1[x - 1][y] +
		board1[x - 1][y + 1] +
		board1[x][y - 1] +
		board1[x][y + 1] +
		board1[x + 1][y - 1] +
		board1[x + 1][y] +
		board1[x + 1][y + 1] - 8 * '0';
}
void ExtendWhite(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col, int x, int y)
{
	int i = 0;
	int j = 0;
	int a = x;
	int b = y;
	int count = get_board1_count(board1, x, y);
	if(x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标是否合法
	{
		if (count == 0)
	{
			board2[x][y] = '0';
		for (i=-1; i <= 1; i++)
		{
			x = a;
			x += i;
			
			for (j = -1; j <= 1;j++)
			{
				y = b;
				y += j;
				if (board2[x][y] == '*')
				{
				ExtendWhite(board1, board2, ROW, COL, x, y);
				}
			}
		
		}
		
	}
		else
		{
			board2[x][y] = count + '0';
		}
	}
}