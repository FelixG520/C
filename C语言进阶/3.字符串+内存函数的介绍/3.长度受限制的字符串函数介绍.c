#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

/*=================================== 1.5 strncpy ====================================
char * strncpy ( char * destination, const char * source, size_t num );


|===========================================================================================================|
|                                                                                                           |
| ·Copies the first num characters of source to destination. If the end of the source C string             |
|   (which is signaled by a null-character) is found before num characters have been copied,                |
|   destination is padded with zeros until a total of num characters have been written to it.               |
| ·拷贝num个字符从源字符串到目标空间。                                                                     |
| ·如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个。                       |
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
//	strncpy(arr1, arr3, 6);//长度不够，其余位补\0
//	return 0;
//}




/*=================================== 1.6 strncat ====================================
char * strncpy ( char * destination, const char * source, size_t num );


|===========================================================================================================|
|                                                                                                           |
| ·Appends the first num characters of source to destination, plus a terminating null-character.           |
| ·If the length of the C string in source is less than num, only the content up to the terminating        |
|   null-character is copied.                                                                               |
|                                                                                                           |
|===========================================================================================================|

*/

//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxxxxxxxxx";
//	char arr2[] = "world";
//	//strncat(arr1, arr2, 3);
//	strncat(arr1, arr2, 8);//长度不够，其余位补\0
//	printf("%s\n", arr1);
//	return 0;
//}


/*=================================== 1.7 strncmp ====================================
int strncmp ( const char * str1, const char * str2, size_t num );


|=================================================================================|
|                                                                                 |
| ·比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完。           |                                                                                                      |
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
