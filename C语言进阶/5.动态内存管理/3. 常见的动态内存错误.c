#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

//1.�Կ�ָ����н����ò���
//int main()
//{
//	int* p = (int*)malloc(40);
//	//��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
//	if (p == NULL)//���һ��Ҫ�����ж�
//		{
//			//��ӡ����ԭ���һ����ʽ
//			printf("%s\n", strerror(errno));
//		}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.�Զ�̬�����ڴ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(5*sizeof(int));//����5��int
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)//����10��int��Խ�����
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;//a����ջ�����ٵģ����ᱻ�ͷ�
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}


//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if(p=NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;//p�����仯����ʱ����ͷ�p,�Ѿ�����ԭ����pָ��Ŀռ�
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//5.��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if(p=NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//free(p);
//	//free(p);//����ͷſռ� -- ����������������NULL�Ϳ��Ա������ͷŵ��±��������
//	
//	free(p);
//	p = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}

//6.��̬�����ڴ������ͷţ��ڴ�й©�� -- ����Ҫ
//#include <windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}
//	return 0;
//}

