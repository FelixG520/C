#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/************************* 7.1 ������ʹ�õ�feof ****************************
�μǣ����ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ������
����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β������
	1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�Ϊ EOF �� fgetc �������� NULL �� fgets ��
		���磺
			��fgetc �ж��Ƿ�Ϊ EOF .
			��fgets �жϷ���ֵ�Ƿ�Ϊ NULL .
	2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
		���磺
			��fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����

*/

//int main()
//{
//	//strerror -- �Ѵ����Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	printf("%s\n", strerror(errno));
//	
//	//perror
//	FILE* pf = fopen("text7_no_exist.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe"); //hehe: No such file or directory
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// 

//int main()
//{
//	int c; // ע�⣺int����char��Ҫ����EOF
//	FILE* fp = fopen("text7_no_exist.txt", "r");
//	if (!fp) 
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//	return 0;
//}