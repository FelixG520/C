//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
/*
·函数的嵌套调用和链式访问
函数和函数之间可以根据实际的需求进行组合的，也就是互相调用的。
·嵌套调用
函数可以嵌套调用，但是不能嵌套定义
*/

//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}


/*
链式访问
把一个函数的返回值作为另外一个函数的参数
*/
//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf函数返回的是字符的个数，先打印43，43是两个字符，输出2，2是一个字符，输出1，最终输出4321
//	return 0;
//}