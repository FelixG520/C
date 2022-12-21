//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
/*
如果库函数能干所有的事情，那还要程序员干什么？
所有更加重要的是自定义函数。
自定义函数和库函数一样，有函数名，返回值类型和函数参数。
但是不一样的是这些都是我们自己来设计。这给程序员一个很大的发挥空间

函数的组成：
ret_type fun_name(para1, * )
{
 statement;//语句项
}
ret_type 返回类型
fun_name 函数名
para1    函数参数

*/


//我们举一个例子：
//写一个函数可以找出两个整数中的最大值
//int get_max(int x, int y)
//{
//	if (x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max); 
//	
//	return 0;
//}

//写一个函数，交换两个整型变量的内容
//实现成函数，但是不能完成任务,因为x,y和a,b没有关系,有独立的空间
//void Swap1(int x, int y)//代表没有返回值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
////正确的版本 - 指针解决
//void Swap2(int* pa, int* pb)//pa,pb - 指针变量
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}




