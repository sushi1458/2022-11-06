#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//int main()
//{ 
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//void my_strcop(char dest[],char src[])//��ָ��ʵ��
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		 dest[i]= src[i];
//	}
//}
//void my_strcop(char* dest, char* src)//ָ��ʵ��
//{
//
//	while (*src!='\0')
//	{
//		*dest= *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//void my_strcop(char* dest, char* src)//ָ��ʵ�� �Ż�1
//{
//
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//����++
//	}
//	*dest = *src;
//}
//void my_strcop(char* dest, char* src)//ָ��ʵ�� �Ż�2
//{
//
//	while (*dest++=*src++)//  \0��ASCIIֵΪ0��ѭ������
//	{
//		;
//	}
//}
//void my_strcop(char* dest, char* src)//ָ��ʵ�� �Ż�3
//{
//	if (dest != NULL&&src != NULL)
//	{
//		while (*dest++ = *src++)//  \0��asciiֵΪ0��ѭ������
//		{
//			;
//		}
//	}
//}	
//void my_strcop(char* dest, char* src)//ָ��ʵ�� �Ż�4
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//		while (*dest++ = *src++)//  \0��asciiֵΪ0��ѭ������
//		{
//			;
//		}
//}
//void my_strcop(char* dest,const char* src)//ָ��ʵ�� �Ż�5
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)//  \0��asciiֵΪ0��ѭ������
//	{
//		;
//	}
//}
//char* my_strcop(char* dest, const char* src)//ָ��ʵ�� �Ż�6
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)//  \0��asciiֵΪ0��ѭ������
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "#######################";
//	char arr2[] = "hello word!";
//	printf("%s\n", my_strcop(arr1, arr2));
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//
//}