#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"
//1.存放好友信息
//名字	电话	性别	地址	住址	年龄
//2.增	删	  改	查
//3.打印
//4.排序
void menu()
{
	printf("********************************************\n");
	printf("**********   1.add          2.del    *******\n");
	printf("**********   3.search       4.modify *******\n");
	printf("**********   5.show         6.sort   *******\n");
	printf("**********   0.exit                  *******\n");
	printf("********************************************\n");
}

int main()
{
	int n = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do{
		menu();
		printf("请选择功能：");
		scanf("%d", &n);
		switch (n)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			DelContact(&con);
			break;
		case search:
			SerchContact(&con);
			break;
		case modify:
			ModifyContact(&con);
			break;
		case show:
			ShowContact(&con);
			break;
		case sort:
			SortContact(&con);
			break;
		case 0:
			break;
		default :
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (n);
	return 0;
}