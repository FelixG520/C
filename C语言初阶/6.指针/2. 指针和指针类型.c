//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

/*
指针的类型
我们都知道，变量有不同的类型，整形，浮点型等。那指针有没有类型呢？
准确的说：有的
*/

//int main()
//{
//	printf("%d\n", sizeof(char*));  //8
//	printf("%d\n", sizeof(short*)); //8
//	printf("%d\n", sizeof(int*));   //8
//	printf("%d\n", sizeof(double*));//8
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	//地址可以存到不同类型的变量里去
//	*pa = 0;//通过pa找到a，对a的值进行改变 - 00000000
//	*pc = 0;//仅仅操作了一个字节 - 11223300
//	//指针类型不同，解引用操作不同
//	printf("%p\n", pa);//00000099DF6FFA34
//	printf("%p\n", pc);//00000099DF6FFA34	
//	return 0;
//}
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
/*
int*p *p能够访问4个字节
char*p *p能够访问1个字节
double*p *p能够访问8个字节
*/ 

//-------------------------------------------------------------------------------
//指针 + -整数
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);    //000000906DEFFB34
//	printf("%p\n", pa + 1);//000000906DEFFB38 - 整型类型+1跳过4个字节
//	printf("%p\n", pc);    //000000906DEFFB34
//	printf("%p\n", pc + 1);//000000906DEFFB35 - 字符类型+1跳过1个字节
//	return 0;
//}
//总结：指针的类型决定了指针向前或者向后走一步有多大（距离）
/*
int*p p+1 --> 4
char*p p+1 --> 1
double*p p+1 --> 8
*/


//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;//数组名 - 首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//把数组中的元素全部改成1
//	}
//	return 0;
//}


/*
总结：
指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）。
比如： char* 的指针解引用就只能访问一个字节，而 int* 的指针的解引用就能访问四个字节。
*/ 