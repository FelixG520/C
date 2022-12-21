#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("abc\ndef");
//	//c语言转义字符
//	printf("%d",strlen("c:\test\040\teat.c"));
//	//   \t -- tab -- 水平制表符
//	//   \041 -- \ddd d是8进制数字
//	//   以33作为ASCII码值代表的字符
//	printf("%c\n", '\041');
//	return 0;
//}


//int main()
//{
//    //sizeof - 操作符 - 不是函数,可以不加括号
//    //sizeof(int)
//    int a1 = 10;
//    printf("%d\n",sizeof(int));
//    printf("%d\n", sizeof (a1));
//    printf("%d\n", sizeof a1);
//    int a = sizeof(short int);
//    int b = sizeof(int);
//    int c = sizeof(long int);
//    int d = sizeof(long long int);
//    printf("The size of short is %d bytes.\n", a);
//    printf("The size of int is %d bytes.\n", b);
//    printf("The size of long is %d bytes.\n", c);
//    printf("The size of long long is %d bytes.\n", d);
//    return 0;
//}

//int main()
//{
//	printf("%d\n", 100);//%d -- 整形
//	printf("%c\n", 100);//%c -- 字符 100输出ASCII值
//	printf("%s\n", "abcdef");//%s -- 打印字符串
//	int a = 10;
//	printf("%p\n", &a);//取地址
//	printf("%x\n", &a);//16进制取地址
//	printf("0%o 0X%X",1234,1234);
//	return 0;
//}
//https://zh.cppreference.com/w/c/io/fscanf 更多格式控制

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b = a % 10;
//	int c = a/10 % 10;
//	int d = a/100 % 10;
//	int e = a/1000 % 10;
//	printf("%d%d%d%d", b,c,d,e);
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while(n!=0)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	ch = ch + 32;
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch ;
//	//EOF -- end of file
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		//putchar(ch + 32);
//		getchar();//清理“\n”--回车
//	}
//	return 0;
//}

//输入缓冲区的概念
//getchar() 会读取回车
//scanf()   不会读取回车

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：%s",password);
//	scanf("%s", &password);
//	printf("请确认（Y/N）:");
//	getchar();//处理缓冲区的\n
//
//	int ch = getchar();//
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}