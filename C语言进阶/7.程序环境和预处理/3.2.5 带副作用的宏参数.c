#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
3.2.5 �������õĺ����
��������ں�Ķ����г��ֳ���һ�ε�ʱ������������и����ã���ô����ʹ��������ʱ��Ϳ���
����Σ�գ����²���Ԥ��ĺ���������þ��Ǳ��ʽ��ֵ��ʱ����ֵ�������Ч����
*/

//int main()
//{
//	int a = 10;
//	int b = a + 1;//����������
//	int c = ++a;//���и�����
//	return 0;
//}

//MAX�����֤�����и����õĲ��������������
//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a, b);//11
//	printf("%d\n", max);
//	//int max = ((a++) > (b++) ? (a++) : (b++));//max = 12,��ߵ�b++ִ�У���ʱb=13
//	int max2 = MAX(a++, b++);
//	printf("%d\n", max2);//12
//	printf("a = %d\n", a);//11
//	printf("b = %d\n", b);//13
//	return 0;
//}