#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
3.2.2 #define �����
	#define ���ư�����һ���涨������Ѳ����滻���ı��У�����ʵ��ͨ����Ϊ�꣨macro������
	�꣨define macro��

�����Ǻ��������ʽ��
#define name( parament-list ) stuff
���е� parament-list ��һ���ɶ��Ÿ����ķ��ű����ǿ��ܳ�����stuff�С�


ע�⣺
�����б�������ű�����name���ڡ�
�������֮�����κοհ״��ڣ������б�ͻᱻ����Ϊstuff��һ����
*/

//#define SQUARE(X) X*X
//#define SQUARE_2(X) (X)*(X)
//
//int main()
//{
//	int ret = SQUARE(5);
//	printf("ret = %d\n", ret);//5 * 5=25
//	int ret1 = SQUARE(5+1);
//	printf("ret1 = %d\n", ret1);//5+1 * 5+1=11
//	int ret2 = SQUARE_2(5 + 1);
//	printf("ret2 = %d\n", ret2);//(5+1) * (5+1)=36
//
//	return 0;
//}


//#define DOUBLE(X) X+X
//#define DOUBLE_2(X) (X)+(X)
//#define DOUBLE_3(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//10 * 5+5 = 55
//	printf("%d\n", ret);
//	int ret_2 = 10 * DOUBLE_2(a);//10 * (5)+(5) = 55
//	printf("%d\n", ret_2);
//	int ret_3 = 10 * DOUBLE_3(a);//10 * ((5)+(5)) = 55
//	printf("%d\n", ret_3);
//	return 0;
//}
/*
��ʾ��
�������ڶ���ֵ���ʽ������ֵ�ĺ궨�嶼Ӧ�������ַ�ʽ�������ţ�������ʹ�ú�ʱ���ڲ�����
�Ĳ��������ڽ�������֮�䲻��Ԥ�ϵ��໥���á�
*/