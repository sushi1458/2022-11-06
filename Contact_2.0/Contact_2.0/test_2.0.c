#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact_2.0.h"
//1.��ź�����Ϣ
//����	�绰	�Ա�	��ַ	סַ	����
//2.��	ɾ	  ��	��
//3.��ӡ
//4.����
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
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do{
		menu();
		printf("��ѡ���ܣ�");
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
			printf("����������������룡\n");
			break;
		}
	} while (n);
	return 0;
}