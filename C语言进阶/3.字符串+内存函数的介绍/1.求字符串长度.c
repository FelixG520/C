#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

/*=================================== 1.1 strlen ====================================
size_t strlen(const char* str);
size_t == unsigned int

  |===============================================================================================================|
  |                                                                                                               |
  | ���ַ����� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ������������� '\0' )��           |
  | ������ָ����ַ�������Ҫ�� '\0' ������                                                                        |
  | ��ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ� �״� ��                                                              |
  | ��ѧ��strlen������ģ��ʵ��                                                                                    |
  |                                                                                                               |
  |===============================================================================================================|

*/

//ģ��ʵ��strlen
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
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen���޷�����
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
