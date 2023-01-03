#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// struct S
//{
//	int i;
//	int a[0];//柔性数组成员
//};
//有些编译器会报错无法编译可以改成：
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员,数组的大小是可以调整的
//};


/*
柔性数组的特点：
·结构中的柔性数组成员前面必须至少一个其他成员。
·sizeof 返回的这种结构大小不包括柔性数组的内存。
·包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大
  小，以适应柔性数组的预期大小。
*/ 

//柔性数组的使用
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//4,柔性数组不参与内存计算
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0,1,2,3,4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (int i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//实现和柔性数组一样的效果
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	//调整大小
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (int i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	//释放内存
//	free(ps->arr);
//	free(ps);
//	ps->arr = NULL;
//	ps = NULL;
//	return 0;
//}


//1.两次使用malloc,free也要两次，并且要注意顺序
//2.柔性数组读取效率高，自己实现的效率低。

//柔性数组的优势
/*
第一个好处是：方便内存释放
如果我们的代码是在一个给别人用的函数中，你在里面做了二次内存分配，并把整个结构体返回给
用户。用户调用free可以释放结构体，但是用户并不知道这个结构体内的成员也需要free，所以你
不能指望用户来发现这个事。所以，如果我们把结构体的内存以及其成员要的内存一次性分配好
了，并返回给用户一个结构体指针，用户做一次free就可以把所有的内存也给释放掉。
第二个好处是：这样有利于访问速度.
连续的内存有益于提高访问速度，也有益于减少内存碎片。（其实，我个人觉得也没多高了，反正
你跑不了要用做偏移量的加法来寻址）
*/  

