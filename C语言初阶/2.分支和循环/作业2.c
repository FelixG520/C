//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//计算1~100有几个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//99两个表达式都满足，如果写else，那么99已经满足上面的表达式，因此不在参与else中的判断，将少判断一个9
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//分数求和1/1 - 1/2 +1/3 ...-1/100的和
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//分数是小数
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求最大值
//int main()
//{
//	int arr[] = { 1,2,8,9,3,4,5,6,7,10};
//	int max = arr[0];//假设其中一个元素[0]是最大值.int max=0不能处理元素是负数的情况，
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}


//输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//第几行就有几项
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%-2d  ", i, j, i * j);//%-2d左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}



//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//	while (num <= 2)
//	{
//		num++;
//		
//	}
//	printf("%d", num);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i, sum;
//	sum = 0;
//	for (i = 1; i < 6; i++)
//	{
//		sum += i;//sum = sum+i
//	}	
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i;
//	for (i = 10; i >= 0; i = i - 2)
//	{
//		printf("%d", i);
//	}	
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		printf("%d ", i);
//	}
//	return 0;
//}
//

//#include <stdio.h>
//int main(void)
//{
//	int i, j;
//	for (i = 5; i > 0; i--)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}