#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//1.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
////遍历
//int Find(int arr[], int n, int len)
//{
//	int i = 0;
//
//	for (i = 0; i <len; i++)
//	{
//		if (n == arr[i])
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = Find(arr, n, len);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//		printf("该数字在数组中下标为：%d\n", ret);
//	return 0;
//}
//折半查找
//int Find(int arr[], int n,int len)
//{
//	int left = 0;
//	int right = len-1;
//	while (left <=right)
//	{
//		int mid = (right + left) / 2;
//		if (n == arr[mid])
//		{
//			return mid;
//		}
//		 if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		 if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//	}
//
//	return -1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = Find(arr, n,len);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//		printf("该数字在数组中下标为：%d\n", ret);
//	return 0;
//}
//2.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出

//int  main()
//{
//	char n;
//	while (1)
//	{
//		scanf("%c", &n);
//		if (n >= 65 && n <= 90)
//		{
//			printf("%c", n + 32);
//		}
//		if (n >= 97 && n <= 122)
//		{
//			printf("%c\n", n - 32);
//		}
//		if (n >= 48 && n <= 57)
//		{
//			printf("\n");
//		}
//
//	}
//	return 0;
//}
//给定一个百分制成绩, 请根据百分制成绩输出其对应的等级。转换关系如下：
//90分及以上为’A’，80~89为’B’， 70~79为’C’， 60~69为’D’，60分以下为’E’。
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 90)
//	{
//		printf("A");
//	}
//	else if (n >=80 )
//	{
//		printf("B");
//	}
//	else if (n >= 70)
//	{
//		printf("C");
//	}
//	else if (n >= 60)
//	{
//		printf("D");
//	}
//	else if (n >= 0)
//	{
//		printf("E");
//	}
//	
//	return 0;
//}

//商场夏季促销，购物500元以下，不打折；购物500元（含）以上，95折；
//购物1000元（含）以上，9折；购物3000元（含）以上，85折；购物5000元（含）以上，8折。
//根据消费金额，确定用户实际需要支付的数目。
//int main()
//{
//	double n;
//	scanf("%lf", &n);
//	if (n >= 5000)
//	{
//		n = n*0.8;
//		printf("%0.2f", n);
//	}
//	else if (n >= 3000)
//	{
//		n = n*0.85;
//		printf("%0.2f", n);
//	}
//	else if (n >= 1000)
//	{
//		n = n*0.9;
//		printf("%0.2f", n);
//	}
//	else if (n >= 500)
//	{
//		n = n*0.95;
//		printf("%0.2f", n);
//	}
//   else if (n <500)
//	{
//		printf("%0.2f",n);
//	}
//	return 0;
//}
//已知：y是x的函数,
//当x<-2时，y = 7 - 2x；
//当x >= -2, 且x<3时，y = 5 - | 3x + 2 | ；
//当x >= 3时，y = 3x + 4
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x < -2)
//	{
//		y = 7 - 2 * x;
//	}
//	else if (x >= -2&&x<3)
//	{
//		if ((3 * x + 2)>0)
//		{
//			y = 5 - 3 * x - 2;
//		}
//		else 
//		{
//			y = 5 + 3 * x + 2;
//		}
//	}
//	else if (x >= 3)
//	{
//		y = 3 * x + 4;
//	}
//	printf("%d", y);
//	return 0;
//}
//给你一个年份和月份，求该月有多少天
//int leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))		                    
//	{
//		return 1;
//						
//    }
//	return 0;
//}
//int main()
//{
//	int year, month;
//	scanf("%d%d", &year, &month);
//	
//	switch (month)
//	{
//	case 1:
//		printf("31");
//		break;
//	case 2:
//		if (leap_year(year)==1)
//		    printf("29");
//		else
//			printf("28");
//		break;
//	case 3:
//		printf("31");
//		break;
//	case 4:
//		printf("30");
//		break;
//	case 5:
//		printf("31");
//		break;
//	case 6:
//		printf("30");
//		break;
//	case 7:
//		printf("31");
//		break;
//	case 8:
//		printf("31");
//		break;
//	case 9:
//		printf("30");
//		break;
//	case 10:
//		printf("31");
//		break;
//	case 11:
//		printf("30");
//		break;
//	case 12:
//		printf("31");
//		break;
//	default:
//		printf("输入错误！");
//		break;
//	}
//	return 0;
//}
//给你一个简单的四则运算表达式，包含两个实数和一个运算符，请编程计算出结果	
//表达式的格式为：s1 op s2， s1和s2是两个实数，op表示的是运算符(+, -, *, / )，也可能是其他字符。
//注意运算符两侧各有一个空格。输出
//int main()
//{
//	double s1, s2;
//	char op;
//	scanf("%lf %c%lf", &s1, &op, &s2);
//	switch (op)
//	{
//	case '+':
//		printf("%0.2f",s1+s2);
//		break;
//	case '-':
//		printf("%0.2f",s1-s2);
//		break;
//	case '*':
//		printf("%0.2f",s1*s2);
//		break;
//	case '/':
//		if (fabs(s2) < 1e-10)
//		{
//			printf("Wrong input!");
//		}
//		else
//		printf("%0.2f",s1/s2);
//		break;
//	default:
//		printf("Wrong input!");
//		break;
//	}
//	return 0;
//}
//输入3个整数，输出绝对值最大的那个数。
//int Abs(int x)
//{
//	if (x < 0)
//	{
//		return -x;
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	int a, b, c;
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	A=Abs(a); 
//	B=Abs(b);
//	C=Abs(c);
//	if (A >= B&&A >= C)
//	{
//		printf("%d",a );
//	}
//	else if (B >= A&&B >= C)
//	{
//		printf("%d",b );
//	}
//	else if (C >= A&&C>=B)
//	{
//		printf("%d", c);
//	}
//	return 0;
//}
//输入一个整数n和n个整数，输出这n个整数的和。
//int main(){
//	int n;
//	scanf("%d\n",&n);
//	int i;
//	int x = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d",&x );
//		sum += x;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//输入一个整数n，输出数列1 + 1 / 3 + 1 / 5 + ……前n项的和。
//int main(){
//		int i ,n;
//		scanf("%d", &n);
//		double sum = 0;
//		int x = 1; 
//		int j = 1;
//		for (i = 1; i <= n; i++)
//		{
//			sum = sum + x*1.0 / j;
//			j += 2;
//			if (x > 0)
//			{
//				x++;
//			}
//			else
//			{
//				x--;
//			}
//			x = -x;
//		}
//		printf("%0.3f\n",sum);
//		return 0;
//	}
//输入一个整数n和n个整数，输出这n个整数的最大值。
 /*  int main(){
		int n;
		scanf("%d\n",&n);
		int i;
		int x = 0;
		int max = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%d",&x );
			if (i == 0)
			{
				max = x;
			}
			if (x > max)
			{
				max = x;
			}
		}
		printf("%d", max);
	
		return 0;
	}*/
