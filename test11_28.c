#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char a= 128;
//	unsigned int b = -10;
//	printf("%u", b);
//	return 0;
//} 
//
//void print2(int (*p)[5], int x, int y)
//{
////	int i = 0;
////	for (i = 0; i <x; i++)
////	{
////		int j = 0;
////		for (j = 0; j < y; j++)
////		{
////			printf("%d ", (*(p+i)+j));
//////p����������ĵ�ַ+i�������������飬����ά�����������ģ����൱�ڵ��˵ڶ����������ʼλ��
////// *������ ����Ԫ�ص�ַ
////			printf("%d ", (*(p + i))[j]);
////
////		}
////		printf("\n");
////		
////	}
//	printf("%p\n", p);//0137FC80  p�����������ĵ�ַ
//	printf("%x\n", p);//137fc80
//	printf("%p \n", p+1);//0137FC94  p+1������������
//	printf("%p \n", *p);//0137FC80  *p����Ԫ�ص�ַ
//	printf("%p\n", *p + 1);// 0137FC84 *p+1�ǵڶ���Ԫ��
//		
//		
//		
//		
//
//}
//int main()
//{
//
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7} };
//	print2(arr,3,5);
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p = &arr;
//	/*printf("%p\n", arr);
//	printf("%p \n", &arr+1);
//	printf("%p \n", p+1);*/
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	//printf("%d ", p[i]);
//	//	//printf("%d ", *(p + i));//p����Ԫ�ص�ַ��p+i�����μӵ����ĸ��ֽڣ�����һ��Ԫ�ص�ַ��*�������һ��Ԫ��
//	//    printf("%d ", *(arr+i));
//	//    printf("%d",arr[i]);//���ϱ��ʽ��˼��ͬ
//	//}
//	return 0;
//int main()
//{
//	const char* p = "abcdef";//charֻ���ĸ��ֽڣ�abcdef�޷�ȫ������p����˴˴������a�ĵ�ַ
//	return 0;
//}

//singnal ��һ����������
//singnal�����Ĳ�������������һ����int���ڶ�����һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//signal�����ķ�������Ҳ��һ��ָ�룺�ú���ָ��ָ��ĺ���������int������������void
//void(*signal(int, void(*)(int)))(int);
////�򻯺�
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);



//char* my_strlen(char* dest, const char* src);
////дһ������ָ��pfָ��my_srrlen
////дһ������ָ������pfArr���ܹ����4��my_strlen������ַ
//char* (*pf)(char*, const char*);
//char* (*pfArr[4])(char*, const char*);

//������
////void menu()
////{
////	printf("***************************************\n");
////	printf("***********  1.Add    2.Sub  **********\n");
////	printf("***********  3.Mul    4.Div  **********\n");
////	printf("***********      0.exit      **********\n");
////	printf("***************************************\n");
////}
////int Add(int x, int y)
////{
////	return x+y;
////}
////int Sub(int x, int y)
////{
////	return x-y;
////}
////int Mul(int x, int y)
////{
////	return x*y;
////}
////int Div(int x, int y)
////{
////	return x/y;
////}
////int main()
////{
////	int input, x, y;
////	int(*pfArr[])(int, int) = { 0,Add, Sub, Mul, Div };
//// 
////	do
////	{
////		menu();
////		printf("�����룺");
////		scanf("%d", &input);
////		if (input>=1&&input<=4)
////		{
////			printf("�������������");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", pfArr[input](x, y));
////		}
////		
////		else if (input == 0)
////		{
////			printf("�˳�\n");
////			break;
////		}
////		else
////		{
////			printf("�������!\n");
////		}
////	} while (input);
////
////}
////void Calc(int(*pf)(int, int))
////{
////	int x = 0;
////	int y = 0;
////	printf("��������Ҫ��������֣�");
////	scanf("%d%d", &x, &y);
////	printf("%d\n",pf(x, y));
////}
////int main()
////{
////	int input = 0;
////
////	do
////	{
////		menu();
////		printf("�����룺");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 0:
////			printf("�˳�\n");
////			break;
////		case 1:
////			Calc(Add);
////			break;
////		case 2:
////			Calc(Sub);
////			break;
////		case 3:
////			Calc(Mul);
////			break;
////		case 4:
////			Calc(Div);
////			break;
////		default:
////			printf("����������������룡");
////			break;
////		}
////	}while (input);
////	
////}


int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//


	int(*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
	int (*(*ppfArr)[4])(int,int)= &pfArr;//ppfArr��һ��ָ��[����ָ������]��ָ��
	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
	//ָ�������ÿ��Ԫ����һ������ָ��int (*)(int,int)

	return 0;
}