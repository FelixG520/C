#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ǰ��ع�
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int* arr[10];//����ָ������
//	int (*pa)[10] = &arr;//����ָ��
//	int (*pAdd)(int, int) = &Add;//����ָ��
//	int sum = (*pAdd)(1, 2);
//	int sum2 = pAdd(1, 2);
//	printf("%d %d", sum,sum2);
//	int (*paAdd[10])(int, int);//����ָ������
//	int (*(*paaAdd[10]))(int, int) = &paAdd;//ָ����ָ�������ָ��
//	return 0;
//}

//�ص�����
//void qsort(void* base, //base -- Start of target array
//	       size_t num, //num -- Array size in elements
//	       size_t width, //width -- Element size in bytes
//	       int(__cdecl* compare)(const void* elem1, const void* elem2)//compare -- Comparison function -- ��һ������ָ��,compare������Ҫ�Լ�����
//           );//elem1 -- Pointer to the key for the search  elem2 -- Pointer to the array element to be compared with the key



//qsort(arr, sz, sizeof(arr[0]), compare);
//��һ������ -- �������������Ԫ�ص�ַ
//�ڶ������� -- �����������Ԫ�ظ���
//���������� -- �����������ÿ��Ԫ�صĴ�С����λ���ֽڣ�
//���ĸ����� -- �Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ -- �������Ҫ�Լ�ʵ��
//              ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ


//#include <stdlib.h>//qsort��ͷ�ļ�
//#include <string.h>//strcmp��ͷ�ļ�
//int cmp_int(const void* elem1, const void* elem2)
//{
//	//�Ƚ���������ֵ�ĺ���
//	return *(int*)elem1 - *(int*)elem2;//void����ָ�벻�ܽ����ã����elemҪǿ������ת��
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
//	return ((struct stu*)elem1)->age - ((struct stu*)elem2)->age;//�ṹ��ָ�� -> ��Ա���������ý�����
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
//void bubble_sort(int arr[], int sz)//ֻ�������Σ���ͨ��
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
////����qsort��˼·���Լ�дһ��������
////ʵ��bubble_sort2�����ĳ���Ա���ǲ�֪��Ҫ������������͵�
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
//void bubble_sort2(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))//���ڲ�֪��Ҫ�Ƚϵ��������ͣ������void�������������������������͵Ĵ�С�����ж���������
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�رȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//��������Ԫ�صĵ�ַ
//			{//ǿ������ת����char*������һ���ֽ�һ���ֽڵ���ת 01 12 23 34 ...
//				//����
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
//	//ʹ��bubble_sort2�ĳ���Աһ��֪���Լ��������ʲô���͵�����
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