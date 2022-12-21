//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


/*
逗号表达式
exp1, exp2, exp3, …expN
逗号表达式，就是用逗号隔开的多个表达式。
逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果
*/

//代码1
//int main()
//{
//	//代码1
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	//c是多少？
//	printf("c=%d\n", c);
//	return 0;
//}

//代码2
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	int d = 0;
//	if (a = b + 1, c = a / 2, d > 0)//真正起判断作用的是最后的d>0
//		return 0;
//}

//代码3 
//int main()
//{
//	int a = 0;
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		//业务处理
//		a = get_val();
//		count_val(a);
//	}
//	//如果使用逗号表达式，改写：
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		//业务处理
//	}
//	return 0;
//}
