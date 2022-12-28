#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
/*
·求字符串长度
		strlen
·长度不受限制的字符串函数
		strcpy
		strcat
		strcmp
·长度受限制的字符串函数介绍
		strncpy
		strncat
		strncmp
·字符串查找
		strstr
		strtok
·错误信息报告
		strerror
·字符操作
·内存操作函数
		memcpy
		memmove
		memset
		memcmp
*/ 



/*
0. 前言
C语言中对字符和字符串的处理很是频繁，但是C语言本身是没有字符串类型的，字符串通常放在
常量字符串 中或者 字符数组 中。
字符串常量 适用于那些对它不做修改的字符串函数.
*/  

/*=================================== 1.1 strlen ====================================
size_t strlen(const char* str);
size_t == unsigned int

  |===============================================================================================================|
  |                                                                                                               |         
  | ·字符串以 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包含 '\0' )。           |
  | ·参数指向的字符串必须要以 '\0' 结束。                                                                        | 
  | ·注意函数的返回值为size_t，是无符号的（ 易错 ）                                                              |
  | ·学会strlen函数的模拟实现                                                                                    | 
  |                                                                                                               |
  |===============================================================================================================|

*/

//模拟实现strlen
//my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen是无符号数
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


/*=================================== 1.2 strcpy ====================================
char* strcpy(char* destination, const char* source);

|===========================================================================================================|
|                                                                                                           |
| ·Copies the C string pointed by source into the array pointed by destination, including the              |
|   terminating null character (and stopping at that point).                                                |
| ·源字符串必须以 '\0' 结束。                                                                              |
| ·会将源字符串中的 '\0' 拷贝到目标空间.                                                                   |
| ·目标空间必须足够大，以确保能存放源字符串。                                                              |  
| ·目标空间必须可变。                                                                                      |
| ·学会模拟实现                                                                                            |
|                                                                                                           | 
|===========================================================================================================|

*/

//模拟实现strcpy
//char* my_strcpy(char* dest, const char* src)//目的地的数据要发生变化，源头数据不发生变化
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
//	//*dest = *src;//拷贝\0
//	
//	//拷贝src指向的字符串到dest只想的空间，包含'\0'
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
//	//错误的示范
//	//char* p = "abcdegghi";//p指向的是常量字符串，内容不可修改
//	//char arr[] = { 'a','b','c' };//要有\0
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
| ·Appends a copy of the source string to the destination string. The terminating null character           |
|   in destination is overwritten by the first character of source, and a null-character is included        |
|   at the end of the new string formed by the concatenation of both in destination.                        |
| ·源字符串必须以 '\0' 结束。                                                                              |
| ·会将源字符串中的 '\0' 拷贝到目标空间.                                                                   |
| ·目标空间必须足够大，以确保能存放源字符串。                                                              |
| ·目标空间必须可变。                                                                                      |
| ·字符串自己给自己追加，如何？                                                                            |
|                                                                                                           |
|===========================================================================================================|

*/
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//assert(dest && src)
//	//1.找到目的字符串的\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
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
| ·This function starts comparing the first character of each string. If they are equal to each            |
|   other, it continues with the following pairs until the characters differ or until a terminating         |
|   null-character is reached.                                                                              |
| ·标准规定：                                                                                              |
|	·第一个字符串大于第二个字符串，则返回大于0的数字.                                                      |
|	·第一个字符串等于第二个字符串，则返回0                                                                 |
|	·第一个字符串小于第二个字符串，则返回小于0的数字                                                       |  
|	·那么如何判断两个字符串？                                                                              |
|                                                                                                           |
|===========================================================================================================|

*/

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
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
//	//int ret = strcmp(p1, p2);//比的是对应字符ASCII码值
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

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

int main()
{
	char arr1[30] = "hello\0xxxxxxxxxxxxxxxxxxxx";
	char arr2[] = "world";
	//strncat(arr1, arr2, 3);
	strncat(arr1, arr2, 8);////长度不够，其余位补\0
	printf("%s\n", arr1);
	return 0;
}