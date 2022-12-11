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
//	//1.在str字符串中追加一个str字符串
//	//strcat(str1,str1);//strcat不能用于同一字符串追加
//	strncat(str, str2, len1);
//	//2.判断str2指向的字符串是否是str字符串的子串
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
//		printf("两字符串相同\n");
//	else
//		printf("两字符串不同\n");
//	return 0;
//}
////杨氏矩阵：
////有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序再这样的矩阵中查找某个数字是否存在。
////要求时间复杂度小于O(N);
//int serach(int (*p)[5],int n,int row,int col)
//{
//	int i = 0;//行数
//	int j = col-1;//列数
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
//		printf("不存在\n");
//	else
//		printf("存在\n");
//	return 0;
//}

////用递归不创建临时变量实现strlen
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
////实现strcmp
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	//比较
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
//		printf("相同\n");
//	else if (ret > 0)
//		printf("p1>p2\n");
//	else
//		printf("p1<p2\n");
//	return 0;
//}

////实现strncmp 存疑
//int my_strncmp(const char* str1,const char* str2,int count)
//{
//	assert(str1);
//	assert(str2);
//	//比较
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

////实现strncpy
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
////实现strstr
//char* my_strstr(const char* str1,const char* str2)
//{
//	assert(str1&&str2);
//	if (*str2 == '\0')
//		return (char*)str1;
//	//查找
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
//		printf("不存在\n");
//	else 
//		printf("%s\n", ret);
//}
////实现memcpy
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
//	struct S arr1[] = { { "张三", 20 }, { "李四", 21 } };
//	struct S arr2[2] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}
////实现memmove
//void* my_memmove(void* dest, void* src, unsigned int sz)
//{
//	assert(src&&dest);//断言
//		void* ret = dest;
//		if (src>dest)//判断
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
////memset--内存设置
//int main()
//{
//	char arr[10] ="" ;
//	memset(arr,'#',10);
//	return 0;
//}