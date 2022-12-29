#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

/*
=================================== 1.11 memcpy ====================================
void * memcpy ( void * destination, const void * source, size_t num );

|================================================================================================|
|                                                                                                |
| ������memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�                 |
| ��������������� '\0' ��ʱ�򲢲���ͣ������                                                     |
| �����source��destination���κε��ص������ƵĽ������δ����ġ�                                |
|                                                                                                |
|================================================================================================|
*/

//ģ��ʵ��memcpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;//ǿ������ת��char��ÿ�ο���һ���ֽڣ�һ��num��
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
//	struct s arr3[] = { {"����",20},{"����",30} };
//	struct s arr4[3] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(arr + 2, arr, 20);//�����ڴ��ص����
//	//memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr4, arr3, sizeof(arr3));//���ɴ����ڴ��ص����
//	return 0;
//}



/*
=================================== 1.12 memmove ====================================
void * memmove ( void * destination, const void * source, size_t num );

|================================================================================================|
|                                                                                                |
| ����memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص���                          |
| �����Դ�ռ��Ŀ��ռ�����ص����͵�ʹ��memmove��������                                      | 
|                                                                                                |
|================================================================================================|
*/

//ģ��ʵ��memmove
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;//ǿ������ת��char��ÿ�ο���һ���ֽڣ�һ��num��
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 ,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);//�����ڴ��ص����
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
| ���Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�                                                          |
|                                                                                                |
|================================================================================================|
*/