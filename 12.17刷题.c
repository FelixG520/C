#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int weight, height;
//	while (~scanf("%d %d", &weight, &height))
//	{
//		float BMI = weight / ((height / 100.0) * (height / 100.0));
//		if (BMI < 18.5)
//			printf("Underweight\n");
//		else if (BMI >= 18.5 && BMI <= 23.5)
//			printf("Normal\n");
//		else if (BMI > 23.9 && BMI <= 27.9)
//			printf("Overweight\n");
//		else if (BMI > 27.9)
//			printf("Obese\n");
//	}
//	return 0;
//
//}


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a, b, c;
//	while (~scanf("%lf %lf %lf", &a, &b, &c))
//	{
//		if (a != 0.0)
//		{
//			double dalta = b * b - 4.0 * a * c;
//			if (dalta > 0)
//			{
//				double jie1 = (-b - sqrt(dalta)) / (2.0 * a);
//				double jie2 = (-b + sqrt(dalta)) / (2.0 * a);
//				printf("x1=%.2lf;x2=%.2lf\n",jie1,jie2);
//			}
//			else if (dalta < 0)
//			{
//				double shibu = (-b) / (2.0 * a);
//				double xubu = (sqrt(-dalta)) / (2.0 * a);
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", shibu, xubu, shibu, xubu);
//			}
//			else
//			{
//				double jie = (-b) / (2.0 * a);
//				if (jie == 0.0)
//					printf("x1=x2=0.00");
//				else
//					printf("x1=x2=%.2lf\n", jie);
//			}
//		}
//		else
//			printf("Not quadratic equation\n");
//	}
//	return 0;
//}


//int main()
//{
//	int y, m;
//	while (~scanf("%d %d", &y, &m))
//	{
//		if (m == 2)
//		{
//			int a;
//			if (y % 400 == 0)
//				a = 1;
//			else
//			{
//				if (y % 4 == 0 && y % 100 != 0)
//					a = 1;
//				else
//					a = 0;
//			}
//			if (a == 1)//闰年
//				printf("%d\n", 29);
//			else//平年
//				printf("%d\n", 28);
//		}
//		else
//		{
//			int month1[] = { 1,3,5,7,8,10,12 };
//			int month2[] = { 4,6,9,11 };
//			int lenth1 = sizeof(month1) / sizeof(month1[1]);
//			int lenth2 = sizeof(month2) / sizeof(month1[2]);
//			for (int i = 0; i < lenth1; i++)
//			{
//				if (m == month1[i])
//					printf("%d\n", 31);
//			}
//			for (int j = 0; j < lenth2; j++)
//			{
//				if (m == month2[j])
//					printf("%d\n", 30);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int y, m;
//	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//	while (~scanf("%d %d", &y, &m))
//	{
//		int day = days[m - 1];
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			if (m == 2)
//				day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}

//int main()
//{
//	double n1, n2;
//	char op;
//	while (~scanf("%lf %c %lf", &n1, &op, &n2))
//	{
//		switch(op)
//		{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf\n", n1, n2, n1 + n2);
//			break;
//		case '-':
//			printf("%.4lf-%.4lf=%.4lf\n", n1, n2, n1 - n2);
//			break;
//		case '*':
//			printf("%.4lf*%.4lf=%.4lf\n", n1, n2, n1 * n2);
//			break;
//		case '/':
//			if (n2 == 0)
//				printf("Wrong!Division by zero!");
//			else
//				printf("%.4lf/%.4lf=%.4lf\n", n1, n2, n1 / n2);
//			break;
//		default:
//			printf("Invalid operation!");
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
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//
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
//				printf("* ");
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
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
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
//			//打印空格
//			for (int j = 0; j < n-i-1; j++)
//			{
//				printf("  ");
//			}
//			//打印*
//			for (int j = 0; j <= i; j++)
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
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)//行+列<对角线
//					printf("  ");
//				else
//					printf("* ");
//				
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
//            for (int j = 0; j < i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//	//输入
//	int n;
//	//输出
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			int j = 0;
//			//打印空格
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//打印*
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


