#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/**************************** 3.1 Ԥ������� **********************************/

//Ԥ�������
//int main()
//{
//	printf("%s\n", __FILE__);//��ǰ�ļ�����·��
//	printf("%d\n", __LINE__);//��ǰ����������
//	printf("%s\n", __DATE__);//��ǰ����
//	printf("%s\n", __TIME__);//��ǰʱ��
//	return 0;
//}


//int main()
//{
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	printf("%s\n", __FUNCTION__);//��ǰ������
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//		        	__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);//�����������ѭANSI C����ֵΪ1������δ����
//	return 0;
//}