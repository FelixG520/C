#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// fseek -- 根据文件指针的位置和偏移量来定位文件指针。
//int fseek ( FILE * stream, long int offset, int origin );
//                                    偏移量      文件指针的当前位置

//int main()
//{
//	FILE* pf = fopen("test5.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf, 2, SEEK_CUR);//从最开始的位置偏移
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	fseek(pf, -2, SEEK_END);//从结尾的位置偏移
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	return 0;
//}