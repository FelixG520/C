#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
////方法一：在2到n - 1之间任取一个数, 如果n能被整除则不是素数，否则就是素数
//int main()
//{
//	int n, i;
//	printf("请输入一个数字: ");
//	scanf("%d", &n);
// 
// 
// 
// 
// 
// 
//	for (i = 2; i <= n / 2; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d不是素数!\n",n);
//			break;
//		}
//	}
//	if (i == n / 2 + 1)
//	{
//		printf("%d是素数!\n", n);
//	}
//	return 0;
//}
//
////方法二：在2到n / 2之间任取一个数, 如果n能被整除则不是素数，否则就是素数
//#include <stdio.h>
//int main()
//{
//	int i, n;
//	printf("请输入一个数字: ");
//	scanf("%d", &n);
//	for (i = 2; i <= n - 1; i++)
//	{
//		if (n % i == 0) {
//			break;
//		}
//	}
//	if (i >= n)
//	{
//		printf("%d是素数!\n", n);
//	}
//	else
//	{
//		printf("%d不是素数!\n", n);
//	}
//	return 0;
//}
//
////方法三：在2到sqrt(n)之间任取一个数,如果n能被整除则不是素数，否则就是素数 
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int i, j, n;
//	printf("请输入一个数字: ");
//	scanf("%d", &n);
//	j = (int)sqrt(n);
//	for (i = 2; i <= j; i++)
//	{
//		if (n % i == 0)
//		{
//			break;
//		}
//	}
//	if (j < i)
//	{
//		printf("%d是素数!\n", n);
//	}
//	else
//	{
//		printf("%d不是素数!\n", n);
//	}
//	return 0;
//}

//int main()
//{
//	int i, num;
//	printf("请输入一个数：");
//	scanf("%d",&num);
//	for (i = 2; i <= num - 1; i++)
//	{
//		if (num % i == 0)
//			break;
//	}
//	if (i>=num)
//	{
//		printf("%d是素数", num);
//	}
//	else
//	{
//		printf("%d不是素数。", num);
//	}
//	return 0;
//}