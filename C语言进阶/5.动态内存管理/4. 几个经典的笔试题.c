#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


//题目1：

////void GetMemory(char* p)
////{
////	p = (char*)malloc(100);
////}//p形参，仅在函数内部有效，开辟完空间出了函数后，就不知道这块空间在哪了
////void Test(void)
////{
////	char* str = NULL;
////	GetMemory(str);
////	strcpy(str, "hello world");
////	printf(str);//printf("%s\n",str)两种写法一样
////}
////int main()
////{
////	Test();
////	return 0;
////}

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
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);//printf("%s\n",str)两种写法一样
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}