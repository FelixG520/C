#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
函数 如果他的参数符合下列条件就返回真
	iscntrl  任何控制字符
	isspace  空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
	isdigit  十进制数字 0~9
	isxdigit 十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F
	islower  小写字母a~z
	isupper  大写字母A~Z
	isalpha  字母a~z或A~Z
	isalnum  字母或者数字，a~z, A~Z, 0~9
	ispunct  标点符号，任何不属于数字或者字母的图形字符（可打印）
	isgraph  任何图形字符
	isprint  任何可打印字符，包括图形字符和空白字符
*/  

//#include <ctype.h>
//int main()
//{
//	char ch = 'w';
//	int ret = islower(ch);
//	int ret2 = isdigit(2);
//	printf("%d\n", ret2);
//	return 0;
//}