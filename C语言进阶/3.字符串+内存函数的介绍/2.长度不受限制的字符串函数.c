#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

/*=================================== 1.2 strcpy ====================================
char* strcpy(char* destination, const char* source);

|===========================================================================================================|
|                                                                                                           |
| ��Copies the C string pointed by source into the array pointed by destination, including the              |
|   terminating null character (and stopping at that point).                                                |
| ��Դ�ַ��������� '\0' ������                                                                              |
| ���ὫԴ�ַ����е� '\0' ������Ŀ��ռ�.                                                                   |
| ��Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����                                                              |
| ��Ŀ��ռ����ɱ䡣                                                                                      |
| ��ѧ��ģ��ʵ��                                                                                            |
|                                                                                                           |
|===========================================================================================================|

*/

//ģ��ʵ��strcpy
//char* my_strcpy(char* dest, const char* src)//Ŀ�ĵص�����Ҫ�����仯��Դͷ���ݲ������仯
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;//����\0
//	
//	//����srcָ����ַ�����destֻ��Ŀռ䣬����'\0'
//	while (*dest = *src)
//	{
//		;
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//
//	//�����ʾ��
//	//char* p = "abcdegghi";//pָ����ǳ����ַ��������ݲ����޸�
//	//char arr[] = { 'a','b','c' };//Ҫ��\0
//
//	char arr2[] = "Felix";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	return 0;
//}


/*=================================== 1.3 strcat ====================================
char * strcat ( char * destination, const char * source );


|===========================================================================================================|
|                                                                                                           |
| ��Appends a copy of the source string to the destination string. The terminating null character           |
|   in destination is overwritten by the first character of source, and a null-character is included        |
|   at the end of the new string formed by the concatenation of both in destination.                        |
| ��Դ�ַ��������� '\0' ������                                                                              |
| ���ὫԴ�ַ����е� '\0' ������Ŀ��ռ�.                                                                   |
| ��Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����                                                              |
| ��Ŀ��ռ����ɱ䡣                                                                                      |
| ���ַ����Լ����Լ�׷�ӣ���Σ�                                                                            |
|                                                                                                           |
|===========================================================================================================|

*/
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//assert(dest && src)
//	//1.�ҵ�Ŀ���ַ�����\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++);
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdefghi";
//	char arr[30] = "abcdefghi\0xxxxxxxxxxxxx";
//	char arr2[] = "Felix";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	strcat(arr, arr2);
//	printf("%s\n%s\n", arr1,arr);
//	return 0;
//}


/*=================================== 1.4 strcmp ====================================
int strcmp ( const char * str1, const char * str2 );


|===========================================================================================================|
|                                                                                                           |
| ��This function starts comparing the first character of each string. If they are equal to each            |
|   other, it continues with the following pairs until the characters differ or until a terminating         |
|   null-character is reached.                                                                              |
| ����׼�涨��                                                                                              |
|	����һ���ַ������ڵڶ����ַ������򷵻ش���0������.                                                      |
|	����һ���ַ������ڵڶ����ַ������򷵻�0                                                                 |
|	����һ���ַ���С�ڵڶ����ַ������򷵻�С��0������                                                       |
|	����ô����ж������ַ�����                                                                              |
|                                                                                                           |
|===========================================================================================================|

*/

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//	//return(*str1 - *str2);
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "squer";
//	//int ret = strcmp(p1, p2);//�ȵ��Ƕ�Ӧ�ַ�ASCII��ֵ
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}
