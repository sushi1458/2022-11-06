#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//1.在屏幕上输出以下图案：
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//shi
//int main()
//{
//	char arr1[] = "********************************";
//	char arr2[] = "                                                                 ";
//	int mid=strlen(arr1)/2;
//	int left = mid;
//	int right = mid;
//	while (left >= 0 && right <= strlen(arr1)-1)
//	{
//		if (left==right)
//	   {
//		arr2[mid] = arr1[mid];
//
//		}
//		else
//		{
//			arr2[right] = arr1[right];
//			arr2[left] = arr1[left];
//		}
//		printf("%s\n", arr2);
//		left--;
//		right++;
//	}
//	while (left!=right)
//	{
//		left++;
//		right--;
//		arr2[left] = ' ';
//		arr2[right] = ' ';
//		
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (k = 0; k < line - 1 - i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i=0; i<=line; i++)
//	{
//		for (k = 0; k < i + 1; k++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-2-i)+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int i = 0;
//	for (i = 1000; i< 10000; i++)
//	{
//		n = i;
//		int sum = 0;
//	while (n)
//	{
//		a=n % 10;
//		sum= sum+a*a*a*a;
//		n=n / 10;
//	}
//	if (sum == i)
//	{
//	   printf("%d\n", sum);
//	}
//	}
//	return 0;
//}
/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/


//3.
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//递归
//int Sn(int n,int i,int a)
//{
//	
//	while (i<5)
//	{
//		i++;
//		return n + Sn(n * 10 + a,i,a);
//		
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int a = n;
//	int sum = 0;
//	sum=Sn(n,i,a);
//
//	printf("%d", sum);
//	//24690
//	return 0;
//}
//循环
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d",&n);
//	for (i = 0; i < 5; i++)
//	{
//		tmp = tmp * 10 + n;
//		sum = sum + tmp;
//	}
//	printf("%d", sum);
//	return 0;
//}


