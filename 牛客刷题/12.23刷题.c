#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n, x, i, cnt = 0, arr[100] = { 0 };
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//			cnt++;
//	}
//	printf("%d", cnt);
//	return 0;
//}


//int main() 
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;\n");//这里有四个空格
//	return 0;
//}

//给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，请编程帮他实现。
//int main()
//{
//    int n = 1;
//    int count = 0;
//    for (int i = 100; i <= 999; i++)
//    {
//        n = 1;
//        for (int j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                n = 0;
//            }
//        }
//        if (n!=0)
//        {
//            count++;
//        }
//    }
//    printf("%d ", count);
//    return 0;
//}

//int is_prime(int n)
//{
//	//拿2~n-1之间的数试除
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i, cnt = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		//判断是否为素数
//		if (is_prime(i) == 1)
//		{
//			cnt++;
//		}
//	}
//	printf("%d", cnt);
//}

//给定一个整数序列，KiKi想把其中的重复的整数去掉，并将去重后的序列从小到大排序输出。
//int main()
//{
//	int i, n, arr1[1001] = { 0 }, arr2[1001] = { 0 };
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//		arr2[arr1[i]] = arr1[i];
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr2[i] != 0)
//			printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i, n, arr[1001] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int m;
//		scanf("%d", m);
//		arr[m] = m;
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}

//暴力求解
//int main()
//{
//	int i,j, n, arr[1001] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//冒泡排序
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	//去重，覆盖
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			//把从i+1下标往后的元素往前覆盖
//			int k = 0;
//			for (k = i; k < n - 1; k++)
//			{
//				arr[k] = arr[k + 1];
//			}
//			n--;
//			i--;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//链接：https://www.nowcoder.com/questionTerminal/0ab593ca56b1476eb05b1ff848fd7fcc
//来源：牛客网
//
//KiKi学习了结构体和指针，他了解了结构体类型可以定义包含多个不同类型成员，而指针本质是内存地址，是引用数据的另外一种方式。
//现在他想将多个输入的数据通过结构体和指针的方式连接在一起，形成一个单向链表，即：每个结点是结构体类型，包括整型数据成员（data）和结构体指针类型成员（next），
//每个结点的指针部分指向下一个输入的结点。具体建立过程如下：先输入n个整数，按照数据输入的顺序建立一个带头结点的单链表，再输入一个数据m, 将单链表中的值为m的结点全部删除。
//输出删除后的单链表信息。 

//链表结点的定义
//struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域 -- 同类型的下个结点的地址
//
//};
//
//int main()
//{
//	struct Node* list = NULL;//指向链表的指针
//	struct Node* tail = NULL;//尾指针 -- 指向链表尾部元素的指针
//	//输入n
//	int n;
//	scanf("%d", &n);
//	int i,m;
//	int d;//要删除的元素
//	//接受n个数字，并尾部插入到链表中
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		//malloc本身返回void*类型指针，要强制类型转换
//		struct Node*  pn = (struct Node*)malloc(sizeof(struct Node));//开辟节点大小,malloc返回这片地址的指针
//		//创建节点
//		pn->data = m;
//		pn->next = NULL;
//		//插入第一个元素
//		if (list == NULL)
//		{
//			list = pn;
//			tail = pn;
//		}
//		//插入其他元素
//		else
//		{
//			tail->next = pn;
//			tail = pn;
//		}
//	}
//	//接受要删除的元素
//	scanf("%d", &d);
//	//删除链表中指定元素
//	struct Node* cur = list;
//	struct Node* pre = NULL;
//	while (cur != NULL)
//	{
//		//找到了要删除的元素
//		if (cur->data == d)
//		{
//			//删除
//			struct Node* pd = cur;
//			if (cur == list)//删除的如果是第一个节点
//			{
//				list = list->next;
//				cur = cur->next;
//			}
//			else//删除的不是第一个节点
//			{
//				pre->next = cur->next;
//				cur = pre->next;
//			}
//			free(pd);
//			n--;//删除一个元素，长度减1
//		}
//		else
//		{
//			pre = cur;//pre始终记录cur前一个结点的地址
//			cur = cur->next;
//		}
//	}
//	//输出
//	printf("%d\n", n);
//	cur = list;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	//释放链表
//	cur = list;
//	struct Node* del = NULL;
//	while (cur != NULL)
//	{
//		del = cur;
//		cur = cur->next;
//		free(del);
//	}
//	list = NULL;
//	return 0;
//}