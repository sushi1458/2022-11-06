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
//////p是整个数组的地址+i，跳过整个数组，而二维数组是连续的，就相当于到了第二个数组的起始位置
////// *操作后 是首元素地址
////			printf("%d ", (*(p + i))[j]);
////
////		}
////		printf("\n");
////		
////	}
//	printf("%p\n", p);//0137FC80  p存放整个数组的地址
//	printf("%x\n", p);//137fc80
//	printf("%p \n", p+1);//0137FC94  p+1跳过整个数组
//	printf("%p \n", *p);//0137FC80  *p是首元素地址
//	printf("%p\n", *p + 1);// 0137FC84 *p+1是第二个元素
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
//	//	//printf("%d ", *(p + i));//p是首元素地址，p+i（整形加的是四个字节）是下一个元素地址，*后就是下一个元素
//	//    printf("%d ", *(arr+i));
//	//    printf("%d",arr[i]);//以上表达式意思相同
//	//}
//	return 0;
//int main()
//{
//	const char* p = "abcdef";//char只有四个字节，abcdef无法全部存入p，因此此处仅存放a的地址
//	return 0;
//}

//singnal 是一个函数声明
//singnal函数的参数有两个，第一个是int，第二个是一个函数指针，该函数指针指向的函数参数是int，返回类型是void
//signal函数的返回类型也是一个指针：该函数指针指向的函数参数是int，返回类型是void
//void(*signal(int, void(*)(int)))(int);
////简化后
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);



//char* my_strlen(char* dest, const char* src);
////写一个函数指针pf指向my_srrlen
////写一个函数指针数组pfArr，能够存放4个my_strlen函数地址
//char* (*pf)(char*, const char*);
//char* (*pfArr[4])(char*, const char*);

//计算器
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
////		printf("请输入：");
////		scanf("%d", &input);
////		if (input>=1&&input<=4)
////		{
////			printf("请输入操作数：");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", pfArr[input](x, y));
////		}
////		
////		else if (input == 0)
////		{
////			printf("退出\n");
////			break;
////		}
////		else
////		{
////			printf("输入错误!\n");
////		}
////	} while (input);
////
////}
////void Calc(int(*pf)(int, int))
////{
////	int x = 0;
////	int y = 0;
////	printf("请输入你要计算的数字：");
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
////		printf("请输入：");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 0:
////			printf("退出\n");
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
////			printf("输入错误，请重新输入！");
////			break;
////		}
////	}while (input);
////	
////}


int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//


	int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
	int (*(*ppfArr)[4])(int,int)= &pfArr;//ppfArr是一个指向[函数指针数组]的指针
	//ppfArr是一个数组指针，指针指向的数组有4个元素
	//指向数组的每个元素是一个函数指针int (*)(int,int)

	return 0;
}