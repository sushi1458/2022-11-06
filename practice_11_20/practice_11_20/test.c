#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//1.һ�������������м���1
//%2��/2
//int count_one(unsigned a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a= 0;
//	scanf("%d", &a);
//	int count = count_one(a);
//	printf("%d\n", count);
//
//	return 0;
//}
//ÿһλ&1
//int count_one(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 31; i++)
//			{
//				if (((a >> i) & 1) == 1)
//					count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_one(a);
//	printf("%d\n", count);
//	return 0;
//}
//����㷨
//int count_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//		scanf("%d", &a);
//		int count = count_one(a);
//		printf("%d\n", count);
//	return 0;
//}

//2.����int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ��bit����ͬ��
//^��ͬΪ0����ͬΪ1

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int a = m^n;
//	int i = 0;
//	int c = 0;
//	int count = 0;
//	for (i = 0; i <= 31; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	if (m*n < 0)
//	{
//		count = 32 - count;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//-5   10000000000000000000000000000101
//     11111111111111111111111111111011
//3    00000000000000000000000000001011
//     00000000000000000000000000001010
//     00000000000000000000000000001000 
//-5^3 11111111111111111111111111111000
//��ӡ�����Ƶ�����λ��ż��λ
//void get_JO(int a)
//{
//	int i = 0;
//	printf("��λ����\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("żλ����\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	get_JO(a);
//	return 0;
//}
//��ָ���ӡ��������
//void print(int* p ,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ",*(p +i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//�ݹ鷽ʽ��ӡһ��������ÿһλ
//void print(int a)
//{
//	
//	if (a>9){
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//
//}
//�ݹ�ͷǵݹ�ʵ����n�Ľ׳ˣ������������
//�ǵݹ�
//int J(int n)
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j = j*i;
//	}
//	return j;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a=J(n);
//	printf("%d�Ľ׳�=%d\n", n, a);
//	return 0;
//}
//�ݹ�
//int Fac(int n)
//{
//	
//	if (n > 1)
//		return n*Fac(n - 1);
//	else
//		return 1;
//
//}
//int main()
//{
//		int n = 0;
//		scanf("%d", &n);
//		int a=Fac(n);
//		printf("%d�Ľ׳�=%d\n", n, a);	
//		return 0;
//}
//strlen�ݹ���ǵݹ�ģ��ʵ��
//�ǵݹ�
//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count=0;
//	while (arr[i] != '\0'){
//			count++;
//			i++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello word!";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//�ݹ�ʵ��
//int my_strlen(char* p)
//{
//	if (*p!= '\0')
//		return 1 + my_strlen(p+ 1);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello word!";
//		int len = my_strlen(arr);
//		printf("%d\n", len);
//	return 0;
//}

//�ַ������򣨵ݹ�ʵ�֣�

int my_strlen(char arr[])
{
	int i = 0;
	int count=0;
	while (arr[i] != '\0'){
			count++;
			i++;
	}
	return count;
}
//void rever_string(char arr[])
//{
//	char tmp = 0;
//	tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		rever_string(arr+1);
//	}
//	arr[len - 1] = tmp;
//}
//void reverse_string(char* arr)
//{
//	char temp = *arr;//��Ԫ�ش�ź� 
//	int len = strlen(arr);
//	*arr = *(arr + len - 1);//���һ��Ԫ�ص���λ 
//	*(arr + len - 1) = '\0';//���һ��Ԫ�ص���\0,�����´α������ҷ�Χ 
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);//�����´α�������Χ 
//	}
//
//	*(arr + len - 1) = temp;//�ѵ�ǰ�����Ԫ��,Ҳ����\0,�滻����Ԫ�� 
//}

int main()
{
	char arr[] = "hello word��";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
//дһ���ݹ麯��DigitSum��n������һ���Ǹ����������������������֮��
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//	return n;
//}
// int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	int b=DigitSum(a);
//	printf("%d\n", b);
//	return 0;
//}

//�ݹ�ʵ��n��k�η�
//double Pow(int n,int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / Pow(n, -k));
//	}
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	double ret = Pow(n,k);
//	printf("%d��%d�η�=%lf\n",n,k, ret);
//	return 0;
//}