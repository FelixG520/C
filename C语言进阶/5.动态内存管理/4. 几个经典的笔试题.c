#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


//��Ŀ1��

////void GetMemory(char* p)
////{
////	p = (char*)malloc(100);
////}//p�βΣ����ں����ڲ���Ч��������ռ���˺����󣬾Ͳ�֪�����ռ�������
////void Test(void)
////{
////	char* str = NULL;
////	GetMemory(str);
////	strcpy(str, "hello world");
////	printf(str);//printf("%s\n",str)����д��һ��
////}
////int main()
////{
////	Test();
////	return 0;
////}

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
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);//printf("%s\n",str)����д��һ��
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}