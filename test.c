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
//	printf("��ʼѧϰ\n");
//	printf("��Ҫ�ú�ѧϰô����1/0��:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("666\n");
//	else 
//		printf("444");
//	return 0;
//}
//int main(){
//	printf("��ʼѧϰ\n");
//	int line = 0;
//	while (line < 20000){
//		printf("��һ�д���:%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("666666666");
//	return 0;
//
//}
//int main(){
//	int arr[10]={1, 2, 3,4,5,6,7,8,9,10};
//	//printf("��������;%d", arr[2]);
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
//	printf("�ϴ�ֵ�ǣ�%d\n", d);
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
//	strcpy(a.name, "C����");
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
//	printf("���������룺");
//	scanf("%s", password);//�������ڻ�ʣһ��\n
//	while ((ch = getchar())!='\n'){
//		;
//	}
//	printf("ȷ�������Ƿ���ȷ��Y/N��");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//	printf("����ȷ��");
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
//	printf("*************   1:��ʼ��Ϸ     0���˳���Ϸ    *************\n");
//	printf("***********************************************************\n");
//}
//void game(){
//	int ret = 0;
//	int a = 0;
//	ret = rand()%100+1;//����1-100�����
//	while (1){
//		
//		printf("������Ĵ𰸣�");
//		scanf("%d", &a);
//		if (a < ret)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else if (a>ret)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�ش���ȷ\n");
//			break;
//		}
//	}
//}
//int main(){
//	int input = 0;
//	//��ʱ����������������������ʼ��
//	srand((unsigned int)time(NULL));//time_tʵ����Ϊ������    NULL-��ָ��
//	do{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("�������\n");
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
//	printf("�����롰��������������ĵ��Խ�����1���Ӻ�ػ���\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
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
//�ݹ�
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
//��ʹ����ʱ����д��һ�������ַ������ȵĺ���
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
//	printf("���鳤��Ϊ��%d\n", a);
//	return 0;
//}
//�ݹ�͵���
//����n�Ľ׳ˣ������������
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
//���n��쳲�������
//�ݹ鷨
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
//ѭ��
//�Լ�д�ĸ�ʺһ��
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
//ð������
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1 ; i++)
//	{
//		int flag = 1;//����������Ѿ�����
//		int j = 0;
//		for (j = 0; j < sz - 1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;//��������ʵ����ȫ����
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
//1.sizeof(arr)--arr��ʾ��������
//2.&arr--arr��ʾ��������
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("%p\n",arr);//arr��ʾ��Ԫ�ص�ַ
//	printf("%p\n",arr[0]);//arr����Ԫ�ص�ַ��������ȫ�ȼ�
//	printf("%p\n",&arr);//��Ȼ��ӡ���ĵ�ַ��������ͬ�����˴�arr��ʾ��������ĵ�ַ����ӡ������Ԫ����ʼλ��
//	
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//���4���ֽ�
//
//	printf("%p\n", arr[0]);
//	printf("%p\n", arr[0]+1);//���4���ֽ�
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//���һ������ĳ���
//	return 0;
//}
//������
void memu()
{
	printf("**********************************************************\n");
	printf("****************    1.play     0.exit      ***************\n");
	printf("**********************************************************\n");
}
//��Ϸ�㷨ʵ��
void game()
{
	char ret = 0;
	//�������߳���������Ϣ
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//��һغ�
		PlarerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);
		//��Ӯ�ж�
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//���Իغ�
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
		printf("��Ӯ�ˣ�\n");
	}
	else if (ret == '#')
	{
		printf("�����ˣ�\n");
	}
	else
		printf("ƽ��\n");

}
void test()
{
	int input = 0;
 do
 {
	 memu();
	 printf("�����룺");
		 scanf("%d", &input);
		 system("cls");
		 switch (input)
		 {
		 case 1:
			 game();
			 break;
		 case 0:
			 printf("�˳���Ϸ\n");
			 Sleep(1000);
			 system("cls");
			 break;
		 default:
			 printf("����������������룡");
			 
			 break;
		 }
		
 } while (input);
}
int main(){
	
	test();
	return 0;
}
