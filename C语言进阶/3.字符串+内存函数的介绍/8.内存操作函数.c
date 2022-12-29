#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

/*
=================================== 1.11 memcpy ====================================
void * memcpy ( void * destination, const void * source, size_t num );

|================================================================================================|
|                                                                                                |
| ·函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。                 |
| ·这个函数在遇到 '\0' 的时候并不会停下来。                                                     |
| ·如果source和destination有任何的重叠，复制的结果都是未定义的。                                |
|                                                                                                |
|================================================================================================|
*/

//模拟实现memcpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;//强制类型转换char，每次拷贝一个字节，一共num次
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//struct s
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct s arr3[] = { {"张三",20},{"李四",30} };
//	struct s arr4[3] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(arr + 2, arr, 20);//处理内存重叠情况
//	//memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr4, arr3, sizeof(arr3));//不可处理内存重叠情况
//	return 0;
//}



/*
=================================== 1.12 memmove ====================================
void * memmove ( void * destination, const void * source, size_t num );

|================================================================================================|
|                                                                                                |
| ·和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的                          |
| ·如果源空间和目标空间出现重叠，就得使用memmove函数处理。                                      | 
|                                                                                                |
|================================================================================================|
*/

//模拟实现memmove
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;//强制类型转换char，每次拷贝一个字节，一共num次
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 ,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);//处理内存重叠情况
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

/*
=================================== 1.13 memcmp ====================================
int memcmp ( const void * ptr1,
 const void * ptr2,
 size_t num );

|================================================================================================|
|                                                                                                |
| ·比较从ptr1和ptr2指针开始的num个字节                                                          |
|                                                                                                |
|================================================================================================|
*/