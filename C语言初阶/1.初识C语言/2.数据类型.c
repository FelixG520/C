#include <stdio.h>


/*
数据类型
char        //字符数据类型
short       //短整型
int         //整型
long        //长整型
long long   //更长的整形
float       //单精度浮点数--6位有效数字
double      //双精度浮点数-15位有效数字
 */


// char-字符数据类型
//int main()
//{
//	char ch = 'A';      //内存
//	printf("%c\n", ch);  //%c--打印字符格式的数据
//	return 0;
//}

// int-整型
//int main()
//{
//	int age = 20;  //向内存申请4个字节=32bit存放20
//	printf("%d\n", age);  //%d--打印整型十进制数据
//	return 0;
//}

//1ong-长整型
//int main()
//{
//	long num = 100;       
//	printf("%d\n", num);  
//	return 0;
//}

//float-单精度浮点数
//int main()
//{
//	float f = 5.0;     
//	printf("%f\n", f);  //%f--float型输入用%f
//	return 0;
//}

//double-双精度浮点数
//int main()
//{
//	double d = 3.14;     
//	printf("%lf\n", d);  //%lf--double型输入用%lf 
//	return 0;
//}
//short int-短整型

 /* 
 %d-打印整型
 %c-打印字符
 %f-打印浮点数字-打小数
 %lf-double型输入用%lf 
 %p-以地址的形式打印 
 %x-打印16进制数字





计算机中的单位
1bit-比特位-只能存储二进制数字1/0
1byte-8bit
1KB-1024bit
1MB-1024KB
1GB-1024MB
1TB-1024GB
1PB-1024TB

二进制 0 1
十进制 0 1 2 3 4 5 6 7 8 9
八进制 0 1 2 4 5 6 7

*/



//每种类型的大小是多少？
//sizeof(char)计算char这种类型向内存能够申请多大的空间
//int main()
//{
//	printf("%d\n", sizeof(char));        //1byte=4bit   可以表示2^4-1=15种数字
//	printf("%d\n", sizeof(short));       //2byte=8byte  可以表示2^8-63种数字
//	printf("%d\n", sizeof(int));         //4byte=32bit  可以表示2^32-1种数字
//	printf("%d\n", sizeof(long));        //4 or 8  C语言标准规定long类型sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));   //8
//	printf("%d\n", sizeof(float));       //4
//	printf("%d\n", sizeof(double));      //8
//	printf("%d\n", sizeof(long double)); //8
//	return 0;
//}

//为什么出现这么的类型？
//  节省内存
//  例如int age = 20，int向内存申请的空间可以表示=2^32-1种数字
//       但是shor类型向内存申请的空间可以表达2^16-1种数字


//int main()
//{
//	short age = 20; //向内存申请2个字节=16bit位，用来存放20
//	float weight = 95.6f;   //向内存申请4个字节，存放小数。С语言默认double类型，加上f变成float类型
//
//	return 0;
//}

