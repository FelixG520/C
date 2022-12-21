#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	float a, b, c, d, e;
//	while (~scanf("%f%f%f%f%f", &a, &b, &c, &d, &e))
//	{
//		float average = (a + b + c + d + e) / 5.0;
//		printf("%.2f\n", average);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	float hi = 0.0;
//	float sum = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%f", &hi);
//		sum += hi;
//	}
//	printf("%.2f", sum / 5.0);
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		getchar();
//		switch(n)
//		{
//			case 200:printf("OK\n"); break;
//			case 202:printf("Accepted\n"); break;
//			case 400:printf("Bad Request\n"); break;
//			case 403:printf("Forbidden\n"); break;
//			case 404:printf("Not Found\n"); break;
//			case 500:printf("Internal Server Error\n"); break;
//			case 502:printf("Bad Gateway\n"); break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int score[99] = { 0 };
//	int n=7;
//	for (int i = 0; i < n; i++)
//		scanf("%d", &score[i]);
//	for (int i = 0; i < n - 1; i++)
//	{
//		//一趟冒泡排序
//		int j;
//		for (j = 0; j <= n - 1 - i; j++)//元素交换
//		{
//			if (score[j + 1] > score[j])
//			{
//				int tmp = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = tmp;
//			}
//		}
//	}
//	int sum = 0;
//	for (int i = 1; i <= 5; i++)
//		sum += score[i];
//	float average = sum / 5.0;
//	printf("%.2f", average);
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	int i = 0;
//	int sum = 0;
//	int max = 0;//假设最高分是0
//	int min = 100;//假设最低分是100
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f", (sum - min - max) / 5.0);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n, x, i;
//    scanf("%d\n", &n);
//    int arr[51] = { 0 };
//    for (i = 0; i < n; i++)
//        scanf("%d ", &arr[i]);
//    scanf("%d\n", &x);
//    for (i = n; i > 0; i--)  //从后往前依次与x比较
//    {
//        if (arr[i - 1] >= x)  //x更小时，元素后移一位
//            arr[i] = arr[i - 1];
//        else 
//        {
//            arr[i] = x;    //x更大时，将x插入，跳出循环
//            break;
//        }
//    }
//    if (i == 0) //要插入的元素小于所有元素 
//        arr[i] = x; //易错点，for循环中不包括i=0的情况，要单独处理
//    for (i = 0; i <= n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


//int main()
//{
//	int n,arr[100]={0};
//	while (~scanf("%d", &n))
//	{
//		int i = 0,num=0;
//		for (i = 0; i < n; i++)
//			arr[i] = i;
//		//筛选素数
//		for (int j = 2; j <= n; j++)//数组所有数先除2，再除3...
//		{
//			int k = 0;
//			for (k = j + 1; k <= n; k++)//j+1=2+1=3，从第三个数开始
//			{
//				if (arr[k] % j == 0)
//					arr[k] = 0;
//			}
//		}
//		//输出素数
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] != 0)
//				printf("%d ", arr[i]);
//			else
//				num++;
//		}
//		printf("\n%d", num);
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i,j = 0, count = 0;
//		for (int i = 2; i <= n; i++)
//		{
//			for (j = 2; j < i; j++)//在2~n-1之间任取一个数，如果i能被整除则不是素数，否则就是素数
//			{
//				if (i % j == 0)
//				{
//					count++;
//					break;
//				}
//			}
//			if (j==i)
//				printf("%d ", i);
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n, i, j, count = 0;
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	while (~scanf("%d%d", &m, &n))
//	{
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				scanf("%d", &arr1[i][j]);
//			}
//		}
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				scanf("%d", &arr2[i][j]);
//			}
//		}
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (arr1[i][j] == arr2[i][j])
//					count++;
//			}
//		}
//	}
//	printf("%.2f\n", 100.0 * count / (m * n));
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char name[100] = { 0 };
//	char passwd[100] = { 0 };
//	while (~scanf("%s %s", &name, &passwd))
//	{
//		//两个字符串比较相等可以使用==吗？   不可以
//		//要用库函数字符串比较函数strcmp
//		if (strcmp(name, "admin") == 0 && (strcmp(passwd, "admin") == 0))
//		{
//			printf("Login Success!");
//		}
//		else
//			printf("Login Fail!");
//	}
//	return 0;
//}


//int main()
//{
//    int cnt = 0;
//    for (int i = 1; i <= 2019; i++)
//    {
//        int m = i;
//        while (m > 0)//如果不含9，最后模完后为0，跳出while循环
//        {
//            if (m % 10 == 9)
//            {
//                cnt++;
//                break;
//            }
//            else
//            {
//                m /= 10;
//            }
//        }
//    }
//    //输出
//    printf("%d\n", cnt);
//    return 0;
//}

//int main()
//{
//	int n,arr[100000],odd=0,even=0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i <= n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			if (i % 2 == 0)
//				even++;
//			else
//				odd++;
//		}
//		printf("%d %d\n", odd, even);
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 2 == 1)
//		printf("%d %d\n", n / 2 + 1, n / 2);
//	else
//		printf("%d %d\n", n / 2 , n / 2);
//	return 0;
//}