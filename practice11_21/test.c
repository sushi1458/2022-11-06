#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//1.����Ļ���������ͼ����
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


//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
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
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
*/


//3.
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//�ݹ�
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
//ѭ��
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


