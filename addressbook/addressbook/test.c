#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"
//1.��ź�����Ϣ
//����	�绰	�Ա�	��ַ	סַ	����
//2.��	ɾ	  ��	��
//3.��ӡ
//4.����
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
			printf("����������������룡\n");
			break;
		}
	} while (n);
	return 0;
}