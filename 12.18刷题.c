#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i; j++)
//				printf(" ");
//			for (int j = 0; j < n - i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i <= n; i++)//ѭ������
//		{
//			//��������
//			for (int j = 0; j < n-i; j++)
//				printf(" ");
//			for (int j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			//��������
//			for (int j = 0; j <= i; j++)
//				printf(" ");
//			for (int j = 0; j < n - i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i <= n; i++)
//		{
//			for (int j = 0; j <= n - i; j++)
//				printf("* ");
//			printf(" \n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i+1 ; j++)
//				printf("* ");
//			printf(" \n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		//�ϰ벿�֣��������ո񿴳�һ���ַ��ܹؼ�
//		for (int i = 0; i <= n; i++)
//		{
//			for (int j = 0; j < n - i; j++)
//				printf("  ");
//			for (int j = 0; j <= i; j++)
//				printf("*");
//			printf("\n");
//		}
//		//�°벿��
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i; j++)
//				printf("  ");
//			for (int j = 0; j < n - i; j++)
//				printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i; j++)
//				printf(" ");
//			printf("*\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//            for (int j = 0; j <= n; j++)
//            {
//                if(j==i)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n-i-1; j++)
//				printf(" ");
//			printf("*\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (j +i == n-1)//���Խ���
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main() 
//{
//    int n;
//    while (~scanf("%d", &n)) 
//    {
//        for (int i = 0; i < n; i++) 
//        {
//            for (int j = 0; j < n; j++) 
//            {
//                if (i == j)
//                    printf("*");
//                else if (j == n - i - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j<n;j++)
//			{
//				if (i > 0 && j > 0 && i + j >= 2 && i < n - 1 && j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//					printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1)
//				{
//					printf("* ");
//				}
//				else if (j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == j)//������б��
//					printf("* ");
//				else if (j == 0 && j != i)//������ֱ�Ǳ�
//					printf("* ");
//				else if (i == n - 1)//�����εױ�
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i ==n-1 || j==0 ||i==j)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i;j++)
//			{
//				printf("%d ", j+1);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}







