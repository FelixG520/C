#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*类型的意义：
1. 使用这个类型开辟内存空间的大小（大小决定了使用范围）。
2. 如何看待内存空间的视角
*/

//int main()
//{
//	int a = 0;      //整形的角度 -- 0a 00 00 00
//	float f = 10.0; //浮点数的角度 -- 00 00 20 41
//
//	return 0;
//}


/*
整形家族：
char
	unsigned char  比特位无符号位，没有正负之分，只有正数
	signed char    比特位有符号位
short
	unsigned short[int]
	signed short[int]
		//两种定义方式
			short a = 10;
			short int b = 10;
int
	unsigned int
	signed int
long
	unsigned long[int]
	signed long[int]
*/

/*
浮点数家族：
	float
	double
*/

/*
构造类型：
	数组类型
	结构体类型 struct
	枚举类型 enum
	联合类型 union
*/

/*
指针类型:两种写法一样
	int *pi;
	char *pc;
	float* pf;
	void* pv;
*/

/*
空类型：
	void 表示空类型（无类型）
	通常应用于函数的返回类型、函数的参数、指针类型。
*/

/*
void test()//无返回
//void test(void)说明函数不需要参数
{
	printf("hehe\n");
}
int main()
{
	test();
	test(100);//给了参数仍然返回
	return 0;
}
*/

