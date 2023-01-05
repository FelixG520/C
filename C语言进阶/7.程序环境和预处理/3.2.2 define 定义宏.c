#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
3.2.2 #define 定义宏
	#define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏（macro）或定义
	宏（define macro）

下面是宏的申明方式：
#define name( parament-list ) stuff
其中的 parament-list 是一个由逗号隔开的符号表，它们可能出现在stuff中。


注意：
参数列表的左括号必须与name紧邻。
如果两者之间有任何空白存在，参数列表就会被解释为stuff的一部分
*/

//#define SQUARE(X) X*X
//#define SQUARE_2(X) (X)*(X)
//
//int main()
//{
//	int ret = SQUARE(5);
//	printf("ret = %d\n", ret);//5 * 5=25
//	int ret1 = SQUARE(5+1);
//	printf("ret1 = %d\n", ret1);//5+1 * 5+1=11
//	int ret2 = SQUARE_2(5 + 1);
//	printf("ret2 = %d\n", ret2);//(5+1) * (5+1)=36
//
//	return 0;
//}


//#define DOUBLE(X) X+X
//#define DOUBLE_2(X) (X)+(X)
//#define DOUBLE_3(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//10 * 5+5 = 55
//	printf("%d\n", ret);
//	int ret_2 = 10 * DOUBLE_2(a);//10 * (5)+(5) = 55
//	printf("%d\n", ret_2);
//	int ret_3 = 10 * DOUBLE_3(a);//10 * ((5)+(5)) = 55
//	printf("%d\n", ret_3);
//	return 0;
//}
/*
提示：
所以用于对数值表达式进行求值的宏定义都应该用这种方式加上括号，避免在使用宏时由于参数中
的操作符或邻近操作符之间不可预料的相互作用。
*/