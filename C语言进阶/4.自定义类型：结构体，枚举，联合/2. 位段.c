#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//*********************************** 2.1 什么是位段 *********************************

/*
位段的声明和结构是类似的，有两个不同：
	1.位段的成员必须是 int、unsigned int 或signed int 。
	2.位段的成员名后边有一个冒号和一个数字,不能大于32。
*/ 
//struct S
//{
//	int _a : 2;//2 -- 意味着_a只需要2个比特位
//	int _b : 5;//5 -- 意味着_b只需要5个比特位
//	int _c : 10;//10 -- 意味着_c只需要10个比特位
//	int _d : 30;//30 -- 意味着_d只需要30个比特位
//	//总共47bit -- 6byte
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8
//	return 0;
//}

/************************************ 2.2 位段的内存分配 *********************************1. 位段的成员可以是 int unsigned int signed int 或者是 char （属于整形家族）类型

1. 位段的成员可以是 int unsigned int signed int 或者是 char （属于整形家族）类型
2. 位段的空间上是按照需要以4个字节（ int ）或者1个字节（ char ）的方式来开辟的。
3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
*/ 

 
//一个例子
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

/************************************* 2.2 位段的内存分配 *********************************1. 位段的成员可以是 int unsigned int signed int 或者是 char （属于整形家族）类型
1. int 位段被当成有符号数还是无符号数是不确定的。
2. 位段中最大位的数目不能确定。（16位机器最大16，32位机器最大32，写成27，在16位机器会出问题。
3. 位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。
4. 当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，是舍弃剩余的位还是利用，这是不确定的。

总结：
跟结构相比，位段可以达到同样的效果，但是可以很好的节省空间，但是有跨平台的问题存在。
*/  