#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//1.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
////����
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
//		printf("�Ҳ���\n");
//	}
//	else
//		printf("���������������±�Ϊ��%d\n", ret);
//	return 0;
//}
//�۰����
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
//		printf("�Ҳ���\n");
//	}
//	else
//		printf("���������������±�Ϊ��%d\n", ret);
//	return 0;
//}
//2.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ����

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
//����һ���ٷ��Ƴɼ�, ����ݰٷ��Ƴɼ�������Ӧ�ĵȼ���ת����ϵ���£�
//90�ּ�����Ϊ��A����80~89Ϊ��B���� 70~79Ϊ��C���� 60~69Ϊ��D����60������Ϊ��E����
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

//�̳��ļ�����������500Ԫ���£������ۣ�����500Ԫ���������ϣ�95�ۣ�
//����1000Ԫ���������ϣ�9�ۣ�����3000Ԫ���������ϣ�85�ۣ�����5000Ԫ���������ϣ�8�ۡ�
//�������ѽ�ȷ���û�ʵ����Ҫ֧������Ŀ��
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
//��֪��y��x�ĺ���,
//��x<-2ʱ��y = 7 - 2x��
//��x >= -2, ��x<3ʱ��y = 5 - | 3x + 2 | ��
//��x >= 3ʱ��y = 3x + 4
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
//����һ����ݺ��·ݣ�������ж�����
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
//		printf("�������");
//		break;
//	}
//	return 0;
//}
//����һ���򵥵�����������ʽ����������ʵ����һ������������̼�������	
//���ʽ�ĸ�ʽΪ��s1 op s2�� s1��s2������ʵ����op��ʾ���������(+, -, *, / )��Ҳ�����������ַ���
//ע��������������һ���ո����
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
//����3���������������ֵ�����Ǹ�����
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
//����һ������n��n�������������n�������ĺ͡�
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
//����һ������n���������1 + 1 / 3 + 1 / 5 + ����ǰn��ĺ͡�
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
//����һ������n��n�������������n�����������ֵ��
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
//��������������m��n�����m��n֮��ÿ����������Ȼ������
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
//����һ��������n(n<=20)�����1��n֮��׳˱�
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
//������������m��n�����m~n�������������������ż����ƽ�����Լ����������������͡�
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
//��1!+ 2!+ ����n!
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
// ����һ�����������������������ÿ�����ֺ���һ���ո� 
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
//���еĵ�һ��Ϊitem���Ժ����Ϊǰһ���ƽ�����������е�ǰn��ĺ͡�

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
//���Լ��
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
//����һ��������n���ж�n�Ƿ�����������n�������������Yes��,���������No���� ע�⣺1����������
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
//����n��a����a+aa+aaa+��aa��a(n��a)���統n=3,a=2ʱ��2+22+222�Ľ��Ϊ246
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
//����x������sin(x)��չ��ʽǰ10��͡�
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
