//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

/*
C语言中提供了可以随意滥用的 goto语句和标记跳转的标号。
从理论上 goto语句是没有必要的，实践中没有goto语句也可以很容易的写出代码。
但是某些场合下goto语句还是用得着的，最常见的用法就是终止程序在某些深度嵌套的结构的处理过
程。
例如：一次跳出两层或多层循环。
多层循环这种情况使用break是达不到目的的。它只能从最内层循环退出到上一层的循环。*/

//int main()
//{
//	printf("hello bit\n");
//	goto again;//回到again继续循环
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");//关机，system()-执行系统命令
//again:
//	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))//比较两个字符串--strcmp()
//	{
//		system("shutdown -a");//撤销关机
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//不使用goto语句，则可以使用循环：
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 600");
//	while (1)//死循环
//	{
//		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

