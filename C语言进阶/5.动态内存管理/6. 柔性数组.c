#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// struct S
//{
//	int i;
//	int a[0];//���������Ա
//};
//��Щ�������ᱨ���޷�������Ըĳɣ�
//struct S
//{
//	int n;
//	int arr[];//���������Ա,����Ĵ�С�ǿ��Ե�����
//};


/*
����������ص㣺
���ṹ�е����������Աǰ���������һ��������Ա��
��sizeof ���ص����ֽṹ��С����������������ڴ档
���������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�
  С������Ӧ���������Ԥ�ڴ�С��
*/ 

//���������ʹ��
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//4,�������鲻�����ڴ����
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0,1,2,3,4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (int i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//ʵ�ֺ���������һ����Ч��
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	//������С
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (int i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	//�ͷ��ڴ�
//	free(ps->arr);
//	free(ps);
//	ps->arr = NULL;
//	ps = NULL;
//	return 0;
//}


//1.����ʹ��malloc,freeҲҪ���Σ�����Ҫע��˳��
//2.���������ȡЧ�ʸߣ��Լ�ʵ�ֵ�Ч�ʵ͡�

//�������������
/*
��һ���ô��ǣ������ڴ��ͷ�
������ǵĴ�������һ���������õĺ����У������������˶����ڴ���䣬���������ṹ�巵�ظ�
�û����û�����free�����ͷŽṹ�壬�����û�����֪������ṹ���ڵĳ�ԱҲ��Ҫfree��������
����ָ���û�����������¡����ԣ�������ǰѽṹ����ڴ��Լ����ԱҪ���ڴ�һ���Է����
�ˣ������ظ��û�һ���ṹ��ָ�룬�û���һ��free�Ϳ��԰����е��ڴ�Ҳ���ͷŵ���
�ڶ����ô��ǣ����������ڷ����ٶ�.
�������ڴ���������߷����ٶȣ�Ҳ�����ڼ����ڴ���Ƭ������ʵ���Ҹ��˾���Ҳû����ˣ�����
���ܲ���Ҫ����ƫ�����ļӷ���Ѱַ��
*/  

