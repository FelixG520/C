#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组名为首元素地址
//	printf("%d\n", sz);//1
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);//arr作为首地址打印字符串，直接打印一串
//	printf("%s\n", pc);//p作为首地址打印字符串，直接打印一串
//	char* p = "abcdef";//"abcdef"是一个常量字符串，其实存的是首元素a的地址
//	printf("%c\n", *p);//*p从首地址取出指针指向的’a’，打印出a
//	printf("%s\n", p); //p作为首地址打印字符串，直接打印一串，p是指针，*p是字符a
//	*p = 'w';//"abcdef"是一个常量字符串,是不能修改的，不输出，但不会报错
//	const char* p = "abcdef";//最正确的写法，const把p锁住，想改都改不了，如果有修改，直接报错
//	printf("%s\n", p);
//	return 0;
//}

//面试题
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcdef";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)//首元素地址当然不相同
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	//字符串一样用同一个地址！！！
//	//这两个指针只是指向的地址一样，不代表这两个指针本身地址一样
//	if (str3 == str4)//"hello bit."常量字符串不能修改，为了节省空间只存储一份，p1和p2都指向同一个地址
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//回顾总结
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	char* p2 = "abcdef";//把字符串赋值给p2时，实际上是把字符串首字符的地址赋给了p2，字符串的内容是不允许被修改的
//	const char* p2 = "abcdef";//是最合理的方式，const锁定p2所指的内容不能被修改
//	return 0;
//}