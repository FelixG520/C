#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
���� ������Ĳ����������������ͷ�����
	iscntrl  �κο����ַ�
	isspace  �հ��ַ����ո� ������ҳ��\f��������'\n'���س���\r�����Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
	isdigit  ʮ�������� 0~9
	isxdigit ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F
	islower  Сд��ĸa~z
	isupper  ��д��ĸA~Z
	isalpha  ��ĸa~z��A~Z
	isalnum  ��ĸ�������֣�a~z, A~Z, 0~9
	ispunct  �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
	isgraph  �κ�ͼ���ַ�
	isprint  �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�
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