//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


//算术操作符
//+ - * / %



//
//移位操作符(移二进制位)
//>> 左移
//<< 右移


//int main()
//{
//	int a = 1;
//	//整型1占4个字节-32bit位  00000000000000000000000000000001
//	int b = a << 1;           //00000000000000000000000000000100=2
//	int c = a << 2;           //00000000000000000000000000010000=4,符号位被用来填充右移后左边空出来的位。向右移出的位被丢弃。
//	printf("%d\n",b);
//	printf("%d\n",c);
//	printf("%d\n",a);    //a本身不变
//	return 0;
//}


//位操作符(二进制位)
//& 按位与  ^按位异或  |按位或


//int main()
//{
//	int a = 3;//转成二进制011
//	int b = 5;//转成二进制101
//	int c = a & b;//按位与：有0则0，都1则1’即c=001=1
//	int d = a | b;//按位或：有1则1，都0则0’即d=111=7
//	int e = a ^ b;//按位异或：对应的二进制位相同则为0，相异则为1，即e=110=6
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}



//赋值操作符(复合赋值符)
//= += -= *= /= &= ^= |= >>= <<=
//int main()
//{
//	int a = 10;
//	a = 20;// =--赋值  ==--判断相等
//	a = a + 10;//等价于a+=10
//	a = a - 20;//d等价于a-=20
//	a = a & 2;//等价于a&=2
//
//	return 0;
//}
 
/*
单目操作符(双目、三目)
!        逻辑反操作
-        负值
+        正值
&        取地址
sizeof   操作数的类型长度（以字节为单位）
~        对一个数的二进制按位取反
--       前置、后置--
++       前置、后置++
*        间接访问操作符(解引用操作符) 
(类型)       强制类型转换*/


//int main()
//{
//	int a = 10;
//	int b = 0;
//	int c = -2;
//	int d = -a;
//	int e = +3;//+--正号都会省略
//	int arr[10] = { 0 };//10个整型元素的数组  10*sizeof(int)=40
//	int sz = 0;
//	 a+b;//+为操作符，两边都有一个操作数，因此为双目操作符
//	printf("%d\n", a);
//	//在c语言中表示真假：0表示假，一切的非零表示真
//	printf("%d\n", !a);//!--逻辑反操作，由于a是真，则！a为假=0（真变假全变成0）
//	printf("%d\n", !b);//由于b是假，则！b为固定值1（假变真全是0变1）
//	printf("%d\n", sizeof(a));//sizeof--计算的是变量类型所占空间的大小，单位是字节
//	printf("%d\n", sizeof(int));//由于a的类型是int，因此两种写法等价
//	printf("%d\n", sizeof a);//sizeof中是变量名的时候，括号可以省略
//	printf("%d\n", sizeof(arr));
//	//计算数组元素的个数：数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}

//int main()
//{
//	int a = 0;     //整型4个字节=32bit位       00000000000000000000000000000000
//	int b = ~a;    //b是有符号的整型，第一位是符号位，0为正，1为负
//	//原码、反码、补码，只要是整数，内存中存储的都是二进制的补码 
//	//原码：直接按照正负写出的二进制序列；原码符号位不变，其余取反，得到反码，反码+1得到补码
//	//~对一个数的二进制按位取反 11111111111111111111111111111111
//	//补码：11111111111111111111111111111111
//	//反码：11111111111111111111111111111110
//	//原码：10000000000000000000000000000001 --> -1
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//正数--原码、反码、补码相同
//	//-2
//	//原码：100000000000000000000000000010
//	//反码：111111111111111111111111111101
//	//补码：111111111111111111111111111110
//	printf("%d", b);//打印的是这个数的原码
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++(a的值先赋给b，a再加1)  //b=10 a=11
//	//int b = ++a;//前置++，先++，在使用(a先加一，再赋值给b)    //a=11 b=11
//	//int b = a--;//后置--，先使用，再--(a的值先赋给b，a再减1)    //b=10 a=9
//	//int b = --a;//前置--，先--，再使用(a先减一，再赋值给b)      //a=9 b=9
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	//int a = 3.14;//报错3.14为double类型
//	int a = (int)3.14;//强制类型转换，将double类型强制转换为int类型
//	printf("%d", a);
//	return 0;
//}

/*
关系操作符
>
>=
<	
<=
!=   用于测试“不相等”
==   用于测试“相等”
*/


/*
逻辑操作符
&& 逻辑与（并且）
|| 逻辑或
*/


//int main()
//{
//	//真--非0   假--0
//	int a = 3;
//	int b = 5;
//	int d = 0;
//	int h = 0;
//	int c = a && b;//都真则真--a为真且b为真，则为真
//	int e = a && d;//有一假则假--a为真但d为假，则为假
//	int f = a || d;//有一真则真
//	int g = d || h;//都假则假
//	printf("c=%d e=%d f=%d g=%d\n", c, e, f, g);
//	return 0;
//}


//条件操作符(三目操作符--有三个操作数)
//exp1 ? exp2 : exp3   exp1为真则执行exp2，为假则执行exp3

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//a>b如果为真，则执行a，为假则执行b
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}



//逗号表达式
//exp1, exp2, exp3, …expN


//下标引用、函数调用和结构成员
//[]() . ->

//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[]--下标引用操作符
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--函数引用操作符
//
//	return 0;;
//}


