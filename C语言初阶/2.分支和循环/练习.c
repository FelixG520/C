//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


//1. 计算 n的阶乘。
//int main() 
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	sacnf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d", ret);
//	return 0;
//}
//2. 计算 1!+ 2!+ 3!+ …… + 10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;//定义局部变量确保每次循环的结束后，局部变量的生命周期结束，否则下面的ret就会累计，再次循环的时候，不会从1开始进行计算
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;//先求n！
//		}
//		sum = sum + ret;
//	}
//	
//	printf("sum = %d", sum);
//	return 0;
//}


//优化
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	
//	printf("sum = %d", sum);
//	return 0;
//}

//3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//写一个代码，在arr数组（有序的）找到7
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码，在arr数组（有序的）找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n",i);
//			break;
//		}
//	}
//	if (sz == i)
//		printf("找不到\n");
//	return 0;
//}
//折半查找算法 or 二分查找算法--只在有序数组中使用
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//左下标
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
//	int right = sz - 1;//右下标
//	int k = 7;
//	while (left <= right)//判断条件
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//4. 编写代码，演示多个字符从两端移动，向中间汇聚。
//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
// ...
//welcome to bit!!!!##
//#include <string.h>
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;字符串结尾是\0,因此计算下标要减二
//	int right = strlen(arr1) - 1;//strlen()计算字符串长度，到\0截止
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//system--执行系统命令的一个函数--cls--清空屏幕
//		left++;
//		right--;
//	}
//	printf("welcome to bit!!!!!!\n");//由于上面system("cls")把屏幕清空，因此还要在最后输出一次
//	return 0;
//}


//5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password , "123456")==0)//if (password == "123456")==--不能用来比较两个字符串是否相等，应该用一个库函数-strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//}


