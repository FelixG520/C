#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
/**************************** 3.1 预定义符号 **********************************/

//预定义符号
//int main()
//{
//	printf("%s\n", __FILE__);//当前文件所在路径
//	printf("%d\n", __LINE__);//当前代码所在行
//	printf("%s\n", __DATE__);//当前日期
//	printf("%s\n", __TIME__);//当前时间
//	return 0;
//}


//int main()
//{
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	printf("%s\n", __FUNCTION__);//当前函数名
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
//	printf("%d\n", __STDC__);//如果编译器遵循ANSI C，其值为1，否则未定义
//	return 0;
//}