#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

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
