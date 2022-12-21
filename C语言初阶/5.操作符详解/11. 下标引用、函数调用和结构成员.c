//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
/*
1.[] 下标引用操作符
操作数：一个数组名 + 一个索引值
*/ 


//int main()
//{
//	int arr[10];//创建数组
//	arr[9] = 10;//实用下标引用操作符。
//	return 0;
//}
//[] 的两个操作数是arr和9。


/*
2. () 函数调用操作符
接受一个或者多个操作数：第一个操作数是函数名，剩余的操作数就是传递给函数的参数。
*/
//int get_max(int x, int y)
//{
//	return x < y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//调用函数的时候的()就是函数调用操作符 - 第一个操作数是函数名，剩余的操作数就是传递给函数的参数
//	max = get_max(a, b);
//	printf("max=%d", max);
//	return 0;
//} 
//


/*
3. 访问一个结构的成员
.    结构体.成员名
->   结构体指针->成员名
*/ 


//#include <string.h>
////创建一个结构体类型
//struct Book//struct--结构体关键字
//{
//	char name[20];//name[]是个数组，C语言程序设计
//	short price;//price是个变量，55
//};//;不可缺少，用来结束这个类型定义
//int main()
//{
//	//利用结构体类型创建一个该类型结构体变量
//	struct Book b1={"C语言程序设计",55};
//	struct Book* pb = &b1;//pb结构体指针
//	printf("书名：%s\n", b1.name);  //%s打印字符串
//	printf("价格：%d元\n", b1.price); //%d打印整型
//	b1.price = 15;
//	printf("修改后的价格:%d元\n", b1.price);
//	//修改书名，由于b1是个数组，不是变量，不能直接修改b1.name = "C++"；
//	strcpy(b1.name, "C++");//strcpy-string copy-字符串拷贝-库函数-string.h
//	
//						   
//	
//	//利用pb打印出我的书名和价格
//	printf("%s\n", (*pb).name);//.--结构体变量.成员
//	printf("%d\n", (*pb).price);
//	//简单的操作，->操作符
//	printf("%s\n", pb->name);//->--结构体指针->成员
//	printf("%d\n", pb->price);
//	return 0;
//}