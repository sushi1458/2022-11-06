#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"game.h"
//int Add(int x, int y){
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 50;
//	int b = 60;
//	//scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(a, b);
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main(){
//	int input = 0;
//	printf("开始学习\n");
//	printf("你要好好学习么？（1/0）:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("666\n");
//	else 
//		printf("444");
//	return 0;
//}
//int main(){
//	printf("开始学习\n");
//	int line = 0;
//	while (line < 20000){
//		printf("敲一行代码:%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("666666666");
//	return 0;
//
//}
//int main(){
//	int arr[10]={1, 2, 3,4,5,6,7,8,9,10};
//	//printf("数组里有;%d", arr[2]);
//	int i = 0;
//	while (i < 10){
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int Max(int x,int y){
//	
//	if (x >= y)
//		return x;
//	else
//	return y;
//}
//int main(){
//	int a = 0;
//    int b = 0;
//	scanf("%d%d", &a, &b); 
//	int d = (a > b ? a : b);
////	int d = Max(a, b);
//	printf("较大值是：%d\n", d);
//	return 0;
//}
//int main(){
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;
//		printf("%p\n", p);
//		*p = 20;
//		printf("%d\n", a);
//	return 0;
//}
//struct Book{
//	char name[20];
//	short price;
//};
//int main(){
//	struct Book a = { "C#", 66 };
//	strcpy(a.name, "C语言");
//
//	struct Book* pb = &a;
//	printf("%s\n", pb->name);
//	////printf("%s\n", a.name);
//	//a.price = 88;
//	//printf("%d\n", a.price);
//	return 0;
//}
//int main(){
//	int a = 0;
//	int b = 2;
//	if (a == 1){
//		if (b == 2)
//			printf("hehe\n");
//}
//		else
//			printf("haha\n");
//		return 0;
////}
//int main(){
//	int i = 1;
//	//while (i <=100){
//	//	if (i % 2== 1){
//	//		printf("%d\n", i);
//	//	}
//	//	i++;
//	//}
//	while (i <= 100){
//		printf("%d  ", i);
//		i += 2;
//	}
//	return 0;
//}
//int main(){
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{putchar(ch);
//	
//	}
//	return 0;
//}
//int main(){
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);//缓冲区内还剩一个\n
//	while ((ch = getchar())!='\n'){
//		;
//	}
//	printf("确认密码是否正确（Y/N）");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//	printf("放弃确认");
//	return 0;
//}
//int main(){
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main(){
//	int i = 0;
//	for (i = 1; i <= 10; i++){
//		if (i == 5)
//			continue;
//		printf("%d  ", i);
//	}
//	return 0;
//}

// int main(){
//	int i = 0;
//	int j = 1; 
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i<=n; i++){
//		j = i*j;
//	}
//	printf("%d", j);
//	return 0;
//
//}
//void menu(){
//	printf("***********************************************************\n");
//	printf("*************   1:开始游戏     0：退出游戏    *************\n");
//	printf("***********************************************************\n");
//}
//void game(){
//	int ret = 0;
//	int a = 0;
//	ret = rand()%100+1;//生成1-100随机数
//	while (1){
//		
//		printf("输入你的答案：");
//		scanf("%d", &a);
//		if (a < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else if (a>ret)
//		{
//			printf("猜大了！\n");
//		}
//		else
//		{
//			printf("恭喜你！回答正确\n");
//			break;
//		}
//	}
//}
//int main(){
//	int input = 0;
//	//拿时间戳来设置随机数的生成起始点
//	srand((unsigned int)time(NULL));//time_t实质上为长整型    NULL-空指针
//	do{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("输入错误！\n");
//				Sleep(1000);
//				system("cls");
//				break;
//		}
//	} while (input);
//	return 0;
//
//int main(){
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请输入“我是猪”，否则你的电脑将在在1分钟后关机！\n请输入：");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		system("cls");
//		goto again;
//	}
//	return 0;
//}
//int main(){
//	char arr[] = "hello word!";
//	memset(arr, '*', 5);
//	puts(arr);
//	return 0;
//}
//void exc(int* x, int* y){
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	exc(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//递归
//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//int main(){
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//
//}
//不使用临时变量写出一个计算字符串长度的函数
//int my_strlen(char* str)
//{
//	if( *str != '\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	return 0;
//}
//int main(){
//	char arr[] = "hel";
//	int a =my_strlen(arr);
//	printf("数组长度为：%d\n", a);
//	return 0;
//}
//递归和迭代
//计算n的阶乘（不考虑溢出）
//int Fac(int x)
//{
//	if (x >1){
//	return x*Fac(x - 1);
//}
//	else
//	return 1;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fac(n));
//	return 0;
//}
//求第n个斐波那契数
//递归法
//int Fib(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x - 2) + Fib(x - 1);
//	}
//	return 0;
//}
//int main(){
//	int n =40;
//	printf("%d\n",Fib(n));
//	return 0;
//}
//循环
//自己写的跟屎一样
//int Fib(int x)
//{
//	int i = 2;
//	int a = 0;
//	int tmp = 0;
//	int b = 1;
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		while(i <= x )
//		{
//			tmp = b;
//			b= a+ b;
//			a = tmp;
//			i++;
//		}
//	}
//	return b;
//}
//int main(){	
//	int n = 3;
//	printf("%d\n", Fib(n));
//	return 0;
//}
//int Fib(int x)
//{
//	int a = 1;
//	int c = 0;
//	int b = 1;
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int i = 3; i <= x; i++)
//		{
//			c= a + b;
//			a = b;
//			b = c;
//			
//		}
//	}
//	return c;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	return 0;
//}
//冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1 ; i++)
//	{
//		int flag = 1;//假设该数组已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;//该数组其实不完全有序
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main(){
//	int arr[] = { 10,9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz=sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int a = 0;
//	for (a = 0; a < sz ; a++)
//	{
//		printf("%d  ", arr[a]);
//	}
//	
//	return 0;
//}
//1.sizeof(arr)--arr表示整个数组
//2.&arr--arr表示整个数组
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("%p\n",arr);//arr表示首元素地址
//	printf("%p\n",arr[0]);//arr表首元素地址与上面完全等价
//	printf("%p\n",&arr);//虽然打印出的地址与上面相同，单此处arr表示整个数组的地址，打印出的是元素起始位置
//	
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//相差4个字节
//
//	printf("%p\n", arr[0]);
//	printf("%p\n", arr[0]+1);//相差4个字节
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//相差一个数组的长度
//	return 0;
//}
//三子棋
void memu()
{
	printf("**********************************************************\n");
	printf("****************    1.play     0.exit      ***************\n");
	printf("**********************************************************\n");
}
//游戏算法实现
void game()
{
	char ret = 0;
	//数组存放走出的棋盘信息
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印数组
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家回合
		PlarerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);
		//输赢判断
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑回合
		Computermove(board, ROW, COL);
		Sleep(1000);
		system("cls");
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("你赢了！\n");
	}
	else if (ret == '#')
	{
		printf("你输了！\n");
	}
	else
		printf("平局\n");

}
void test()
{
	int input = 0;
 do
 {
	 memu();
	 printf("请输入：");
		 scanf("%d", &input);
		 system("cls");
		 switch (input)
		 {
		 case 1:
			 game();
			 break;
		 case 0:
			 printf("退出游戏\n");
			 Sleep(1000);
			 system("cls");
			 break;
		 default:
			 printf("输入错误，请重新输入！");
			 
			 break;
		 }
		
 } while (input);
}
int main(){
	
	test();
	return 0;
}
