#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

/*********************************** 4.1 联合类型的定义 *********************************
联合也是一种特殊的自定义类型
这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块空间（所以联合也叫共用体）。
比如：
*/

//联合类型的声明
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	//联合变量的定义
//	union Un un;
//	//计算连个变量的大小
//	printf("%d\n", sizeof(un));
//	return 0;
//}


/*********************************** 4.2 联合的特点 *********************************
联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小（因为联
合至少得有能力保存最大的那个成员）。
*/

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un un;
//	printf("%d\n", sizeof(un));
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//	printf("%p\n", &un);
//
//	return 0;
//}


//面试题
//判断当前计算机的大小端存储
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//
//int check_sys()
//{
//	union Un
//	{
//		char c;//c占用第一个字节，也就是说返回c就是小端，否则就是大端
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

/*********************************** 4.3 联合大小的计算 *********************************
联合的大小至少是最大成员的大小。
当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。 
*/


union Un1
{
	char c[5];//最大对齐数 -- 1
	int i;//最大对齐数 -- 4
};
union Un2
{
	short c[7];//最大对齐数 -- 1
	int i;//最大对齐数 -- 4
};

int main()
{
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}