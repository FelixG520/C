#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>



/*=================================== 1.10 strerror ====================================
char * strerror ( int errnum );


|=============================================|                                            |
| ·返回错误码，所对应的错误信息。            |
|=============================================|

*/

//#include <errno.h>
//int main()
//{
//	//0 -- No error
//	//1 -- Operation not permitted
//	//2 -- No such file or directory
//	//3 -- No such process
//	//4 -- Interrupted function call
//	//...
//	//char* str1 = strerror(3);//把错误码转化成所对应的错误信息，并返回他的地址
//	//printf("%s\n", str1);
//
//	//char* str1 = strerror(errno);
//	//errno是一个全局的错误的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，复制到errno中
//	FILE* pf = fopen("test.txt", "r");
//	if (pf = NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}