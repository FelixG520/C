#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//*********************************** 1.2 结构的声明 *********************************
/*
结构的声明
struct tag
{
	   member-list;
}variable-list;
*/

//声明一个结构体类型
//声明一个学生类型，是想过学生类型来创建学生变量（对象）
//struct stu//struct -- 结构体关键字    stu -- 结构体标签
//{
//	//成员变量
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//};
//struct stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//全局变量
//struct stu s3;//全局变量
//int main()
//{
//	//创建结构体变量
//	struct stu s1;
//	struct stu s2;
//	return 0;
//}


//*********************************** 1.3 特殊的声明 *********************************
//匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;

//匿名结构体指针类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}* psa;//结构体指针

//上面的两个结构在声明的时候省略掉了结构体标签（tag）。
//int main()
//{
//	//创建结构体变量
//	struct x;
//	psa = &x;//警告：编译器会把上面的两个声明当成完全不同的两个类型。所以是非法的。
//	return 0;
//}


//*********************************** 1.4 结构的自引用 *********************************
//数据结构 -- 数据在内存中存储的结构
//struct Node
//{
//	int data;
//	struct Node* next;//下一个数据的指针，类型就是struct Node类型的指针
//	//struct Node next;//错误，结构体成员不能包含自己
//};
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;//struct Node重命名为Node
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}



//*********************************** 1.5 结构体变量的定义和初始化 *********************************
//struct T
//{
//	double weight;
//	short age;
//};
//struct S 
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello world" };
//	struct S s = { 'c',{55.6,30},100,3.14,"hello world" };
//	printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}

//*********************************** 1.6 结构体内存对齐 *********************************
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}
/*
结构体的对齐规则：
	1. 第一个成员在与结构体变量偏移量为0的地址处。
	2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
		对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
		·VS中默认的值为8
	3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
	4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整
	   体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。

*/


//练习3
//struct S3
//{
//	double d;//对齐数 -- 8
//	char c;//对齐数 -- 1
//	int i;//对齐数 -- 4
//};
//int main()
//{
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//8+1+4=16
//	return 0;
//}


//练习4-结构体嵌套问题
/*
如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整
体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍
*/ 

//struct S4
//{
//	char c1;//对齐数 -- 1
//	struct S3 s3;//对齐数 -- 8，所占字节数16
//	double d;//对齐数 -- 8
//};
//int main()
//{
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//1+7+16+8=32
//	return 0;
//}


/*
为什么存在内存对齐 ?
	大部分的参考资料都是如是说的：
	1. 平台原因(移植原因)：
		不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特
		定类型的数据，否则抛出硬件异常。
	2. 性能原因：
		数据结构(尤其是栈)应该尽可能地在自然边界上对齐。
		原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。
	总体来说：
		结构体的内存对齐是拿空间来换取时间的做法
*/ 


/*
那在设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到：
让占用空间小的成员尽量集中在一起。
例如：
struct S1
{
	 char c1;
	 int i;
	 char c2;
};
struct S2
{
	 char c1;
	 char c2;
	 int i;
}

S1和S2类型的成员一模一样，但是S1和S2所占空间的大小有了一些区别。
*/ 

//*********************************** 1.7 修改默认对齐数 *********************************

//struct S1
//{
//	char c1;//1
//	//7
//	double d1;//8
//	//共16字节
//};
//
//#pragma pack(4)//设置默认对齐数为4
//struct S2
//{
//	char c2;//1
//	//3
//	double d2;//8
//	//共12字节
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//
//#pragma pack(1)//设置默认对齐数为1
//struct S3
//{
//	char c3;//1
//	double d3;//8
//	//共9字节
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//
//int main()
//{
//	struct S1 s1;
//	struct S2 s2;
//	struct S3 s3;
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(s3));
//	return 0;
//}

//结论：结构在对齐方式不合适的时候，我么可以自己更改默认对齐数。


/*
百度笔试题：
	写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
	考察： offsetof 宏的实现
*/ 

//#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof();//计算结构体成员相对于结构体起始位置的偏移量
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}


//*********************************** 1.8 结构体传参 *********************************
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps -> a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
////传值
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
////传址
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s={0};
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

/*
上面的 print1 和 print2 函数哪个好些？
答案是：首选print2函数。
原因：
	函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
	如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
结论：
	结构体传参的时候，要传结构体的地址。
*/ 