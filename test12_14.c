#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
////malloc
//int main()
//{
//	//���ڴ�����ռ�
//	int*p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//�ͷſռ�
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
	//��������ʹ��malloc���ٵ�20���ֽڿռ�
	//����20���ֽڲ���ʹ��
    //ϣ��������40���ֽڵĿռ�
	//����Ϳ���ʹ��realloc����̬�����ڴ�
	//
	//reallocʹ��ע������
	//1.���pָ��Ŀռ�֮�����㹻�Ŀռ����׷�ӣ���ֱ��׷�ӣ�����p��
	//2.���p֮��û���㹻���ڴ�ռ�׷�ӣ���realloc��Ѱ��һ���µķ���Ҫ��Ŀռ䣬���Ұ�ԭ���ڴ��
	//���ݿ������µĿռ䣬�ͷžɵĿռ䣬��󷵻��¿ռ�ĵ�ַ
	//3.��Ҫ���µ�һ����������realloc�ķ���ֵ
//	int* ptr = realloc(p, 40);
//	//int* a = realloc(NULL,40);//����д����ͬ��malloc(40)
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
// ʹ��free�ͷŶ�̬�����ڴ�ʱ��p��ָ��λ�÷����ı�
	////�����ռ�
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
	////�ͷſռ�
	//free(p);//��Ϊp��ָ���λ���Ѿ������ı䣬�����ͷ�ʱ��ʧ��
	//p = NULL;

	//// ��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		//ʹ��
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;//��������ͷź�p��ΪNULL����֮�����Ǻ��ٴ��ͷ�p����ɳ������
//	//......
//	free(p);

////��̬�����ڴ������ͷţ��ڴ�й©��
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//
////1.��
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
////����1
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

////����2
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

////2.��
//char* Getmemory()
//{
//	char p[] = "hello word!";//����ջ�ռ��ַ������
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
////����1
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

//3.��
//void Getmemory(char**p,int num)
//{
//	*p = (char*)malloc(num);
//}
//void test()
//{
//	char* str = NULL;
//	 Getmemory(&str,100);
//	 strcpy(str, "hello");//δ�ͷ��ڴ�
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//4.��


//void test()
//{
//	char *str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
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


////��������
//struct S
//{
//	int n;
//	int arr[];//��int arr[0]      δ֪��С������-���������Ա-����Ĵ�С�ǿ��Ե�����
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//���������������Ľṹ���У���������������
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
//	//�ͷ�
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