#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


//��Ŀ1����������Test ��������ʲô���Ľ����

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}//p�βΣ����ں����ڲ���Ч��������ռ���˺����󣬾Ͳ�֪�����ռ�������
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//printf("%s\n",str)����д��һ��
//}
//int main()
//{
//	Test();
//	return 0;
//}

//1.���д���������ֱ���������
//2.��������ڴ�й©������
//str��ֵ���ݵ���ʽ��p��p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷŲ����޷��ҵ������Ի�����ڴ�й©



//��ȷ�İ汾1 -- ����ָ��
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��ȷ�İ汾2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//printf("%s\n",str)����д��һ��
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//��Ŀ2����������Test ��������ʲô���Ľ����
//����ջ�ռ�ĵ�ַ������
//char* GetMemory(void)
//{
//	char p[] = "hello world";//�ֲ��������������ֻ���ں����ڲ�ʹ��
//	return p;//��ַȷʵ�����ˣ��������������Ѿ�����ϵͳ�ˣ������������ֵ
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
//
//int* test()
//{
//	//int a = 10;//ջ�� -- ��������
//	static int a = 10;//static��a���뾲̬�� -- ����
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//
//
//int* test()
//{
//	int* ptr = malloc(100);//���� -- ����
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}


//��Ŀ3����������Test ��������ʲô���Ľ����
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//�����ڴ�й¶���⣬û��free
//}
////��
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//�����ڴ�й¶���⣬û��free
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��Ŀ4����������Test ��������ʲô���Ľ����
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	if (str != NULL)
//	{
//		strcpy(str, "world");//����ַ�Ѿ����������ˣ��Ƿ������ڴ�
//		printf(str);
//	}
//}
//��
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}