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
////�����ַ���
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
//	//������
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
//	gets(arr);//��ȡһ��
//	//������
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//��1-10000�е�������
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
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j=0 ; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ�ӿ��Ի�1ƿ����20Ԫ�����Ժȶ���ƿ��ˮ��
//int main()
//{
//	int money= 0;
//	scanf("%d", &money);
//	int total =money;//�ȵ�����ˮ
//	int empty= total;//��ƿ��
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n",total);	
//	return 0;
//}
//�������е������ŵ�ż��ǰ��
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
////��ӡ�������
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
//������
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ�ĸ����ɷ��Ĺ��ʣ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵��
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣдһ��������ȷ������˭�����֡�
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
////ʵ��һ�����������������ַ����е�K���ַ���
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
////������ⷨ
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
//////������ת��
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
//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ�����
//���磺����s1=AABCD��s2=BCDAA������1
//����s1=abcd��s2=ABCD������0��
////������ת��
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
//		printf("���ַ�����ͬ\n");
//	else
//		printf("���ַ�����ͬ\n");
//	return 0;
//}