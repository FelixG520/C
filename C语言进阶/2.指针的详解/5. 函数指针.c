#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10, b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	//在函数里，&函数名和函数名都是函数的地址
//	printf("%p %p %p %p\n", &Add,Add);
//	int(*pa)(int, int) = Add; //函数指针定义方式
//	printf("%d\n",(*pa)(2,3));//5
//
//	return 0;
//}

//void Print(char* str)//字符指针输出就是指针指向的内容
//{
//	printf("%s\n",str);//不需要解引用，%s打印需要输入一个地址，而str就是地址
//}
//int main()
//{
//	
//	void (*p)(char*) = Print;//定义函数指针p，类型为void
//	//去掉函数名就是指针的类型，上是void (*)(char*)类型
//	(*p)("hello world");
//	return 0;
//}


//阅读两段有趣的代码：
//代码1
//(*(void (*)())0)();
//void (*)()是函数指针类型，(void (*)())0)把0进行强制类型转换，此时0为某函数地址
//*(void (*)())0解引用0，(*(void (*)())0)()调用这个函数



//代码2
//void (*signal(int, void(*)(int)))(int);
//signal(int, void(*)(int)),函数名signal,函数内有两个参数int整型类型和void(*)(int)函数指针类型
//void (*)(int);去掉siginal函数，剩下的是一个函数指针类型,也就是siginal函数的返回类型
//整理就是，声明一个void (*)(int)类型的函数，函数名为siginal，参数为int类型和void(*)(int)类型
//可以理解为void(*)(int) signal(int, void(*)(int))，但不可以这么写

//代码2太复杂，如何简化：
//typedef void(*pfun_t)(int);//对void(*)(int)类型进行重命名，叫做pfun_t -- 可以理解为：typedef void(*)(int) pfun_t，但不可以这么写
//pfun_t signal(int, pfun_t);//重新声明signal函数

//signal是一个函数声明
//signal函数的参数有两个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针的函数的参数是int，返回类型是void



//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10, b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	//在函数里，&函数名和函数名都是函数的地址
//	printf("%p %p %p %p\n", &Add,Add);
//	int(*pa)(int, int) = Add; //函数指针定义方式
//	//四种调用方法都可以，*是摆设
//	printf("%d\n",(pa)(2, 3));//5 -- Add本身就是地址，赋给pa，Add == pa
//	printf("%d\n",(*pa)(2,3));//5 -- 解引用
//	//对于函数指针，*没有价值
//	printf("%d\n",(**pa)(2, 3));//5
//	printf("%d\n",(***pa)(2, 3));//5
//	return 0;
//}

//函数指针可以不用解引用，直接使用指针变量即可