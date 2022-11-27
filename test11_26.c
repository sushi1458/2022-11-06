#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////悟空第一天摘下桃子若干，当即吃掉一半，还不过瘾，又多吃一个，第二天又将剩下的桃子吃掉一半多一个，
//以后每天吃掉前一天剩下的一半多一个，到第n天准备吃的时候只剩下一个桃子。聪明的你，请帮悟空算一下，
//他第一天开始吃的时候桃子一共有多少个呢？
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int x = 0;
//	int i = n;
//	while (i)
//	{
//		if (i == n)
//		{
//			x = 1;
//		}
//		else
//		x = (x+ 1)*2;
//		i--;
//	}
//	printf("%d", x);
//	return 0;
//}
////这是一个有趣的古典数学问题，著名意大利数学家Fibonacci曾提出一个问题：有一对小兔子，
//从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月又生一对兔子。
//按此规律，假设没有兔子死亡，第一个月有一对刚出生的小兔子，问第n个月有多少对兔子？
//递归
//int Rabbit(int n, int a,int b)
//{
//	while (n>1)
//	{
//		int tmp = a + b;
//		a = b;
//		b = tmp;	
//		Rabbit(n--, a, b);
//	}
//	return b;
//}
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b= 1;
//	scanf("%d", &n);
//	int ret=Rabbit(n,a,b);
//	printf("%d", ret);
//	return 0;
//}
//循环
//int Rabbit(int n, int a, int b)
//{
//	while (n>1)
//	{
//		int tmp = a + b;
//		a = b;
//		b = tmp;
//		n--;
//	}
//	return b;
//}
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 1;
//	scanf("%d", &n);
//	int ret = Rabbit(n, a, b);
//	printf("%d", ret);
//	return 0;
//}
//输入一批学生的成绩（整数），输出最高分。
//int main()
//{
//	int n = 0;
//	int max = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n<0)
//		{
//			break;
//		}
//		if (max < n)
//		{
//			max = n;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//小明对某些数字有偏爱，例如，他喜欢7的倍数，而不喜欢4的倍数，如果一个整数是7的倍数，而不是4的倍数，
//小明会认为这个数字是他的幸运数字。现在给定两个整数m和n，请你帮小明找m到n范围内的最大的幸运数字。
//如果m到n范围内没有幸运数字，则输出“no”
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	int j = 0;
//	while (m<=n)
//	{
//		if (n % 7 == 0 && n % 4 != 0)
//		{
//				max = n;
//			j++;
//			break;
//		}
//		n--;
//	}
//	if (j == 0)
//	{
//		printf("no");
//	}
//	else
//		printf("%d", max);
//	return 0;
//}


