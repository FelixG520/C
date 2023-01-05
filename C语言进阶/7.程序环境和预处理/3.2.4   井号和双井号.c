#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//3.2.4    #和##
//如何把参数插入到字符串中？


//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", a);
//	print(a);//the value of a is 10
//	print(b);//the value of a is 20  ?
//	return 0;
//}


//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//int main()
//{
//	printf("hello world\n");
//	printf("hello " "world\n");
//	printf("he" "llo " "world\n");
//
//	int a = 10;
//	int b = 20;
//	// #X == "X"
//	PRINT(a);//the value of a is 10
//	printf("the value of " "a" " is %d\n", a);
//	PRINT(b);//the value of b is 20
//	printf("the value of " "b" " is %d\n", b);
//	return 0;
//}

/*
## 的作用
	##可以把位于它两边的符号合成一个符号。
	它允许宏定义从分离的文本片段创建标识符。
*/

//#define CAT(X,Y) X##Y
//int main()
//{
//	int bigdata2 = 2019;
//	printf("%d\n", bigdata2);
//	printf("%d\n", CAT(bigdata,2));//bigdata##2 == bigdata2
//	return 0;
//}