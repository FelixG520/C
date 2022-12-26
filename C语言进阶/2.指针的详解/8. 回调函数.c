#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个
函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数
的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进
行响应。
*/   

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

//重复代码太多，怎么解决冗余
//void Calc(int(*pf)(int,int))
//{
//	int x, y;
//	printf("输入操作数：");
//	scanf("%d %d", &x, &y);
//	printf("ret = %d\n", pf(x, y));
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
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(XOR);
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

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("Hello world");
//  (*p)("Hello world");//可以不解引用
//}
//int main()
//{
//	test(print);
//	return 0;
//}






