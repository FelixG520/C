#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//*********************************** 3.1 ö�����͵Ķ��� *********************************

//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - �������ɱ���ֵ
//	male,
//	female = 9,
//	secret
//};
//enum Color
//{
//	red,//0
//	green,//1
//	blue//2
//};
//
//int main()
//{
//	enum Sex s = male;
//	enum Color c = blue;
//	//enum Color c = 2;//����,ֻ����ö�������оٵ�Ԫ��
//	printf("%d %d %d\n", red, green, blue);
//	printf("%d %d %d\n", male, female, secret);
//	return 0;
//}

/*********************************** 3.2 ö�ٵ��ŵ� *********************************
Ϊʲôʹ��ö�٣�
���ǿ���ʹ�� #define ���峣����Ϊʲô��Ҫʹ��ö�٣�
ö�ٵ��ŵ㣺
	1. ���Ӵ���Ŀɶ��ԺͿ�ά����
	2. ��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���
	3. ��ֹ��������Ⱦ����װ��
	4. ���ڵ���
	5. ʹ�÷��㣬һ�ο��Զ���������
*/

//#define RED 0
//#define GREEN 1
//#define BLUE 0
//int main()
//{
//	int color = RED;
//	return 0;
//}