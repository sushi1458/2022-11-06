#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//1.一个数二进制中有几个1
//%2，/2
//int count_one(unsigned a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a= 0;
//	scanf("%d", &a);
//	int count = count_one(a);
//	printf("%d\n", count);
//
//	return 0;
//}
//每一位&1
//int count_one(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 31; i++)
//			{
//				if (((a >> i) & 1) == 1)
//					count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_one(a);
//	printf("%d\n", count);
//	return 0;
//}
//最精简算法
//int count_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//		scanf("%d", &a);
//		int count = count_one(a);
//		printf("%d\n", count);
//	return 0;
//}

//2.两个int(32位)整数m和n的二进制表达中，有多少个位（bit）不同？
//^相同为0，不同为1

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int a = m^n;
//	int i = 0;
//	int c = 0;
//	int count = 0;
//	for (i = 0; i <= 31; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	if (m*n < 0)
//	{
//		count = 32 - count;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//-5   10000000000000000000000000000101
//     11111111111111111111111111111011
//3    00000000000000000000000000001011
//     00000000000000000000000000001010
//     00000000000000000000000000001000 
//-5^3 11111111111111111111111111111000
//打印二进制的奇数位和偶数位
//void get_JO(int a)
//{
//	int i = 0;
//	printf("奇位数：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("偶位数：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	get_JO(a);
//	return 0;
//}
//用指针打印数组内容
//void print(int* p ,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ",*(p +i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//递归方式打印一个整数的每一位
//void print(int a)
//{
//	
//	if (a>9){
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//
//}
//递归和非递归实现求n的阶乘（不考虑溢出）
//非递归
//int J(int n)
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j = j*i;
//	}
//	return j;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a=J(n);
//	printf("%d的阶乘=%d\n", n, a);
//	return 0;
//}
//递归
//int Fac(int n)
//{
//	
//	if (n > 1)
//		return n*Fac(n - 1);
//	else
//		return 1;
//
//}
//int main()
//{
//		int n = 0;
//		scanf("%d", &n);
//		int a=Fac(n);
//		printf("%d的阶乘=%d\n", n, a);	
//		return 0;
//}
//strlen递归与非递归模拟实现
//非递归
//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count=0;
//	while (arr[i] != '\0'){
//			count++;
//			i++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello word!";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//递归实现
//int my_strlen(char* p)
//{
//	if (*p!= '\0')
//		return 1 + my_strlen(p+ 1);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello word!";
//		int len = my_strlen(arr);
//		printf("%d\n", len);
//	return 0;
//}

//字符串逆序（递归实现）

int my_strlen(char arr[])
{
	int i = 0;
	int count=0;
	while (arr[i] != '\0'){
			count++;
			i++;
	}
	return count;
}
//void rever_string(char arr[])
//{
//	char tmp = 0;
//	tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		rever_string(arr+1);
//	}
//	arr[len - 1] = tmp;
//}
//void reverse_string(char* arr)
//{
//	char temp = *arr;//首元素存放好 
//	int len = strlen(arr);
//	*arr = *(arr + len - 1);//最后一个元素到首位 
//	*(arr + len - 1) = '\0';//最后一个元素等于\0,给定下次遍历的右范围 
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);//给定下次遍历的左范围 
//	}
//
//	*(arr + len - 1) = temp;//把当前的最后元素,也就是\0,替换成首元素 
//}

int main()
{
	char arr[] = "hello word！";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
//写一个递归函数DigitSum（n）输入一个非负整数，返回组成它的数字之和
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//	return n;
//}
// int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	int b=DigitSum(a);
//	printf("%d\n", b);
//	return 0;
//}

//递归实现n的k次方
//double Pow(int n,int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / Pow(n, -k));
//	}
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	double ret = Pow(n,k);
//	printf("%d的%d次方=%lf\n",n,k, ret);
//	return 0;
//}