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

//���%md -- m���ո�
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
//	printf("%d", ret);//���ص���printf���ַ��ĸ���
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
//	//%.2f  �����λС��    %f -- Ĭ�����6λС��
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//getchar()��ȡһ���ַ��������ν���ASCII��ֵ
//	while ((ch = getchar()) != EOF)
//	{
//		//�ж���ĸ
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		//����\n
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	//����
//	char n;
//	scanf("%c", &n);
//	//���
//	int i=0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j < 5-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ1
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
//	scanf("%4d%2d%2d", &year, &month, &day);//%4d -- �ƶ������ʾȡ4λ
//	printf("year=%d\nmonth=%02d\ndate=%02d",year,month,day);//%02d,������λ��������0
//	return 0;
//
//}

//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		printf("%d\n", 1 << n);//���Ʋ�����<<
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