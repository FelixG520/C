#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
/*
1.存放1000个好友信息（名字、电话、性别、住址、年龄）
2.增加好友信息
3.删除指定名字的好友信息
4.查找好友信息
5.修改好友信息
6.打印好友信息
7.排序
*/
void menu()
{
	printf("********************************************\n");
	printf("******** 1.add            2.del    *********\n");
	printf("******** 3.search         4.modify *********\n");
	printf("******** 5.show           6.sort   *********\n");
	printf("******** 0.exit                    *********\n");
	printf("********************************************\n");

}

int main()
{
	int input = 0;
	//创建通讯录
	int size = 0;//通讯录里元素个数
	struct Contact con;//con就是通讯录,里面包含data指针和size和capacity
	//初始化通讯录
	InitContact(&con);
	//
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcontact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//销毁通讯录 -- 释放动态开辟的内存
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}
