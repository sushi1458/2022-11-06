#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
//打印100到200之间的素数
//试除法
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
//优化:>sqrt-开平方的数学库函数
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
//用函数判断一个数是否为素数
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
//		printf("%d是素数\n", i);
//	else
//		printf("%d不是素数\n", i);
//	return 0;
//}
//打印乘法口诀表
//int main(){
//	int i = 1;
//	while (i <= 9){
//		int j = 1;
//	    while(j <=9){
//			int a = i*j;
//			printf("%d×%d=%d  ", i, j, a);
//			j++;
//			}
//		i++;
//		printf("\n");
//	}
//	return 0;
//}
//优化
//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d×%d=%-2d", i, j, i*j);//2d表示打印时打印两位，位数不够时空格补齐     %2d右对齐   %-2d左对齐
//			//printf("%d×%d=%d\t", i, j, i*j);//与上面效果相同
//		}
//		printf("\n");
//	}
//	return 0;
//}
//判断1000到2000年的闰年
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
//方法二
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
//	printf("共有%d个闰年", count);
//	return 0;
//}
//方法三
//int main(){
//		int y = 0;
//		int count = 0;
//		for (y = 1000; y < 2001; y++){
//			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//                          &&并且           || 或者
//			{
//				printf("%d  ", y);
//				count++;
//			}
//		}
//		printf("共有%d个闰年", count);
//		return 0;
//	}
//计算n的阶乘
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
//计算1！+2！+3！+......+10！
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
//二分查找
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
	//		printf("找到了，下标是：%d\n", mid);
	//		break;
	//	}
	//}
//	if (left>right)
//		printf("找不到了\n");
//	return 0;
//}
//写的跟屎一样
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
//		printf("没找到！\n");
//	else
//		printf("找到了！下标是%d\n", ret);
//	return 0;
//}
//优化后
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
//	int ret = binary_search(arr, k,sz);//传递数组时，仅传递了首元素的地址
//	if (ret == -1)
//		printf("没找到！\n");
//	else
//		printf("找到了！下标是%d\n", ret);
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
//	system("cls");//执行系统命令的一个函数
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
//		printf("请输入密码：");
//		scanf("%s", &password);
//	if (strcmp(password,"123456")==0)//==不能用来比较字符串是否相等，应该使用一个库函数-strcmp
//	{
//		printf("登录成功！");
//		break;
//		}
//		else {
//		printf("密码错误");
//		Sleep(1000);
//		system("cls");
//		}
//		
//	}
//	if (i==4)
//	printf("三次密码均错误，退出程序\n");
//	return 0;
//}
//三个数从大到小排列
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
//1-100中三的倍数
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
//求两个数的最大公约数
//int main(){
//	int a = 0;
//	int b = 0;
//	int  r= 0;
//	scanf("%d %d", &a, &b);
//	while (r = a%b)//a%b=0时，因为‘0’为假自动跳出循环
//	{
//		a = b;
//		b = r;
//	}
//		printf("最大公约数为%d\n", r);
//	
//	return 0;
//}
//1-100的所有整数中出现了多少个数字9
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
//	printf("\n9的个数为:%d\n", count);
//	return 0;
//}
//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果
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
//求10个整数的最大值
//int main(){
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int max = arr[0];//若初始值为0，则数组中全为负数时会出现错误
//	int sz = sizeof(arr) / sizeof(0);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值是：%d\n", max);
//	return 0;
//}
//函数执行计数
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
//	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是所打印的字符数
//	return 0;
//}
