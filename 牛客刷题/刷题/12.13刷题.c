#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}

//域宽%md -- m个空格
//int main()
//{
//	printf("%d\n", 15);
//	printf("%1d\n", 15);
//	printf("%4d\n", 15);
//	printf("%15d\n",0xABCDEF);
//	return 0;
//}

//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n");
//	printf("%d", ret);//返回的是printf中字符的个数
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//43  2  1
//	return 0;
//}


//int main()
//{
//	int score;
//	float C;
//	float math;
//	float English;
//	scanf("%d;%f,%f,%f", &score, &C, &math, &English);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", score, C, math, English);
//	//%.2f  输出两位小数    %f -- 默认输出6位小数
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//getchar()获取一个字符，让整形接受ASCII码值
//	while ((ch = getchar()) != EOF)
//	{
//		//判断字母
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		//清理\n
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	//输入
//	char n;
//	scanf("%c", &n);
//	//输出
//	int i=0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < 5-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印1
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ",n);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0 ; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int year, month, day;
//	scanf("%4d%2d%2d", &year, &month, &day);//%4d -- 制定域宽，表示取4位
//	printf("year=%d\nmonth=%02d\ndate=%02d",year,month,day);//%02d,保留两位，不够补0
//	return 0;
//
//}

//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		printf("%d\n", 1 << n);//左移操作符<<
//	}
//	return 0;
//}

//int main()
//{
//	int i,n,num=1;
//	scanf("%d", &n);
//	for (i = 0;i<n;i++)
//	{
//		num *= 2;
//	}
//	printf("%d\n", num);
//	return 0;
//}