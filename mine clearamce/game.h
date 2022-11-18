#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EAST_COUNT 10	
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void Displayboard(char board[ROWS][COLS], int rows, int cols);
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void Setboard1(char board[ROWS][COLS], int row, int col);
void Findboard1(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col);
int get_board1_count(char board1[ROWS][COLS], int x, int y);
void ExtendWhite(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col,int x,int y);
