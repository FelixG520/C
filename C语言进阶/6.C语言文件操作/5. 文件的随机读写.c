#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// fseek -- �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ�롣
//int fseek ( FILE * stream, long int offset, int origin );
//                                    ƫ����      �ļ�ָ��ĵ�ǰλ��

//int main()
//{
//	FILE* pf = fopen("test5.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);//���ʼ��λ��ƫ��
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	fseek(pf, -2, SEEK_END);//�ӽ�β��λ��ƫ��
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	return 0;
//}

//ftell -- �����ļ�ָ���������ʼλ�õ�ƫ����
//long int ftell ( FILE * stream );

//int main()
//{
//	FILE* pf = fopen("test5.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);//���ʼ��λ��ƫ��
//	int pos = ftell(pf);//�ļ�ָ���������ʼλ�õ�ƫ����
//	printf("%d\n", pos);
//	fclose(pf);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test5.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int pos = ftell(pf);//�ļ�ָ���������ʼλ�õ�ƫ����
//	printf("%d\n", pos);
//	fclose(pf);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test5.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgetc(pf);//��ȡһ���ַ���pf���ƫ��1
//	int pos = ftell(pf);//�ļ�ָ���������ʼλ�õ�ƫ����
//	printf("%d\n", pos);
//	fclose(pf);
//	return 0;
//}


//rewind -- ���ļ�ָ���λ�ûص��ļ�����ʼλ��
//void rewind ( FILE * stream );

//int main()
//{
//	FILE* pf = fopen("test5.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);//��ȡһ���ַ���pf���ƫ��1
//	printf("%c\n", ch);
//	rewind(pf);//���ļ�ָ���λ�ûص��ļ�����ʼλ��
//	int ch2 = fgetc(pf);
//	printf("%c\n", ch2);
//	fclose(pf);
//	return 0;
//}