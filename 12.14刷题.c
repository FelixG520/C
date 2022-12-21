#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a, b,tmp;
//	scanf("a=%d,b=%d", &a, &b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//
//}

//int main()
//{
//	int ch = getchar();
//	printf("%d",ch);
//	return 0;
//}

//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 40, c = 212;
//	int b = (-8 + 22)*a - 10 + c/2;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a / b, a % b);//整除和取余
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	double BMI = a / ((b/100.0) * (b / 100.0));//b/100是整除，要想转换成小数，应该写成100.0
//	printf("%.2lf\n", BMI);
//	return 0;
//}

#include <math.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	float circumference = a + b + c;
//	float p = (a + b + c) / 2.0;
//	float area = sqrt(p*(p-a)*(p-b)*(p-c));
//	printf("circumference=%.2f area=%.2f\n", circumference, area);
//	return 0;
//}

//#define pi 3.1415926
//int main()
//{
//	float r;
//	scanf("%f", &r);
//	double V = (4 / 3.0) * pi * r*r*r;
//	printf("%.3lf\n", V);
//	return 0;
//}
 
//int main()
//{
//	int score1, score2, score3;
//	scanf("%d%d%d", &score1, &score2, &score3);
//	printf("score1=%d,score2=%d,score3=%d",score1,score2,score3);
//	return 0;
//}
 
 
//int main()
//{
//	int num;
//	for (num = 10000; num < 100000; num++)
//	{
//		if (num == (num / 10000) * (num % 10000) + (num / 1000) * (num % 1000) + (num / 100) * (num % 100) + (num / 10) * (num % 10))
//			printf("%d ", num);
//
//	}
//	return 0;
//}
 
/*--------------------------------------------------------*/
//int main()
//{
//	int num;
//	for (num=10000;num<100000;num++)
//	{
//		int ten, sum;
//		for (ten = 10,sum=0; ten <= 10000; ten *= 10)
//		{
//			sum += (num / ten) * (num % ten);
//		}
//		if (num == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
/*--------------------------------------------------------*/
 
 
//int main()
//{
//	int a=0, b=0;
//	scanf("%d %d",&a,&b);
//	if (a >= 100)
//		a %= 100;
//	if (b >= 100)
//		b %= 100;
//	int c = a + b;
//	if (c >= 100)
//		c %= 100;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int ret = (a + b) % 100;
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	float f;
//	scanf("%f", &f);
//	int num = (int)f % 10;//强制类型转换
//	printf("%d", num);
//	return 0;
//}
 
 
//#define YEAR 3.156e7
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	long long int a = year * YEAR;
//	printf("%lld",a );
//	return 0;
//}
 
 
 
