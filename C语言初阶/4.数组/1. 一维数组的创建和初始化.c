//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


//int main()
//{
//	//创建一个数组-存放整型-10个
//	int arr[10];
//	char arr2[5];
//	int n = 5;
//	char ch[n];//数组[]中应放常量而不是变量
//
//	/*数组创建的实例：*/
//	//代码1
//	int arr1[10];
//	//代码2
//	int count = 10;
//	int arr2[count];//数组时候可以正常创建？error
//	//代码3
//	char arr3[10];
//	float arr4[1];
//	double arr5[20];
//	return 0;
//}


//注：数组创建，在C99标准之前， [] 中要给一个常量才可以，不能使用变量。在C99标准支持了变长数组的概念。


//-----------------------------------------------------------------------------------------------

//int main()
//{
//	//创建一个数组-存放整型-10个
//	int arr[10] = { 1,2,3 };//不完全初始化，前三个是1,2,3剩下的元素默认初始化为0
//	char arr2[5]={'a','b'};//剩下的元素默认初始化为0
//	char arr3[5] = "ab";//第三个元素是\0，以后的元素全是0
//	char arr4[5] = { 'a',98 };//数组中的数字按ASCII存储
//	char arr5[] = "abcdef";//[]会自动识别有几个元素
//	printf("%d\n", sizeof(arr5));//sizeof()计算arr4所占空间的大小，七个元素-char-7*1
//	printf("%d\n", strlen(arr5));//strlen()求字符串的长度，\0之前有6个字符
//	return 0;
//}
//1.strlen()和sizeof()没有什么关联
//2.strlen()是求字符串长度的-只能针对字符串求长度 - 库函数 - 使用要引头文件
//3.sizeof()计算变量、数组、类型的大小-单位是字节 - 操作符

//int main()
//{
//	char arr1[] = "abc";//a b c \0
//	char arr2[3] = { 'a','b','c' };//a b c
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}