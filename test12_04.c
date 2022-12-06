#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
//int main()
//{
//	unsigned long pulArry[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArry;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12
//	return 0;
//}
////逆序字符串
//void reverse(char* p,int sz)
//{
//	
//	char tmp = *p;
//	*p = *(p+sz);
//	*(p+sz) ='\0';
//	p += 1;
//	sz = strlen(p) - 1;
//	*(p + sz+1) = tmp;
//	if (sz >= 1)
//	{
//		reverse(p, sz);
//	}
//
//}
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);
//	//逆序函数
//	reverse(arr,strlen(arr)-1);
//	printf("%s\n", arr);
//	return 0;
//}
//void reverse(char* str)
//{
//	assert(str);
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);//读取一行
//	//逆序函数
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//求1-10000中的自幂数
//int main()
//{ 
//	int i = 0;
//	
//	for (i = 1; i <= 100000; i++)
//	{
//		int n=i;
//		int count = 1;
//		int sum = 0;
//		while (n/=10)
//		{
//			count++;
//		}
//		n = i;
//		while (n)
//		{	
//			sum += pow(n % 10, count);
//			n /=10;
//		}
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j=0 ; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
////喝汽水，1瓶汽水1元，2个空瓶子可以换1瓶，给20元，可以喝多少瓶汽水。
//int main()
//{
//	int money= 0;
//	scanf("%d", &money);
//	int total =money;//喝掉的汽水
//	int empty= total;//空瓶子
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n",total);	
//	return 0;
//}
//将数组中的奇数放到偶数前面
//void move(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz / 2; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			int j = 0;
//			for (j = sz; j >= sz/2; j--)
//			{
//				if (arr[j] % 2 != 0)
//				{
//					break;
//				}
//			}
//			int tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5,7, 9,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	move(arr,sz);
//	int i = 0;
//	for (i = 0; i <=sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	unsigned char a=200 ;
//	unsigned char b=100 ;
//	unsigned char c=0 ;
//	c = a+ b;
//	printf("%d,%d\n", a + b, c);
//	return 0;
//}
////打印杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		int k = 0;
//		for (k = 0; k < 10- 1 - i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//猜凶手
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为四个嫌疑犯的供词：
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说。
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息写一个程序来确定到底谁是凶手。
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer < 'D'; killer++)
//	{
//		
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}
////实现一个函数，可以左旋字符串中的K个字符。
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
////暴力求解法
////void left_move(char* str, int sz, int k)
////{
////	assert(str);
////	while (k)
////	{
////		char tmp = *str;
////		int j = 0;
////		for (j = 0; j < sz; j++)
////		{
////			*(str + j) = *(str + j + 1);
////		}
////		*(str + sz) = tmp;
////		k--;
////	}
////}
//////三部翻转法
//void reverse(char* str,int len)
//{
//	assert(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* str,int k)
//{
//	assert(str);
//	assert(k <= strlen(str));
//	reverse(str, k);
//	reverse(str + k, strlen(str + k));
//	reverse(str, strlen(str));
//}
//int main()
//{
//	char arr[] = "ABCDEFG";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr,k);
//	int i = 0;
//	for (i = 0; i <= strlen(arr) - 1; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串。
//例如：给定s1=AABCD和s2=BCDAA，返回1
//给定s1=abcd和s2=ABCD，返回0。
////三部翻转法
//void reverse(char* str,int len)
//{
//	assert(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//}
//int is_left_move(char* str,char* str2)
//{
//	int k = 0;
//	for (k = 0; k < strlen(str); k++)
//	{
//		assert(str);
//		assert(k <= strlen(str));
//		reverse(str, k);
//		reverse(str + k, strlen(str + k));
//		reverse(str, strlen(str));
//		if (strcmp(str, str2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "ABCDEFG";
//	char arr2[] = "DEFGABC";
//	int k = 0;
//	int a=is_left_move(arr,arr2);
//	if (a == 1)
//		printf("两字符串相同\n");
//	else
//		printf("两字符串不同\n");
//	return 0;
//}