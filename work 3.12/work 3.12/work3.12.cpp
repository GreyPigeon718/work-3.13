#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum = 0;
	int n ;
	int i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += i;
		i = -i;
	}
	printf("%d", sum);
	return 0;
}
//int main()
//{
//	int g = 10;
//	double a = 0.0;
//	a = (1.0/ 2) * g *9;
//	printf("height = %.2f", a);
//	return 0;
//}
//int main()
//{
//	int a = 150;
//	int b = 0;
//	b = 5 * (a - 32) / 9;
//	printf("fahr = 150, celsius = %d", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("* * * *\n");
//	printf(" * * *\n");
//	printf("  * *\n");
//	printf("   *\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	int mid = 0;
//	scanf("%d %d %d", &i, &j, &k);
//	if (i < j)
//	{
//		mid = i;
//		i = j;
//		j = mid;
//	}
//	if (i < k)
//	{
//		mid = i;
//		i = k;
//		k = mid;
//	}
//	if (j < k)
//	{
//		mid = j;
//		j = k;
//		k = mid;
//	}
//	printf("%d>%d>%d", i, j, k);
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float x;
//	float y = 0;
//	double e;
//	unsigned int n = 65535;
//	e = 1 + 1.0 / n;
//	e = pow(e, n);
//	scanf("%f", &x);
//	if (x >= 0 && x < 10)
//	{
//		y = sin(x);
//		printf("y = %.2f", y);
//	}
//	else if (x >= 10 && x < 20)
//	{
//		y = cos(x);
//		printf("y = %.2f", y);
//	}
//	else if (x >= 20 && x < 30)
//	{
//		y = pow(e, x) - 1;
//		printf("y = %.2f", y);
//	}
//	else if (x >= 30 && x < 40)
//	{
//		y = log(x + 1);
//		printf("y = %.2f", y);
//	}
//	else 
//	{
//		printf("no definition");
//	}
//}
//#include<stdio.h>
//int mian()
//{
//	int x;
//	scanf("%d", &x);
//	if (x > 90 && x <= 100)
//	else if(x<90)
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	c = a + b;
//	printf("%d", c);
//	return 0;
//}