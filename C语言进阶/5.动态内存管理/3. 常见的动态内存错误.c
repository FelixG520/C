#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

//1.对空指针进行解引用操作
//int main()
//{
//	int* p = (int*)malloc(40);
//	//万一malloc失败了，p就被赋值为NULL
//	if (p == NULL)//因此一定要进行判断
//		{
//			//打印错误原因的一个方式
//			printf("%s\n", strerror(errno));
//		}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.对动态开辟内存的越界访问
//int main()
//{
//	int* p = (int*)malloc(5*sizeof(int));//开辟5个int
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)//访问10个int，越界访问
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;//a是在栈区开辟的，不会被释放
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}


//4.使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if(p=NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;//p发生变化，此时如果释放p,已经不是原来的p指向的空间
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//5.对同一块动态内存多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if(p=NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//free(p);
//	//free(p);//多次释放空间 -- 代码崩溃，后面加上NULL就可以避免多次释放导致崩溃的情况
//	
//	free(p);
//	p = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}

//6.动态开辟内存忘记释放（内存泄漏） -- 很重要
//#include <windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}
//	return 0;
//}

