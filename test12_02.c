#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	//int Add(int x, int y)
	//{
	//	return x + y;
	//}
	//int main()
	//{
	//	////ָ������
	//	//int* arr[10];
	//	////����ָ��
	//	//int* (*pa)[10] = &arr;
	//    ////����ָ��
	//	int (*pAdd)(int,int) = Add;//&Add
	//	int sum=(*pAdd)(1, 2);
	//	int sum = pAdd(1, 2);
	//	printf("sum=%d\n",sum);
	//	//����ָ�������
	//	int(*pArr[4])(int, int);
	//	//ָ����ָ�������ָ��
	//	int(*(*ppArr)[4])(int, int)=&pArr;
	//	return 0;
	//}
//void bibble_sort(int Arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;      
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//			for (j = 0; j < sz-i-1;j++)
//			{
//				if (Arr[j] > Arr[j+1])
//				{
//					tmp = Arr[j];
//					Arr[j] = Arr[j+1];
//					Arr[j+1] = tmp;
//				}
//			}
//	}
//	
//
//
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bibble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////������������
//int cmp_int(const void* a, const void* b)
//{
//	return (*(int*)a) - (*(int*)b);
//}
//void test1()
//{
//	int arr[] = { 9, 8, 7,6, 5,4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////���򸡵�������
//int cmp_float(const void* a, const void* b)
//{
//	if (*(float*)a > *(float*)b)
//		return 1;
//	else if (*(float*)a < *(float*)b)
//		return -1;
//	else
//		return 0;	
//	//return ((int)(*(float*)a - *(float*)b));//���ַ������ж�С��λʱ����ִ���
//}
//void test2()
//{
//	float f[] = { 3.14, 2.414, 1.732, 2.56};
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
////����ṹ���еı���
//struct Stu{
//	char name[20];
//	int age;
//};
//int cmp_by_name(const void* a, const* b)
//{
//	return strcmp(((struct Stu*)a)->name, ((struct Stu*)b)->name);
//}
//void test3()
//{
//	struct Stu s [3]= { { "zhansgan", 60 }, { "wangwu", 70 }, { "lisi", 18 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_by_name);
//
//}
//int cmp_by_age(const void* a, const* b)
//{
//	return (((struct Stu*)a)->age - ((struct Stu*)b)->age);
//	
//}
//void test4()
//{
//	struct Stu s[3] = { { "zhansgan", 60 }, { "wangwu", 70 }, { "lisi", 18 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_by_age);
//
//}
//int main()
//{ 
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	return 0;
//}
//void Exc(char* a, char* b, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *a;
//		*a = *b;
//		*b = tmp;
//		a++;
//		b++;
//	}
//}
//int cmp_int(const void* a, const void* b)
//{
//	return (*(int*)a) - (*(int*)b);
//}
//void my_sort(void* base, int sz, int width, int(*p)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�رȽ�
//			if (p((char*)base+(j*width),(char*)base+(j+1)*width)>0)
//			{
//				//����
//				Exc((char*)base + (j*width), (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//void test5()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_sort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{ 
//	test5();
//	return 0;
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16 �����ܴ�С4*4=16
//	printf("%d\n", sizeof(a+0));//4  ����������Ԫ�ص�ַ+0������Ԫ�ص�ַ 32λ��ַ��Ϊ4
//	printf("%d\n", sizeof(*a));//4 ��Ԫ��*���ǵ�һ��Ԫ�صĴ�С
//	printf("%d\n", sizeof(a+1));//4  ����������Ԫ�ص�ַ+1�ǵڶ�Ԫ�ص�ַ 32λ��ַ��Ϊ4
//	printf("%d\n", sizeof(a[1]));//4 ��������Ԫ�ش�СΪ4
//	printf("%d\n", sizeof(&a));//4  32λ��ַ��Ϊ4
//	printf("%d\n", sizeof(*&a));//16  &aΪ��������ĵ�ַ��*������������
//	printf("%d\n", sizeof(&a+1));//4 32λ��ַ��Ϊ4
//	printf("%d\n", sizeof(&a[0]));//4  32λ��ַ��Ϊ4
//	printf("%d\n", sizeof(&a[0]+1));//4 32λ��ַ��Ϊ4
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr+0));//���ֵ
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr+1));//���ֵ
//	printf("%d\n", strlen(&arr[0]+1));//err
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr+0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr+1));//4
//	//printf("%d\n", sizeof(&arr[0]+1));//4
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr+0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr+1));//4
//	printf("%d\n", sizeof(&arr[0]+1));//4
//	return 0;
//}
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(p+1));//4
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4
//	printf("%d\n", sizeof(&p+1));//4
//	printf("%d\n", sizeof(&p[0]+1));//4
//	return 0;
//}
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}


