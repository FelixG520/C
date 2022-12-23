#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>

////4.1一维数组传参
//void test(int arr[])//test(arr)可以
//{}
//void test(int arr[10])//10可以省略，test(arr)可以
//{}
//void test(int* arr)//test(arr)可以
//{}
//void test2(int* arr[20])//20可以省略，test2(arr2)可以
//{}
//void test2(int** arr)//test2(arr2)可以（和第3个类似） -- 一级指针的地址，放到二级指针
//{}
//int main()
//{
//	int arr[10] = { 0 };//存放整形的数组
//	int* arr2[20] = { 0 };//存放指针的数组
//	test(arr);
//	test2(arr2);
//}
//
//
////4.2二维数组传参
//void test(int arr[3][5])//test(arr)可以 -- 必须保持与传入的数组一致
//{}
//void test(int arr[][])//test(arr)不可以 -- 二维数组，可以省略行，但不能省略列
//{}
//void test(int arr[][5])//test(arr)不可以 -- 二维数组传参，行可以省略
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//
//
//
//void test(int* arr)//test(arr)不对，arr不是整形类型的指针，而是第一行元素的地址
//{}
//void test(int* arr[5])//test(arr)不对 -- 指针数组
//{}
//void test(int(*arr)[5])//test(arr)对，arr是第一行元素的地址，有5个元素
//{}
//void test(int** arr)//test(arr)不对，数组地址不可放到二级指针，二级指针是用来存放一级指针变量的地址
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组，此时arr是第一行元素的地址
//}
//
////4.3 一级指针传参
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}
//
////当一个函数的参数部分为一级指针的时候，函数能接收什么参数？
////test1函数能接收什么参数？
////test2函数能接收什么参数？
//void test1(int* p)
//{}
//void test2(char* p)
//{}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//可以
//	test1(p1);//可以
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//可以
//	test2(pc);//可以
//	return 0;
//}
//
////4.4 二级指针传参
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
////思考：
////当函数的参数为二级指针的时候，可以接收什么参数？
//void test(char** p)
//{
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);//一级指针变量的地址
//	test(ppc);//二级指针
//	test(arr);//数组名是首元素地址，arr是指针数组，第一个元素是指针
//	return 0;
//}

