#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T t;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { "c", {3.14,30}, 666, 2.718, "hello word!" };
//	printf("%c %d %f %s\n",s.c,s.a,s.d,s.arr );
//	printf("%f\n", s.t.weight);
//	struct S* x = &s;
//	printf("%c %d %f %s\n",x->c,x->a,x->d,x->arr );
//	return 0;
//}
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//}; struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//
//	return 0;
//}
//#pragma pack(4)//设置默认对齐数
//struct s3 
//{
//	double d;
//	char c;
//	int i;
//};
//#pragma pack()//取消设置的默认对齐数
//struct s4 
//{
//	char c1;
//	struct s3 x;
//	double a;
//};
//int main()
//{
//	struct s4 s4;
//	printf("%d\n",sizeof(s4));
//	return 0;
//}
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s)); 
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	if (1 == *(char*)&a)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}



