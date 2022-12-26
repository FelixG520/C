#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//前情回顾
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int* arr[10];//整形指针数组
//	int (*pa)[10] = &arr;//数组指针
//	int (*pAdd)(int, int) = &Add;//函数指针
//	int sum = (*pAdd)(1, 2);
//	int sum2 = pAdd(1, 2);
//	printf("%d %d", sum,sum2);
//	int (*paAdd[10])(int, int);//函数指针数组
//	int (*(*paaAdd[10]))(int, int) = &paAdd;//指向函数指针数组的指针
//	return 0;
//}

//回调函数
//void qsort(void* base, //base -- Start of target array
//	       size_t num, //num -- Array size in elements
//	       size_t width, //width -- Element size in bytes
//	       int(__cdecl* compare)(const void* elem1, const void* elem2)//compare -- Comparison function -- 是一个函数指针,compare函数需要自己定义
//           );//elem1 -- Pointer to the key for the search  elem2 -- Pointer to the array element to be compared with the key



//qsort(arr, sz, sizeof(arr[0]), compare);
//第一个参数 -- 待排序数组的首元素地址
//第二个参数 -- 待排序数组的元素个数
//第三个参数 -- 待排序数组的每个元素的大小（单位是字节）
//第四个参数 -- 是函数指针，比较两个元素的所用函数的地址 -- 这个函数要自己实现
//              函数指针的两个参数是：待比较的两个元素的地址


//#include <stdlib.h>//qsort的头文件
//#include <string.h>//strcmp的头文件
//int cmp_int(const void* elem1, const void* elem2)
//{
//	//比较两个整形值的函数
//	return *(int*)elem1 - *(int*)elem2;//void类型指针不能解引用，因此elem要强制类型转换
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int cmp_float(const void* elem1, const void* elem2)
//{
//	if (*(float*)elem1 == *(float*)elem2)
//		return 0;
//	else if (*(float*)elem1 > *(float*)elem2)
//		return 1;
//	else
//		return -1;
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* elem1, const void* elem2)
//{
//	return ((struct stu*)elem1)->age - ((struct stu*)elem2)->age;//结构体指针 -> 成员变量，不用解引用
//}
//int cmp_stu_by_name(const void* elem1, const void* elem2)
//{
//	return strcmp(((struct stu*)elem1)->name, ((struct stu*)elem2)->name);
//}
//void test3()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//void bubble_sort(int arr[], int sz)//只能排整形，不通用
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
////沿用qsort的思路，自己写一个排序函数
////实现bubble_sort2函数的程序员，是不知道要排序的数据类型的
//Swap(char* buf1, char* buf2,int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort2(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))//由于不知道要比较的数据类型，因此用void，第三个参数是输入数据类型的大小，以判断数据类型
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//相邻两个元素的地址
//			{//强制类型转化成char*，可以一个字节一个字节的跳转 01 12 23 34 ...
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//void test4_2()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort2(arr, sz, sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test5()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//使用bubble_sort2的程序员一定知道自己排序的是什么类型的数据
//	bubble_sort2(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort2(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}



//int main()
//{
//
//	//bubble_sort(arr, sz);
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test4_2();
//	//test5();
//	return 0;
//}