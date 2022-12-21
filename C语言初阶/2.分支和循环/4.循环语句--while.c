//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


//我们已经掌握了，if语句：
//当条件满足的情况下，if语句后的语句执行，否则不执行。
//但是这个语句只会执行一次。
//由于我们发现生活中很多的实际的例子是：同一件事情我们需要完成很多次。
//那我们怎么做呢？
//C语言中给我们引入了： while 语句，可以实现循环。
//int main()
//{
//	if (1)//1--真
//		printf("hehe\n");
//	return 0;
//}


//while 语法结构
//while (表达式)
//循环语句;
//int main()
//{
//	while (1)//若为真，一直循环下去，直到有一次条件表达式为假
//		printf("hehe\n");
//	return 0;
//}



//在屏幕上打印1 - 10的数字
//int main()
//{
//	int i = 1;
//	while (i <= 10)//若为真，一直循环下去，直到有一次条件表达式为假
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//-----------------------------------------------------------------------------------------
//while语句中的break和continue
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//当i=5时，跳出循环，不在继续打印输出
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//break在while循环中的作用：
//其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。
//所以：while中的break是用于永久终止循环的。


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//i=5,从while继续执行，而i不会再发生改变，因此陷入死循环
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;//i=5,从while继续执行，i=5+1=6，继续执行
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
//continue在while循环中的作用就是：
//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
//而是直接跳转到while语句的判断部分。进行下一次循环的入口判断

//-------------------------------------------------------------------------------------------------------
//代码1
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar()可以接收键盘的字符
//		//ctrl + z可以获取EOF
//		//文件结束标志--EOF-end of file-->-1
//	{
//		putchar(ch);//输出，和printf一样printf("%c\n", ch);
//	}
//	return 0;
//}


//
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：>");
//	scanf("%s", password);
//	//输入密码，并放在password数组中,例：输入123456\n,scanf把123456读取，但是\n还留在输入缓冲区，因此\n就被下面getchar()读取，输出10！=123456，所以最终输出放弃确认
//	//因此想要达到想要的效果，就应该先把输入缓冲区的\n拿走，因此再加一行getchar()把\n读走
//	getchar();
//	//输入123456 abcd\n，scanf的结束标志是空格，因此后面的abcd\n被getchar读取！=123465，所以最终输出放弃确认
//	//while循环，直到把输入缓冲区里的东西全部取走
//	while (ch = getchar() != '\n')
//	{
//		;//写一个空语句，没有实际作用
//	}
//	printf("请确认(Y/N):>");//'\n'的ASCII码值是10，而回车就\n
//	ret = getchar();//Y/N
//	if (ret == "Y")
//	{
//		printf("确认成功\n");
//	}
//	else
//	{ 
//		printf("放弃确认\n");
//	}
//	return 0;
//}



//代码2
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')// ||--或者，只输出数字字符，不输出非数字字符
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}