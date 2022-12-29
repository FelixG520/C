#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

/*=================================== 1.5 strncpy ====================================
char * strncpy ( char * destination, const char * source, size_t num );


|===========================================================================================================|
|                                                                                                           |
| ��Copies the first num characters of source to destination. If the end of the source C string             |
|   (which is signaled by a null-character) is found before num characters have been copied,                |
|   destination is padded with zeros until a total of num characters have been written to it.               |
| ������num���ַ���Դ�ַ�����Ŀ��ռ䡣                                                                     |
| �����Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num����                       |
|                                                                                                           |
|===========================================================================================================|

*/

//int main()
//{
//	char arr1[10] = "abcef";
//	char arr2[] = "hello Felix";
//	//strncpy(arr1, arr2, 4);
//
//	char arr3[] = "he";
//	strncpy(arr1, arr3, 6);//���Ȳ���������λ��\0
//	return 0;
//}




/*=================================== 1.6 strncat ====================================
char * strncpy ( char * destination, const char * source, size_t num );


|===========================================================================================================|
|                                                                                                           |
| ��Appends the first num characters of source to destination, plus a terminating null-character.           |
| ��If the length of the C string in source is less than num, only the content up to the terminating        |
|   null-character is copied.                                                                               |
|                                                                                                           |
|===========================================================================================================|

*/

//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxxxxxxxxx";
//	char arr2[] = "world";
//	//strncat(arr1, arr2, 3);
//	strncat(arr1, arr2, 8);//���Ȳ���������λ��\0
//	printf("%s\n", arr1);
//	return 0;
//}


/*=================================== 1.7 strncmp ====================================
int strncmp ( const char * str1, const char * str2, size_t num );


|=================================================================================|
|                                                                                 |
| ���Ƚϵ���������ַ���һ������һ���ַ�����������num���ַ�ȫ���Ƚ��ꡣ           |                                                                                                      |
|                                                                                 |
|=================================================================================|
*/

//int main()
//{
//	const char* p1 = "abcdefghi";
//	char* p2 = "abcqwer";
//	int ret1 = strcmp(p1, p2);
//	int ret2 = strncmp(p1, p2,3);
//	printf("%d %d", ret1, ret2);
//	return 0;
//}
