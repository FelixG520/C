//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

/*
指针运算
·指针 + -整数
·指针 - 指针
·指针的关系运算
*/ 

//指针+-整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}  
//	return 0;
//}

//指针-指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);//指针 - 指针 = 中间元素个数
//	return 0;
//}
//
//int main()
//{
//	int ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &ch[0]);//error，中间元素个数无法计算
//	return 0;
//}


//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//递归 - 模拟实现strlen - 计数的方式1，递归的方式2
//	char arr[] = 'bit';
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//指针的关系运算
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//for (vp = &values[N_VALUES]; vp > &values[0];)
//{
//	*--vp = 0;
//}
////代码简化, 这将代码修改如下：
//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--) 
//{
//	*vp = 0;
//}

/*
实际在绝大部分的编译器上是可以顺利完成任务的，然而我们还是应该避免这样写，因为标准并不保证
它可行。

标准规定：
允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与
指向第一个元素之前的那个内存位置的指针进行比较。
*/  

