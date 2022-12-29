#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
/*=================================== 1.8 strstr ====================================
char * strstr ( const char *str1, const char * str2);
找子字符串

|===================================================================================================================|
|                                                                                                                   |
| ·Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of             |
|   str1.                                                                                                           |
|                                                                                                                   |
|===================================================================================================================|
*/

//模拟实现strstr
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	//用s1,s2代替p1,p2，若果匹配是失败，可以回来重新匹配
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* start =p1;
//	//p2如说是空字符串，只有一个字符\0
//	if (*p2 == '\0')
//		return (char*)p1;
//	//不是空字符串
//	while (*start)
//	{
//		s1 = start;
//		s2 = p2;
//		while ((*s1 == *s2) && (*s2 !='\0') && (*s1 != '\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)start;//找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;//找不到子串
//		}
//		start++;//如果p2和p1不相等，p1++
//	}
//	return NULL;//找不到子串
//}
/*
=============================================================
char* start = p1;	s1 = start;   s1 = start;

			p1
			a	b	b	b	c	d	e	f
			s1
			start

			p2
			b	b	c
			s2
===========================================================
*s1 != *s2	 start++;  s1 = start  s2 = p2;

			p1  start
			a	b	b	b	c	d	e	f
				s1

			p2
			b	b	c
			s2
=============================================================
*s1 == *s2	s1++;  s2++;
			p1  start
			a	b	b	b	c	d	e	f
					s1

			p2
			b	b	c
				s2
===============================================================
*s1 == *s2	s1++;  s2++;

			p1  start
			a	b	b	b	c	d	e	f
						s1

			p2
			b	b	c
					s2
================================================================
*s1 != *s2	 start++;   s1 = start  s2 = p2;

			p1		start
			a	b	b	b	c	d	e	f
					s1

			p2
			b	b	c
			s2

...
*/

//int main()
//{
//	const char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* p3 = "dhfi";
//	char* ret1 = strstr(p1, p2);//如果是NULL -- 空指针，就是不存在
//	char* ret = my_strstr(p1, p2);
//	char* ret2 = strstr(p1, p3);//如果是NULL -- 空指针，就是不存在
//	if (ret1 == NULL)
//		printf("字串不存在！\n");
//	else
//		printf("字串存在！\n");
//	if (ret2 == NULL)
//		printf("字串不存在！\n");
//	else
//		printf("字串存在！\n");
//	printf("%s\n%s", ret1,ret2);
//	return 0;
//}

/*=================================== 1.9 strtok ====================================
char * strtok ( char * str, const char * sep );


|===========================================================================================================|
|                                                                                                           |
| ·sep参数是个字符串，定义了用作分隔符的字符集合                                                           |
| ·第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。                |                                                                |
| ·strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：                   |
|   strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容                  |
|	并且可修改。）                                                                                          |
| ·strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。       |
| ·strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。                |
| ·如果字符串中不存在更多的标记，则返回 NULL 指针。                                                        |
|                                                                                                           |
|===========================================================================================================|

*/

//int main()
//{
//	//192.168.31.121 -- strtok -- 192 168 31 121
//	char arr[] = "https://github.com/FelixG520/Gaof520.git";
//	char* p = ":/.";
//
//	char buf[1000] = { 0 };
//	strcpy(buf, arr);
//	//char* ret = strtok(arr, p);//strtok函数找到p中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。
//	//printf("%s\n", ret);
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	ret = strtok(NULL, p);//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//	//	printf("%s\n", ret);
//	//}
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
