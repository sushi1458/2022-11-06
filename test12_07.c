#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int is_left_move(char* str,char* str2)
//{//abcdefgabcdefg
//	
//	int len1 = strlen(str);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	/*int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		*(str + len+i) = *(str + i);
//	}
//	*(str + 2 * len) = '\0';*/
//	//1.��str�ַ�����׷��һ��str�ַ���
//	//strcat(str1,str1);//strcat��������ͬһ�ַ���׷��
//	strncat(str, str2, len1);
//	//2.�ж�str2ָ����ַ����Ƿ���str�ַ������Ӵ�
//	char* ret = strstr(str, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr[15] = "ABCDEFG";
//	char arr2[] = "EFGABCD";
//	int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0; i < len; i++)
//	//{
//	//	*(arr + len + i) = *(arr + i);
//	//}
//	//*(arr + 2 * len) = '\0';
//
//	int a=is_left_move(arr,arr2);
//	//for (i = 0; i < 14; i++)
//	//{
//	//	printf("%c", arr[i]);
//	//}
//	if (a == 1)
//		printf("���ַ�����ͬ\n");
//	else
//		printf("���ַ�����ͬ\n");
//	return 0;
//}
////���Ͼ���
////��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
////Ҫ��ʱ�临�Ӷ�С��O(N);
//int serach(int (*p)[5],int n,int row,int col)
//{
//	int i = 0;//����
//	int j = col-1;//����
//	while (i<=row&&j>=0)
//	{
//		int tmp = *(*(p + i) + j);
//		if (n > tmp)
//		{
//			i++;
//		}
//		else if (n < tmp)
//		{
//			j--;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5][5] = { { 1, 2, 3, 4, 5 }, { 6,7,8,9,10 }, { 11,12,13,14,15 }, { 16,17,18,19,20 }, { 21,22,23,25,50} };
//	int n = 0;
//	scanf("%d", &n);
//	int ret=serach(arr, n,5,5);
//	if (ret == 0)
//		printf("������\n");
//	else
//		printf("����\n");
//	return 0;
//}

////�õݹ鲻������ʱ����ʵ��strlen
//int my_strlen(char* str)
//{
//	while (*str!= '\0')
//	{
//		return( 1 + my_strlen(str + 1));
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
////ʵ��strcmp
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else 
//		return -1;
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdefgh";
//	int ret = my_strcmp(p1, p2);
//	if (ret == 0)
//		printf("��ͬ\n");
//	else if (ret > 0)
//		printf("p1>p2\n");
//	else
//		printf("p1<p2\n");
//	return 0;
//}

////ʵ��strncmp ����
//int my_strncmp(const char* str1,const char* str2,int count)
//{
//	assert(str1);
//	assert(str2);
//	//�Ƚ�
//	while (count&&*str1==*str2)
//	{
//		if (*str1 != *str2)
//			return (*str1 - *str2);
//		*str1++;
//		*str2++;
//		count--;
//	}
//	if (*str1!=*str2)
//		return (*str1 - *str2);
//	else
//		return 0;
//}
//int main()
//{
//	const char* p1 = "abcdefghzx";
//	const char* p2 = "abcdefgh";
//	int ret = my_strncmp(p1, p2,3);
//	printf("%d\n", ret);
//	return 0;
//}

////ʵ��strncpy
//char* my_strncpy( char* str1,const char* str2,int sz)
//{
//	assert(str1&&str2);
//	char* ret = str1;
//	/*int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//	if(*str2!='\0')
//		{
//			*str1 = *str2;
//			str2++;
//		}
//	else
//		*str1='\0'
//		str1++;
//		
//	}*/
//	while (sz && (*str1++ == *str2++))
//		sz--;
//	if (sz)
//	while (--sz)
//		*str1++ = '\0';
//	return ret;
//}
//int main()
//{
//	char p1[] = "abcdef";
//	char p2[] = "qwer";
//	my_strncpy(p1, p2, strlen(p2));
//	
//	return 0;
//}
////ʵ��strstr
//char* my_strstr(const char* str1,const char* str2)
//{
//	assert(str1&&str2);
//	if (*str2 == '\0')
//		return (char*)str1;
//	//����
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = str1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 && *s2&& (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cur;
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char* p1 = "aabcdef";
//	const char* p2 = "abc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("������\n");
//	else 
//		printf("%s\n", ret);
//}
////ʵ��memcpy
//struct S{
//	char name;
//	int age;
//};
//void* my_memcpy(void* dest,const void* src, unsigned int sz)
//{
//	assert(src&&dest);
//	void* ret = dest;
//	while (sz--)
//	{
//		*((char*)dest)++ = *((char*)src)++;
//	}
//	return ret;
//}
//int main()
//{
//	struct S arr1[] = { { "����", 20 }, { "����", 21 } };
//	struct S arr2[2] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}
////ʵ��memmove
//void* my_memmove(void* dest, void* src, unsigned int sz)
//{
//	assert(src&&dest);//����
//		void* ret = dest;
//		if (src>dest)//�ж�
//		while (sz--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest; 
//			++(char*)src;
//		}
//		else
//		while (sz--)
//		{
//			*((char*)dest + sz) = *((char*)src +sz);
//		}
//		return ret;
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr+2, arr, 20);
//	int i = 0;
//	for (i=0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////memset--�ڴ�����
//int main()
//{
//	char arr[10] ="" ;
//	memset(arr,'#',10);
//	return 0;
//}