#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#define DEBUG
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i;
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG 
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

/*
1.
#if 常量表达式
	//...
#endif
//常量表达式由预处理器求值。
如：
#define __DEBUG__ 1
#if __DEBUG__
	//..
#endif

*/
 

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i;
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1 //1为真，0为假
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

/*
2.多个分支的条件编译
#if 常量表达式
	 //...
#elif 常量表达式
	 //...
#else
	 //...
#endif

*/

//int main()
//{
//#if 1==2//假
//	printf("haha\n");
//#elif 2==1//假
//	printf("hehe\n");
//#else
//	printf("hhhh\n");
//#endif
//	return 0;
//}


/*
3.判断是否被定义
#if defined(symbol)
#ifdef symbol
#if !defined(symbol)
#ifndef symbol
*/

//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)//DEBUG只要定义了，这条判断就为真
//	printf("hehe\n");
//#endif
//	return 0;
//}


//#define DEBUG 0
//int main()
//{
//#ifdef DEBUG//DEBUG只要定义了，这条判断就为真
//	printf("hehe\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#if !defined(DEBUG)//DEBUG只要定义了，这条判断就为假
//	printf("hehe\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#ifndef DEBUG//DEBUG只要定义了，这条判断就为假
//	printf("hehe\n");
//#endif
//	return 0;
//}


/*
4.嵌套指令
#if defined(OS_UNIX)
	#ifdef OPTION1
		 unix_version_option1();
	#endif
	#ifdef OPTION2
		unix_version_option2();
	 #endif
#elif defined(OS_MSDOS)
	 #ifdef OPTION2
		msdos_version_option2();
	#endif
#endif
*/

