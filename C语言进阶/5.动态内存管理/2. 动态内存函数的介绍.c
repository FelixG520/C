#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/********************************* 2.1 malloc和free *******************************
C语言提供了一个动态内存开辟的函数：
	void* malloc (size_t size);

这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针。
	·如果开辟成功，则返回一个指向开辟好空间的指针。
	·如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
	·返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
	·如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器。

C语言提供了另外一个函数free，专门是用来做动态内存的释放和回收的，函数原型如下：
	void free (void* ptr);
	
free函数用来释放动态开辟的内存。
	·如果参数 ptr 指向的空间不是动态开辟的，那free函数的行为是未定义的。
	·如果参数 ptr 是NULL指针，则函数什么事都不做

	
	malloc和free都声明在 stdlib.h 头文件中。
	
*/


int main()
{
	//向内存申请10个整形的空间
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;

		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));

		}
	}
	//当动态申请的空间不再使用的时候
	//就应该还给操作系统
	free(p);
	p = NULL;
	return 0;
}



/********************************* 2.2 calloc *******************************
C语言还提供了一个函数叫 calloc ， calloc 函数也用来动态内存分配。原型如下：
	void* calloc (size_t num, size_t size);

	·函数的功能是为 num 个大小为 size 的元素开辟一块空间，并且把空间的每个字节初始化为0。
	·与函数 malloc 的区别只在于 calloc 会在返回地址之前把申请的空间的每个字节初始化为全0

*/