//输入两个正整数m和n，输出m到n之间每个整数的自然对数。
/*int main(){
	int n,m;
	scanf("%d%d",&m,&n);
	int i = 0;
	for (i = m; i <=n; i++)
	{
		printf("%4d%8.4f\n", i, log(i));
	}
	return 0;
}*/	
//输入一个正整数n(n<=20)，输出1到n之间阶乘表。
//double fac(int n)
//{
//	double j = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		j = i*j;
//	}
//	return j;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%-4d%-20.0f\n", i, fac(i));
//	}
//	return 0;
//}
//给定两个整数m和n，求出m~n这段连续的整数中所有偶数的平方和以及所有奇数的立方和。
//int main(){
//	int m,n;
//	scanf("%d%d",&m,&n);
//	int i = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (i = m; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum1 =sum1+ i*i;
//		}
//		else if (i % 2 != 0)
//		{
//			sum2 = sum2+i*i*i;
//		}
//	}
//	printf("%d %d\n", sum1, sum2);
//	return 0;
//}
//求1!+ 2!+ ……n!
 //int main(){
	//	int i = 0;
	//	int n = 1;
	//	int ret = 0;
	//	int m = 0;
	//	scanf("%d", &m);
	//	for (n = 1; n <= m; n++)
	//	{
	//		int j = 1;
	//	for (i = 1; i <= n; i++)
	//	{
	//		j = i*j;
	//	}
	//	ret =ret+j;
	//	
	//	}
	//	printf("%d", ret);
	//	return 0;
	//
	//}
// 输入一个正整数，将其逆序输出，每个数字后有一个空格。 
//int Back(int n)
//{	
//	int tmp = 1;
//	while (n)
//	{
//		tmp*=10;
//	n/=10;
//	
//	}
//	return tmp/10;
//}
//int main()
//{
//	int n = 0;
//	int h = 0;
//	scanf("%d", &n);
//	h=Back(n);
//	while (h)
//	{
//	printf("%d ", n/h);
//	n = n % h;
//	h /= 10;
//	}
//	return 0;
//}
//数列的第一项为item，以后各项为前一项的平方根，求数列的前n项的和。

//int main()
//{
//	double item = 0;
//	int n = 0;
//	double sum = 0;
//	scanf("%lf%d", &item, &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + item;
//		item = sqrt(item);
//	}
//	printf("%0.2f", sum);
//	return 0;
//}
//最大公约数
//int main(){
//	int a = 0;
//	int b = 0;
//	int  r= 0;
//	scanf("%d%d", &a, &b);
//	while (r= a%b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	
//	return 0;
//}
//输入一个正整数n，判断n是否是素数，若n是素数，输出”Yes”,否则输出”No”。 注意：1不是素数。
 /*int sushu(int x)
{
	int y = 0;
	for (y = 2; y <=sqrt(x); y++)
	{
		if (x%y == 0)
		   return 0;
	
	}
		return 1;	
}
int main(){
	int n = 0;
	scanf("%d", &n);
	if (sushu(n) == 1&&n!=1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}*/
//输入n和a，求a+aa+aaa+…aa…a(n个a)，如当n=3,a=2时，2+22+222的结果为246
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	int n = 0;
//	int sum = 0;
//	int a = 0;
//	scanf("%d%d",&n,&a);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum = sum + tmp;
//	}
//	printf("%d", sum);
//	return 0;
//}
//输入x，计算sin(x)的展开式前10项和。
double J(int n){
	int i = 0;
	double j = 1;
	for (i = 1; i <= n; i++){
		j = i*j;
	}
	return j;

}
int main()
{
	double x;
	scanf("%lf", &x);
	int i = 0;
	double a = x;
	int b = 1;
	double sum = 0;
	for (i = 0; i < 10; i++)
	{
		
		sum=sum+ x / J(b);
		x = x*(a*(-a));
		
		b += 2;
	}
	printf("%0.3f", sum);
	return 0;
}
