#define _CRT_SECURE_NO_WARNINGS 1
//#define MAX 1000

#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};


//通讯录类型
struct Contact
{
	struct PeoInfo *data;//指向一块空间来存放信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
};

//声明函数
//初始化通讯录函数
void InitContact(struct Contact* ps);
//增加一个信息到通讯录
void Addcontact(struct Contact* ps);
//打印通讯录中的信息
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//查找指定人的信息
void SearchContact(const struct Contact* ps);
//修改指定人的信息
void ModifyContact(struct Contact* ps);
//排序通讯录内容
void SortContact(struct Contact* ps);
void DestoryContact(struct Contact* ps);



