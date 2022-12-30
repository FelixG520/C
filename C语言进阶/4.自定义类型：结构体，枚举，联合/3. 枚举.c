#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//*********************************** 3.1 枚举类型的定义 *********************************

//枚举类型
//enum Sex
//{
//	//枚举的可能取值 - 常量，可被赋值
//	male,
//	female = 9,
//	secret
//};
//enum Color
//{
//	red,//0
//	green,//1
//	blue//2
//};
//
//int main()
//{
//	enum Sex s = male;
//	enum Color c = blue;
//	//enum Color c = 2;//报错,只能是枚举类型列举的元素
//	printf("%d %d %d\n", red, green, blue);
//	printf("%d %d %d\n", male, female, secret);
//	return 0;
//}

/*********************************** 3.2 枚举的优点 *********************************
为什么使用枚举？
我们可以使用 #define 定义常量，为什么非要使用枚举？
枚举的优点：
	1. 增加代码的可读性和可维护性
	2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
	3. 防止了命名污染（封装）
	4. 便于调试
	5. 使用方便，一次可以定义多个常量
*/

//#define RED 0
//#define GREEN 1
//#define BLUE 0
//int main()
//{
//	int color = RED;
//	return 0;
//}