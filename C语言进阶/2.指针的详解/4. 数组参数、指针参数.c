#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>

////4.1һά���鴫��
//void test(int arr[])//test(arr)����
//{}
//void test(int arr[10])//10����ʡ�ԣ�test(arr)����
//{}
//void test(int* arr)//test(arr)����
//{}
//void test2(int* arr[20])//20����ʡ�ԣ�test2(arr2)����
//{}
//void test2(int** arr)//test2(arr2)���ԣ��͵�3�����ƣ� -- һ��ָ��ĵ�ַ���ŵ�����ָ��
//{}
//int main()
//{
//	int arr[10] = { 0 };//������ε�����
//	int* arr2[20] = { 0 };//���ָ�������
//	test(arr);
//	test2(arr2);
//}
//
//
////4.2��ά���鴫��
//void test(int arr[3][5])//test(arr)���� -- ���뱣���봫�������һ��
//{}
//void test(int arr[][])//test(arr)������ -- ��ά���飬����ʡ���У�������ʡ����
//{}
//void test(int arr[][5])//test(arr)������ -- ��ά���鴫�Σ��п���ʡ��
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//
//
//
//void test(int* arr)//test(arr)���ԣ�arr�����������͵�ָ�룬���ǵ�һ��Ԫ�صĵ�ַ
//{}
//void test(int* arr[5])//test(arr)���� -- ָ������
//{}
//void test(int(*arr)[5])//test(arr)�ԣ�arr�ǵ�һ��Ԫ�صĵ�ַ����5��Ԫ��
//{}
//void test(int** arr)//test(arr)���ԣ������ַ���ɷŵ�����ָ�룬����ָ�����������һ��ָ������ĵ�ַ
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//��ά���飬��ʱarr�ǵ�һ��Ԫ�صĵ�ַ
//}
//
////4.3 һ��ָ�봫��
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}
//
////��һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô������
////test1�����ܽ���ʲô������
////test2�����ܽ���ʲô������
//void test1(int* p)
//{}
//void test2(char* p)
//{}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//����
//	test1(p1);//����
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//����
//	test2(pc);//����
//	return 0;
//}
//
////4.4 ����ָ�봫��
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
////˼����
////�������Ĳ���Ϊ����ָ���ʱ�򣬿��Խ���ʲô������
//void test(char** p)
//{
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);//һ��ָ������ĵ�ַ
//	test(ppc);//����ָ��
//	test(arr);//����������Ԫ�ص�ַ��arr��ָ�����飬��һ��Ԫ����ָ��
//	return 0;
//}

