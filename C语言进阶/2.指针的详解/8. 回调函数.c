#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��
�����������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú���
��ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���������
����Ӧ��
*/   

//void menu()
//{
//	printf("*************************\n");
//	printf(" 1:add             2:sub \n");
//	printf(" 3:mul             4:div \n");
//	printf(" 5:XOR             0.exit\n");
//	printf("*************************\n");
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//int XOR(int x, int y)
//{
//	return x ^ y;
//}

//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			printf("ret = %d\n", Add(x, y));
//			break;
//		case 2:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			printf("ret = %d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			printf("ret = %d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			printf("ret = %d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//�ظ�����̫�࣬��ô�������
//void Calc(int(*pf)(int,int))
//{
//	int x, y;
//	printf("�����������");
//	scanf("%d %d", &x, &y);
//	printf("ret = %d\n", pf(x, y));
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(XOR);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("Hello world");
//  (*p)("Hello world");//���Բ�������
//}
//int main()
//{
//	test(print);
//	return 0;
//}






