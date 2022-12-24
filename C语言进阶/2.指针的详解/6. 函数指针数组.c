#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int* arr[5];//指针数组
//	//需要一个数组，可以存放四个函数的地址 -- 函数指针数组
//	int (*pa)(int,int) = Add;
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*) = my_strcpy;
//2.写一个函数指针数组pfarr，能够存放4个my_strcpy函数的地址
//char* (*pfarr[4])(char*, char*) = my_strcpy;


//函数指针数组的用途：转移表
//例子：（计算器）
#include <stdio.h>
//void menu()
//{
//	printf("*************************\n");
//	printf(" 1:add             2:sub \n");
//	printf(" 3:mul             4:div \n");
//	printf(" 5:XOR             0.exit\n");
//	printf("*************************\n");
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//int XOR(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			printf("ret = %d\n", Add(x, y));
//			break;
//		case 2:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			printf("ret = %d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			printf("ret = %d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			printf("ret = %d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




//使用函数指针数组的实现：
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	//pfArr是一个函数指针数组 -- 函数指针数组的用途：转移表
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,XOR };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//			printf("退出\n");
//		else
//			printf("选择错误\n");
//		
//	} while (input);
//	return 0;
//}

