#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
//��ӡ100��200֮�������
//�Գ���
//int main(){
//	int i = 100;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++){
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d  ", i);
//	}
//	return 0;
//}
//�Ż�:>sqrt-��ƽ������ѧ�⺯��
//int main(){
//	int i = 100;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++){
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d  ", i);
//	}
//	return 0;
//}
//�ú����ж�һ�����Ƿ�Ϊ����
//int sushu(int x)
//{
//	int y = 0;
//	for (y = 2; y <=sqrt(x); y++)
//	{
//		if (x%y == 0)
//		   return 0;
//	
//	}
//		return 1;	
//}
//int main(){
//	int i = 0;
//	scanf("%d", &i);
//	if (sushu(i) == 1)
//		printf("%d������\n", i);
//	else
//		printf("%d��������\n", i);
//	return 0;
//}
//��ӡ�˷��ھ���
//int main(){
//	int i = 1;
//	while (i <= 9){
//		int j = 1;
//	    while(j <=9){
//			int a = i*j;
//			printf("%d��%d=%d  ", i, j, a);
//			j++;
//			}
//		i++;
//		printf("\n");
//	}
//	return 0;
//}
//�Ż�
//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d��%d=%-2d", i, j, i*j);//2d��ʾ��ӡʱ��ӡ��λ��λ������ʱ�ո���     %2d�Ҷ���   %-2d�����
//			//printf("%d��%d=%d\t", i, j, i*j);//������Ч����ͬ
//		}
//		printf("\n");
//	}
//	return 0;
//}
//�ж�1000��2000�������
//int main(){
//	int year = 1000;
//	while (year <= 2000){
//		if ((year % 4) == 0){
//			if ((year % 100) != 0)
//			{
//			
//			printf("%d\n", year);}
//			if (year % 400 == 0)
//				printf("%d\n", year);
//
//		}
//		year++;
//	}
//	return 0;
//}
//������
//int main(){
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y < 2001; y++){
//		if (y % 4 == 0 && y % 100!= 0)
//		{
//			printf("%d  ", y);
//			count++;
//		}
//		else if (y % 400 == 0)
//		{
//			printf("%d  ", y);
//			count++;
//		}
//	}
//	printf("����%d������", count);
//	return 0;
//}
//������
//int main(){
//		int y = 0;
//		int count = 0;
//		for (y = 1000; y < 2001; y++){
//			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//                          &&����           || ����
//			{
//				printf("%d  ", y);
//				count++;
//			}
//		}
//		printf("����%d������", count);
//		return 0;
//	}
//����n�Ľ׳�
//int main(){
//	int i = 0;
//	int j = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++){
//		j = i*j;
//	}
//	printf("%d", j);
//	return 0;
//
//}
//����1��+2��+3��+......+10��
//int main(){
//	int i = 0;
//	int n = 1;
//	int ret = 0;
//	for (n = 1; n < 11; n++){
//		int j = 1;
//	for (i = 1; i <= n; i++){
//		j = i*j;
//	}
//	ret =ret+j;
//	
//	}
//	printf("%d", ret);
//	return 0;
//
//}
//int main(){
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n < 11; n++){
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//���ֲ���
//int main(){
//	int a = 17;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(0);
//	int right = (sz - 1);
//	int left = 0;
	
	//while (left<=right)
	//{
	//int	mid = (right + left) / 2;
	//	if (arr[mid] > a)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < a)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
	//		break;
	//	}
	//}
//	if (left>right)
//		printf("�Ҳ�����\n");
//	return 0;
//}
//д�ĸ�ʺһ��
//int binary_search( int arr[],int k,int sz){
//	int left = 0;
//	int right =sz-1;
//	while ( left<=right)
//	{
//      int mid = (right + left)/2;
//		int tmp =0 ;
//		if (arr[mid] <k)
//		{
//			mid++;
//			tmp = mid;
//			mid = (mid + right) / 2;
//			left = tmp;
//		}
//		else if (arr[mid]>k)
//		{
//			mid--;
//			tmp = mid;
//			mid = (mid + left) / 2;
//			right = tmp;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main(){
//	int k = 12;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if ( ret==-1)
//		printf("û�ҵ���\n");
//	else
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	return 0;
//}
//�Ż���
//int binary_search(int arr[], int k,int sz){
//	int left = 0;	
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] <k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main(){
//	int k = 7;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);//��������ʱ������������Ԫ�صĵ�ַ
//	if (ret == -1)
//		printf("û�ҵ���\n");
//	else
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	return 0;
//}

//int main(){
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] =  "###################"; 
//	int right = strlen(arr1) - 1;
//	//int right =sizeof(arr1) / sizeof(arr1[0])- 2;
//	int left = 0;
//	while (left <= right){
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	Sleep(1000);
//	system("cls");//ִ��ϵͳ�����һ������
//	left++;
//	right--;
//	
//	}
//
//	return 0;
//}
//int main(){
//	int i = 0;
//	char password[] = { 0 };
//	
//	for (i = 1; i < 4; i++){
//		printf("���������룺");
//		scanf("%s", &password);
//	if (strcmp(password,"123456")==0)//==���������Ƚ��ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//	{
//		printf("��¼�ɹ���");
//		break;
//		}
//		else {
//		printf("�������");
//		Sleep(1000);
//		system("cls");
//		}
//		
//	}
//	if (i==4)
//	printf("��������������˳�����\n");
//	return 0;
//}
//�������Ӵ�С����
//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a=b ;
//		b = tmp;
//	}
//	if (a < c){
//		 tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		 tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);







	/*int arr1[] = {4,1,7 };
	int arr2[] = { 0 };
	int tmp = 0;
	int left = 0;
	int right = sizeof(arr1) / sizeof(0) - 1;//err
	for (left = 0; left<=5; left++){
		if (arr1[left] <= arr1[left + 1])
		{
			tmp= arr1[left];
			arr1[left] = arr1[left + 1];
			arr1[left + 1] = tmp;
		}
		

	}
	int i = 0;
		while (i <=2){
			printf("%d ", arr1[i]);
			i++;
		}*/
//	return 0;
//}
//1-100�����ı���
//int main(){
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//	if ((i % 3) == 0){
//		printf("%d\n", i);
//	}
//	}
//	return 0;
//}
//�������������Լ��
//int main(){
//	int a = 0;
//	int b = 0;
//	int  r= 0;
//	scanf("%d %d", &a, &b);
//	while (r = a%b)//a%b=0ʱ����Ϊ��0��Ϊ���Զ�����ѭ��
//	{
//		a = b;
//		b = r;
//	}
//		printf("���Լ��Ϊ%d\n", r);
//	
//	return 0;
//}
//1-100�����������г����˶��ٸ�����9
//int main(){
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d  ", i);
//			count++;}
//	 if (i/ 10 ==9){
//			printf("%d  ", i);
//			count++;
//		}
//		
//	}
//	printf("\n9�ĸ���Ϊ:%d\n", count);
//	return 0;
//}
//����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ����ӡ�����
//int main(){
//	int i = 0;
//	double sum = 0;
//	int x = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + x*1.0 / i;
//		x = -x;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}
//��10�����������ֵ
//int main(){
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int max = arr[0];//����ʼֵΪ0����������ȫΪ����ʱ����ִ���
//	int sz = sizeof(arr) / sizeof(0);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵ�ǣ�%d\n", max);
//	return 0;
//}
//����ִ�м���
//void Add(int* p)
//{
//	(*p)++;
//}
//int main(){
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//int main(){
//	printf("%d", printf("%d", printf("%d", 43)));//printf�ķ���ֵ������ӡ���ַ���
//	return 0;
//}
