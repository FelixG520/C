#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//������Ϊ��Ԫ�ص�ַ
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
//	printf("%s\n", arr);//arr��Ϊ�׵�ַ��ӡ�ַ�����ֱ�Ӵ�ӡһ��
//	printf("%s\n", pc);//p��Ϊ�׵�ַ��ӡ�ַ�����ֱ�Ӵ�ӡһ��
//	char* p = "abcdef";//"abcdef"��һ�������ַ�������ʵ�������Ԫ��a�ĵ�ַ
//	printf("%c\n", *p);//*p���׵�ַȡ��ָ��ָ��ġ�a������ӡ��a
//	printf("%s\n", p); //p��Ϊ�׵�ַ��ӡ�ַ�����ֱ�Ӵ�ӡһ����p��ָ�룬*p���ַ�a
//	*p = 'w';//"abcdef"��һ�������ַ���,�ǲ����޸ĵģ�������������ᱨ��
//	const char* p = "abcdef";//����ȷ��д����const��p��ס����Ķ��Ĳ��ˣ�������޸ģ�ֱ�ӱ���
//	printf("%s\n", p);
//	return 0;
//}

//������
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcdef";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)//��Ԫ�ص�ַ��Ȼ����ͬ
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	//�ַ���һ����ͬһ����ַ������
//	//������ָ��ֻ��ָ��ĵ�ַһ����������������ָ�뱾���ַһ��
//	if (str3 == str4)//"hello bit."�����ַ��������޸ģ�Ϊ�˽�ʡ�ռ�ֻ�洢һ�ݣ�p1��p2��ָ��ͬһ����ַ
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//�ع��ܽ�
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	char* p2 = "abcdef";//���ַ�����ֵ��p2ʱ��ʵ�����ǰ��ַ������ַ��ĵ�ַ������p2���ַ����������ǲ������޸ĵ�
//	const char* p2 = "abcdef";//�������ķ�ʽ��const����p2��ָ�����ݲ��ܱ��޸�
//	return 0;
//}