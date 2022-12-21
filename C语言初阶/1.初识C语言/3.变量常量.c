#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1  
//scanf是c语言自带语法，但是VS认为此语法不安全，因此进行改良为scanf_s,因此在VS中使用scanf会警告，
//#define _CRT_SECURE_NO_WARNINGS 1能够忽略此警告进而可以使用scanf



/*
变量和常量
生活中的有些值是不变的（比如：圆周率，性别，身份证号码，血型等等）
有些值是可变的（比如：年龄，体重，薪资）
不变的值，C语言中用常量的概念来表示，变得值C语言中用变量来表示。
*/


//定义变量的方法
//int age = 150
//float weight = 45.5f
//char ch = 'w'

/*
·局部变量
·全局变量*/

//int global = 2019;//全局变量-定义在代码块{}之外的变量
//int main()
//{
//	int local = 2018;//局部变量-定义在代码块{}内部的变量
//	//上面的局部变量global变量的定义其实没有什么问题的，但不建议容易误会产生bug
//	//当局部变量和全局变量同名的时候，局部变量优先使用
//	int global = 2020;//局部变量
//	printf("global=%d\n", global);
//	return 0;
//}
//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	// 输入数据-使用输入函数scanf
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

/*
作用域
作用域（scope）是程序设计概念，通常来说，一段程序代码中所用到的名字并不总是有效/可用的
而限定这个名字的可用性的代码范围就是这个名字的作用域。
*/

//1. 局部变量的作用域是变量所在的局部范围。
//int main()
//{
//	int num = 0;
//	printf("num=%d\n", num);    //{}内部是num的作用域
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	{
//		printf("num=%d\n", num);   //外面的{}内部是num作用域
//	}
//	return 0;
//}
//
//int main()
//{
//	{
//		int num = 0;  
//	}
//	printf("num=%d\n", num); //里面的{}内部是num作用域
//	return 0;
//}


// 2. 全局变量的作用域是整个工程。(project)
//int global = 2020;
//void test() //定义一个函数
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	//未声明的标识符
//	//extern声明外部符号
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//生命周期
//变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段


 //1.局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
//int main()
//{
//	{//生命周期开始
//		int a = 10;
//		printf("a=%d\n", a); //ok
//	}//生命周期结束。
//	printf("a=%d\n", a);//error
//}


//2. 全局变量的生命周期是：整个程序的生命周期。


//-----------------------------------------------------------------------------------------------------------------------------

//常量
//C语言中的常量和变量的定义的形式有所差异。
//C语言中的常量分为以下以下几种：

//字面常量
//int main()
//{
//	int num = 4;
//	3;//字面常量
//	100;//字面常量
//	3.14;//字面常量
//}


//const 修饰的常变量
//int main()
//{
//	//const-常属性(具备常数的属性，但本质还是变量)
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;    //const将num赋值为4，已经无法改变
//	printf("%d\n", num);
//}
//int main()
//{
//	const int n = 10;//n具备常数的属性，但本质还是变量
//	int arr[n] = { 0 };//arr[]的括号中必须填常量
//}


//#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n",MAX);
//	return 0;
//}


//枚举常量--一一列举
//枚举关键字--enum
//enum Sex
//{
//	MALE,   
//	FAMALE,
//	SECRET
//};
////MALE,FAMALE,SECRET-枚举常量
//int main()
//{
//	enum Sex s = FAMALE;
//	printf("%d\n", MALE);   //0
//	printf("%d\n", FAMALE); //1
//	printf("%d\n", SECRET); //2
//	return 0;
//}
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//BLUE = 6;   枚举常量是不能改的，但是通过枚举类型所创建出来的变量color是可以改的
//	printf("%d\n", BLUE);
//	printf("%d\n", YELLOW);
//	printf("%d\n", RED);
//	return 0;
//}





