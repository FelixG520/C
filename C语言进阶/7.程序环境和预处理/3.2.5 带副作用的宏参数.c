#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
3.2.5 带副作用的宏参数
当宏参数在宏的定义中出现超过一次的时候，如果参数带有副作用，那么你在使用这个宏的时候就可能
出现危险，导致不可预测的后果。副作用就是表达式求值的时候出现的永久性效果。
*/

//int main()
//{
//	int a = 10;
//	int b = a + 1;//不带副作用
//	int c = ++a;//带有副作用
//	return 0;
//}

//MAX宏可以证明具有副作用的参数所引起的问题
//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a, b);//11
//	printf("%d\n", max);
//	//int max = ((a++) > (b++) ? (a++) : (b++));//max = 12,后边的b++执行，此时b=13
//	int max2 = MAX(a++, b++);
//	printf("%d\n", max2);//12
//	printf("a = %d\n", a);//11
//	printf("b = %d\n", b);//13
//	return 0;
//}