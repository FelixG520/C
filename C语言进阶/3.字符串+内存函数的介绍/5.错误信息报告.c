#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>



/*=================================== 1.10 strerror ====================================
char * strerror ( int errnum );


|=============================================|                                            |
| �����ش����룬����Ӧ�Ĵ�����Ϣ��            |
|=============================================|

*/

//#include <errno.h>
//int main()
//{
//	//0 -- No error
//	//1 -- Operation not permitted
//	//2 -- No such file or directory
//	//3 -- No such process
//	//4 -- Interrupted function call
//	//...
//	//char* str1 = strerror(3);//�Ѵ�����ת��������Ӧ�Ĵ�����Ϣ�����������ĵ�ַ
//	//printf("%s\n", str1);
//
//	//char* str1 = strerror(errno);
//	//errno��һ��ȫ�ֵĴ���ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬���Ƶ�errno��
//	FILE* pf = fopen("test.txt", "r");
//	if (pf = NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}