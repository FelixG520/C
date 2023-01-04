#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
/*
功能				函数名		适用于
字符输入函数		fgetc		所有输入流
字符输出函数	    fputc		所有输出流
文本行输入函数	    fgets		所有输入流
文本行输出函数		fputs		所有输出流
格式化输入函数		fscanf		所有输入流
格式化输出函数		fprintf		所有输出流
二进制输入			fread		文件
二进制输出			fwrite		文件
*/   

//fputc
//int main()
//{
//	FILE* pfWrite = fopen("test4.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('a', pfWrite);
//	fputc('b', pfWrite);
//	fputc('c', pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//fgetc
//int main()
//{
//	FILE* pfRead = fopen("test4.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

/*
从键盘输入
输出到屏幕
键盘&屏幕都是外部设备

键盘 -- 标准输入设备 -- stdin -- FILE*
屏幕 -- 标准输出设备 -- stdout -- FILE*
是一个程序默认打开的两个流设备
*/

//int main()
//{
//	//可以读取标准输入设备，并在标准输出设备上输出
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


//fgets -- char *fgets( char *string, int n, FILE *stream );
//int main()
//{
//	char arr[1024]= {0};
//	FILE* pf = fopen("test4.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(arr,1024,pf);
//	printf("%s", arr);
//	fgets(arr, 1024, pf);
//	printf("%s", arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//puts
//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("test4.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(arr, 1024, pf);
//	puts(arr);//puts自动换行
//	fgets(arr, 1024, pf);
//	puts(arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fputs -- int fputs( const char *string, FILE *stream );
//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("test4_2.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件fputs -- 不会自动换行
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	//从键盘读取一行信息
//	fgets(buf, 1024, stdin);//从标准输入读取
//	fputs(buf, stdout);//输出到标准输出流
//
//	//和这种写法等价
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//fprintf -- int fprintf( FILE *stream, const char *format [, argument ]...);
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"hello" };
//	FILE* pf = fopen("test4_3.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fscanf -- int fscanf( FILE *stream, const char *format [, argument ]... );
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test4_3.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	//格式化的输入数据
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout,"%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}
//scanf是从键盘输入,fscanf是从文本输入，fprintf是写到文本 , printf是写到屏幕



//sscanf -- int sscanf(const char* buffer, const char* format[, argument] ...);
//sprintf -- int sprintf( char *buffer, const char *format [, argument] ... );

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

/*
4.1 对比一组函数：
scanf / fscanf / sscanf
printf / fprintf / sprintf
这里演示讲解这句函数的使用和对比
*/
/*
scanf和printf   是针对标准输入流和标准输出流的格式化输入/输出语句
fscanf和fprintf 是针对所有输入流和所有输出流的格式化输入/输出语句
sscanf和sprintf sscanf是从字符串中读取格式化的数据
                sprintf是把格式化数据输出成（存储到）字符串
*/



//fwrite -- size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
//struct S
//{
//    char name[20];
//    int age;
//    double score;
//};
//int main()
//{
//    struct S s = { "张三",20,55.6 };
//    FILE* pf = fopen("test4_4.txt", "wb");//“wb”（只写） 为了输出数据，打开一个二进制文件
//    if (pf == NULL)
//    {
//        return 0;
//    }
//    //二进制形式写文件
//    fwrite(&s, sizeof(struct S), 1, pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//fread -- size_t fread( void *buffer, size_t size, size_t count, FILE *stream );
//int main()
//{
//    struct S tmp = { 0 };
//    FILE* pf = fopen("test4_4.txt", "rb");//“rb”（只读） 为了输入数据，打开一个二进制文件
//    if (pf == NULL)
//    {
//        return 0;
//    }
//    //二进制形式读文件
//    fread(&tmp, sizeof(struct S), 1, pf);
//    printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

