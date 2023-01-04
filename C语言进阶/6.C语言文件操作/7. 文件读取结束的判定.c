#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/************************* 7.1 被错误使用的feof ****************************
牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。
	1. 文本文件读取是否结束，判断返回值是否为 EOF （ fgetc ），或者 NULL （ fgets ）
		例如：
			·fgetc 判断是否为 EOF .
			·fgets 判断返回值是否为 NULL .
	2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
		例如：
			·fread判断返回值是否小于实际要读的个数。

*/

//int main()
//{
//	//strerror -- 把错误对应的错误信息的字符串地址返回
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
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("text7_no_exist.txt", "r");
//	if (!fp) 
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//	return 0;
//}