////��ά����
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48  ������ά�����С
//	printf("%d\n", sizeof(a[0][0]));//4 ��һ��Ԫ�ش�С
//	printf("%d\n", sizeof(a[0]));//16  a[0]�൱�ڵĵ�һ����Ϊһά�������������Ҳ�ǵ�һ����Ԫ�صĵ�ַ�������һ������Ĵ�С
//	printf("%d\n", sizeof(a[0]+1));//4  a[0]+1�ǵ�һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a+1));//4/8  a�Ƕ�ά�������������û��sizeof������������Ҳû��&����������
//	//����a�����һ������ĵ�ַ��a+1�ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a+1)));//16 �ڶ��еĴ�С
//	printf("%d\n", sizeof(&a[0]+1));//4 �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 �ڶ��д�С
//	printf("%d\n", sizeof(*a));//16 ��һ�д�С
//	printf("%d\n", sizeof(a[3]));//16 sizeof()�����Сʱ�����ʼ�����󣬽����ݼ����������ͼ����С
//	
//}

////ָ���� 1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);//(&a+1)�������ַ����Ҫʹ������ָ����գ���(int*)ǿ��ת�����Ϊ���ε�ַ
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}
////ָ���� 2
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����Сʱ20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n",p+0x1 );//0x00100014
//	printf("%p\n", (unsigned long)p+0x1);//0x00100001
//	printf("%p\n", (unsigned int*)p+0x1);//0x00100004
//	return 0;
//}
////ָ���� 3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 }; 
//	//�͵�ַ 01 00 00 00 |02 00 00 00|03 00 00 00|04 00 00 00 �ߵ�ַ <--С�˴洢
//	//   (int)a +1  ����1���ֽ� ���ԣ�int*������ʱ����ȡ��ǰ�ĸ��ֽ�Ϊ
//	//�͵�ַ 01�� 00 00 00 |02�� 00 00 00|03 00 00 00|04 00 00 00 �ߵ�ַ
//	//��ʮ�����ƴ�ӡ���Ϊ  02000000
//	int *ptr1 = (int*)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//0x00000004  0x0200000
//	              //ptr1[-1]==*(ptr1+(-1))==*(ptr-1)
//	return 0;
//}
////ָ���� 4
//int main()
//{
//	int a[3][2] = { ( 0, 1 ), ( 2, 3 ), (4, 5 ) };
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}
////ָ���� 5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//&p[4][2] - &a[4][2] �Ľ��Ϊ-4���Ե�ַ��ӡʱ��ԭ���������֣�ֱ�Ӵ�ӡ�ڴ��ڵ���
//	return 0;
//}
////ָ���� 6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (int*)(*(aa + 1));
//
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));   //10,5
//	//1 2 3 4 5
//
//   //6 7 8 9 10
//	return 0;
//}
////ָ���� 7
//int main()
//{
//	char *a[] = { "work", "at", "alibab" };
//	char**pa = a;
//	pa++;
//		printf("%s\n", *pa);
//	return 0;
//}
////ָ���� 8
//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n",**++cpp);//
//	printf("%s\n", *--*++cpp+3);//
//	printf("%s\n", *cpp[-2]+3);//��һ��cpp�ĵ�ַ��û�б仯
//	printf("%s\n", cpp[-1][-1]+1);//
                 //==*(cpp-1)[-1]+1
                 //== *��*(cpp-1)-1��+1
//	return 0;
//}