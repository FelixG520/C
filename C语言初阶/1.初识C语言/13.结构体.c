//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


/*
结构体是C语言中特别重要的知识点，结构体使得C语言有能力描述复杂类型。
比如描述学生，学生包含： 名字 + 年龄 + 性别 + 学号 这几项信息。
这里只能使用结构体来描述了。
复杂对象--结构体--我们自己创造出来的一种类型

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
//	//利用pb打印出我的书名和价格
//	printf("%s\n", (*pb).name);//.--结构体变量.成员
//	printf("%d\n", (*pb).price);
//	//简单的操作，->操作符
//	printf("%s\n", pb->name);//->--结构体指针->成员
//	printf("%d\n", pb->price);
//	return 0;
//}