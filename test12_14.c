#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
////malloc
//int main()
//{
//	//向内存申请空间
//	int*p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}
////calloc
//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			 *(p + i)=i;
//		}
//	}
	//以上是在使用malloc开辟的20个字节空间
	//假设20个字节不够使用
    //希望可以有40个字节的空间
	//这里就可以使用realloc来动态开辟内存
	//
	//realloc使用注意事项
	//1.如果p指向的空间之后有足够的空间可以追加，则直接追加，返回p。
	//2.如果p之后没有足够的内存空间追加，则realloc会寻找一块新的符合要求的空间，并且把原来内存的
	//数据拷贝到新的空间，释放旧的空间，最后返回新空间的地址
	//3.需要用新的一个变量接收realloc的返回值
//	int* ptr = realloc(p, 40);
//	//int* a = realloc(NULL,40);//这种写法等同于malloc(40)
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//}

//int main()
//{
// 使用free释放动态开辟内存时，p所指向位置发生改变
	////创建空间
	//int* p = malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*p++ = i;
	//	}
	//}
	////释放空间
	//free(p);//因为p所指向的位置已经发生改变，所以释放时会失败
	//p = NULL;

	//// 对同一块动态内存的多次释放
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		//使用
//	}
//	//释放
//	free(p);
//	p = NULL;//如果不在释放后将p置为NULL，若之后忘记后再次释放p会造成程序崩溃
//	//......
//	free(p);

////动态开辟内存忘记释放（内存泄漏）
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//
////1.题
//void Getmemory(char* p)
//{
//	p = (char*)malloc(15);
//}
//void test()
//{
//	char* str = NULL;
//	Getmemory(str);
//	strcpy(str, "hello word!");
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}
////改正1
//void Getmemory(char** p)
//{
//	*p = (char*)malloc(15);
//}
//void test()
//{
//	char* str = NULL;
//	Getmemory(&str);
//	strcpy(str, "hello word!");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

////改正2
//char* Getmemory(char* p)
//{
//	p = (char*)malloc(15);
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str=Getmemory(str);
//	strcpy(str, "hello word!");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

////2.题
//char* Getmemory()
//{
//	char p[] = "hello word!";//返回栈空间地址的问题
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str = Getmemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}
////改正1
//char* Getmemory()
//{
//	static char p[] = "hello word!";
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	str = Getmemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//3.题
//void Getmemory(char**p,int num)
//{
//	*p = (char*)malloc(num);
//}
//void test()
//{
//	char* str = NULL;
//	 Getmemory(&str,100);
//	 strcpy(str, "hello");//未释放内存
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//4.题


//void test()
//{
//	char *str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	if (str != NULL)
//	{
//		strcpy(str, "word");
//		printf(str);
//	}
//	
//}
//int main()
//{
//	test();
//	return 0;
//}


////柔性数组
//struct S
//{
//	int n;
//	int arr[];//或int arr[0]      未知大小的数组-柔性数组成员-数组的大小是可以调整的
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//计算带有柔性数组的结构体中，不包括柔性数组
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	p->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p->arr[i] = i;
//	}
//	struct S* str = realloc(p,44);
//	if (str != NULL)
//	{
//		p = str;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",p->arr[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//	
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* p= (struct S*)malloc(sizeof(struct S));
//	p->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	int *ptr = realloc(p->arr,10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p->arr);
//	free(p);
//	p->arr = NULL;
//	p = NULL;
//	return 0;
//}