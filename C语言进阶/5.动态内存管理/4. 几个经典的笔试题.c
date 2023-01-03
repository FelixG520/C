#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


//题目1：请问运行Test 函数会有什么样的结果？

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}//p形参，仅在函数内部有效，开辟完空间出了函数后，就不知道这块空间在哪了
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//printf("%s\n",str)两种写法一样
//}
//int main()
//{
//	Test();
//	return 0;
//}

//1.运行代码程序会出现崩溃的现象
//2.程序存在内存泄漏的问题
//str以值传递的形式给p，p是GetMemory函数的形参，只能函数内部有效
//等GetMemory函数返回之后，动态开辟内存尚未释放并且无法找到，所以会造成内存泄漏



//正确的版本1 -- 二级指针
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//正确的版本2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//printf("%s\n",str)两种写法一样
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//题目2：请问运行Test 函数会有什么样的结果？
//返回栈空间的地址的问题
//char* GetMemory(void)
//{
//	char p[] = "hello world";//局部变量，这个数组只能在函数内部使用
//	return p;//地址确实返回了，但是数组内容已经还给系统了，因此输出是随机值
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
//
//int* test()
//{
//	//int a = 10;//栈区 -- 这样不可
//	static int a = 10;//static把a放入静态区 -- 可以
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//
//
//int* test()
//{
//	int* ptr = malloc(100);//堆区 -- 可以
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}


//题目3：请问运行Test 函数会有什么样的结果？
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//存在内存泄露问题，没有free
//}
////改
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//存在内存泄露问题，没有free
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//题目4：请问运行Test 函数会有什么样的结果？
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	if (str != NULL)
//	{
//		strcpy(str, "world");//这块地址已经不属于我了，非法访问内存
//		printf(str);
//	}
//}
//改
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}