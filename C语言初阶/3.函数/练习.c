//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <math.h>
//1. 写一个函数可以判断一个数是不是素数。
//是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	//2~n-1试素数
//	int j = 0;
//	//for (j = 2; j < n; j++)
//	for (j = 2; j <= sqrt(n); j++)//优化
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;//j=n时跳出函数，只有j=n的情况才会运行到这 
//}
//int main()
//{
//	//打印100~200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//2. 写一个函数判断一年是不是闰年。
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))//判断是否是闰年
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//3. 写一个函数，实现一个整形有序数组的二分查找
//binary_search(int arr[], int k)
//binary_search(int arr[],int k,int sz)//本质上arr是一个指针
//{
//	//算法的实现
//	//int sz = sizeof(arr) / sizeof(arr[0]);//arr是一个指针，所以算出来的是4/8，因此放到函数体外
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找 - 在一个有序数组中查找具体的某个数
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*int ret = binary_search(arr, k)*/
//	int ret = binary_search(arr,k,sz);//仅仅传入第一个元素的地址(数组名是首元素地址)
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}



//4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。
//void Add(int* p)
//{
//	(*p)++;//*p++错，++的优先级大于*，要把*p括起来
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

//int main()
//{
//	
//	int a = 12;
//	float t = 5.0;
//	float c = a / t;
//	printf("%f", c);
//	return 0;
//} 