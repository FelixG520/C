#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
3.2.6 宏和函数对比
宏通常被应用于执行简单的运算。比如在两个数中找出较大的一个。

#define MAX(a, b) ((a)>(b)?(a):(b))

那为什么不用函数来完成这个任务？
原因有二：
	1. 用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。所以宏比
	函数在程序的规模和速度方面更胜一筹。
	2. 更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。反之
这个宏怎可以适用于整形、长整型、浮点型等可以用于 > 来比较的类型。宏是类型无关的。
当然和宏相比函数也有劣势的地方：
	1. 每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。
	2. 宏是没法调试的。
	3. 宏由于类型无关，也就不够严谨。
	4. 宏可能会带来运算符优先级的问题，导致程容易出现错。

宏有时候可以做函数做不到的事情。比如：宏的参数可以出现类型，但是函数做不到。
*/

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//#define MAX(a, b) ((a)>(b)?(a):(b))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max1 = Max(a, b);
//	int max2 = MAX(a, b);
//	printf("%d %d\n", max1, max2);
//	return 0;
//}


//宏的参数可以出现类型，但是函数做不到。
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p1 = (int*)malloc(10 * sizeof(int));
//	int* p2 = MALLOC(10,int);
//	return 0;
//}

//#define TEST(x,y) printf("test\n")
//int main()
//{
//	TEST();
//	TEST();
//	TEST();
//	return 0;
//}

/*
代码长度:
#define定义宏:每次使用时，宏代码都会被插入到程序中。除了非常小的宏之外，程序的长度会大幅度增长
函数:函数代码只出现于一个地方；每次使用这个函数时，都调用那个地方的同一份代码

执行速度
#define定义宏:更快
函数:存在函数的调用和返回的额外开销，所以相对慢一些

操作符优先级
#define定义宏:宏参数的求值是在所有周围表达式的上下文环境里，除非加上括号，否则邻近操作符的优先级可能会产生不可预料的后果，所以建议宏在书写的时候多些括号。
函数:函数参数只在函数调用的时候求值一次，它的结果值传递给函数。表达式的求值结果更容易预测。

带有副作用的参数
#define定义宏:参数可能被替换到宏体中的多个位置，所以带有副作用的参数求值可能会产生不可预料的结果。
函数:函数参数只在传参的时候求值一次，结果更容易控制。

参数类型
#define定义宏:宏的参数与类型无关，只要对参数的操作是合法的，它就可以使用于任何参数类型。
函数:函数的参数是与类型有关的，如果参数的类型不同，就需要不同的函数，即使他们执行的任务是不同的。

调试
#define定义宏:宏是不方便调试的
函数:函数是可以逐语句调试的

递归
#define定义宏:宏是不能递归的
函数:函数是可以递归的
*/

/*
命名约定
一般来讲函数和宏的使用语法很相似。所以语言本身没法帮我们区分二者。
那我们平时的一个习惯是：
	把宏名全部大写
	函数名不要全部大写
*/