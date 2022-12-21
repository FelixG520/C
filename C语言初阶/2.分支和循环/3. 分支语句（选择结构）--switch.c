//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	else if (4 == day)
//		printf("星期四\n");
//	else if (5 == day)
//		printf("星期五\n");
//	return 0;
//}

/*
switch语句
switch语句也是一种分支语句。
常常用于多分支的情况。
比如：
输入1，输出星期一
输入2，输出星期二
输入3，输出星期三
输入4，输出星期四
输入5，输出星期五
输入6，输出星期六
输入7，输出星期日
那我没写成 if...else if ...else if 的形式太复杂，那我们就得有不一样的语法形式。
这就是switch 语句

switch(整型表达式) 
{
    语句项；
}
*/

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch(整型表达式),可以是变量，也可以是常量
//	{
//	case 1://case 整型常量表达式，不能是浮点型，也不能是变量，必须是常量
//		printf("星期一\n");
//		break;//若不写break，从哪执行的，将会从哪继续往下执行，用于调出switch语句
//	/*	编程好习惯
//			在最后一个 case 语句的后面加上一条 break语句。
//			（之所以这么写是可以避免出现在以前的最后一个 case 语句后面忘了添加 break语句）。*/
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("工作日\n");
//		break;
//	case 2:
//		printf("工作日\n");
//		break;
//	case 3:
//		printf("工作日\n");
//		break;
//	case 4:
//		printf("工作日\n");
//		break;
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("休息日\n");
//		break;
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}


//和上面的代码完全等价，break不是必须要加的，根据自己的需要来编写
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://处理1~7之外其他的情况（处理非法状况），default可以放在任何位置，建议放在最后面
//		/*编程好习惯
//			在每个 switch 语句中都放一条default子句是个好习惯，甚至可以在后边再加一个 break*/
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//注意case语句和default语句后都要加冒号（：）
//switch语句中可以存在if...else语句

//int main()
//{
//	int n = 'c';
//	switch (n++)
//	{
//	default:
//		printf("error");
//		break;
//	case 'a':
//	case 'A':
//	case 'b':
//	case 'B':
//		printf("good");
//		break;
//	case 'c':
//	case 'C':
//		printf("pass");
//	case 'd':
//	case 'D':
//		printf("warn");
//	}
//	return 0;
//}



//----------------------------------------------------------------------------------------------------------------------
//练习：判断m、n的值是多少？
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}


/*
如果表达的值与所有的case标签的值都不匹配怎么办？
其实也没什么，结构就是所有的语句都被跳过而已。
程序并不会终止，也不会报错，因为这种情况在C中并不认为是个错误。
但是，如果你并不想忽略不匹配所有标签的表达式的值时该怎么办呢？
你可以在语句列表中增加一条default子句，把下面的标签
default：
写在任何一个 case 标签可以出现的位置。
当 switch 表达式的值并不匹配所有 case 标签的值时，这个 default 子句后面的语句就会执行。
所以，每个switch语句中只能出现一条default子句。
但是它可以出现在语句列表的任何位置，而且语句流会像执行一个case标签一样执行default子句。
编程好习惯
在每个 switch 语句中都放一条default子句是个好习惯，甚至可以在后边再加一个 break 。
*/

//switch语句中并没有continue