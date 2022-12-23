#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact_2.0.h"
//1.存放好友信息
//名字	电话	性别	地址	住址	年龄
//2.增	删	  改	查
//3.打印
//4.排序
enum Option
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort,
};


void menu()
{
	printf("*****************************************\n");
	printf("*******   1.add          2.del    *******\n");
	printf("*******   3.search       4.modify *******\n");
	printf("*******   5.show         6.sort   *******\n");
	printf("*******   0.exit                  *******\n");
	printf("*****************************************\n");
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
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SerchContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Exit:
			DestdoryContact(&con);
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (n);
	return 0;
}