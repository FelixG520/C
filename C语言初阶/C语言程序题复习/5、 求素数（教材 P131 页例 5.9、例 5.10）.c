#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
////����һ����2��n - 1֮����ȡһ����, ���n�ܱ��������������������������
//int main()
//{
//	int n, i;
//	printf("������һ������: ");
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
//			printf("%d��������!\n",n);
//			break;
//		}
//	}
//	if (i == n / 2 + 1)
//	{
//		printf("%d������!\n", n);
//	}
//	return 0;
//}
//
////����������2��n / 2֮����ȡһ����, ���n�ܱ��������������������������
//#include <stdio.h>
//int main()
//{
//	int i, n;
//	printf("������һ������: ");
//	scanf("%d", &n);
//	for (i = 2; i <= n - 1; i++)
//	{
//		if (n % i == 0) {
//			break;
//		}
//	}
//	if (i >= n)
//	{
//		printf("%d������!\n", n);
//	}
//	else
//	{
//		printf("%d��������!\n", n);
//	}
//	return 0;
//}
//
////����������2��sqrt(n)֮����ȡһ����,���n�ܱ�������������������������� 
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int i, j, n;
//	printf("������һ������: ");
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
//		printf("%d������!\n", n);
//	}
//	else
//	{
//		printf("%d��������!\n", n);
//	}
//	return 0;
//}

//int main()
//{
//	int i, num;
//	printf("������һ������");
//	scanf("%d",&num);
//	for (i = 2; i <= num - 1; i++)
//	{
//		if (num % i == 0)
//			break;
//	}
//	if (i>=num)
//	{
//		printf("%d������", num);
//	}
//	else
//	{
//		printf("%d����������", num);
//	}
//	return 0;
//}