//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include "contactfile.h"
//
////声明函数
////初始化通讯录函数
//void InitContact(struct Contact* ps)
//{
//	//初始化三个人的空间，以后每次开辟2个
//	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
//	if (ps->data == NULL)
//	{
//		return;
//	}
//	ps->size = 0;
//	ps->capacity = DEFAULT_SZ;
//	//把文件中已经存放的通讯录中的信息加载到通讯录中
//	LoadContact(ps);
//}
//
////声明函数
//void CheckCapacity(struct Contact* ps);
////加载文件中的信息到通讯录
//void LoadContact(struct Contact* ps)
//{
//	struct PeoInfo tmp = { 0 };
//	FILE* pfRead = fopen("contact.dat", "rb");
//	if (pfRead == NULL)
//	{
//		printf("LoadContact::%s\n", strerror(errno));
//		return;
//	}
//	//读取文件放到通讯录中
//	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))
//	{
//		CheckCapacity(ps);
//		ps->data[ps->size] = tmp;
//		ps->size++;
//	}
//	fclose(pfRead);
//	pfRead = NULL;
//}
//
////增加一个信息到通讯录
//void CheckCapacity(struct Contact* ps)
//{
//	if (ps->size == ps->capacity)
//	{
//		//增容
//		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
//		if (ptr != NULL)
//		{
//			ps->data = ptr;
//			ps->capacity += 2;
//			printf("增容成功！\n");
//		}
//		else
//		{
//			printf("增容失败！\n");
//		}
//	}
//}
//void Addcontact(struct Contact* ps)
//{
//	//检测当前通讯录的容量
//	//满了就增加空间，不满不执行操作
//	CheckCapacity(ps);
//	//增加数据
//	printf("请输入名字：");
//	scanf("%s", ps->data[ps->size].name);
//	printf("请输入年龄：");
//	scanf("%d", &(ps->data[ps->size].age));
//	printf("请输入性别：");
//	scanf("%s", ps->data[ps->size].sex);
//	printf("请输入电话：");
//	scanf("%s", ps->data[ps->size].tele);
//	printf("请输入地址：");
//	scanf("%s", ps->data[ps->size].addr);
//
//	ps->size++;//元素个数+1
//	printf("添加成功!\n");
//
//
//	//if (ps->size == MAX)
//	//{
//	//	printf("通讯录已满，无法增加\n");
//	//}
//	//else
//	//{
//	//	printf("请输入名字：");
//	//	scanf("%s", ps->data[ps->size].name);
//	//	printf("请输入年龄：");
//	//	scanf("%d", &(ps->data[ps->size].age));
//	//	printf("请输入性别：");
//	//	scanf("%s", ps->data[ps->size].sex);
//	//	printf("请输入电话：");
//	//	scanf("%s", ps->data[ps->size].tele);
//	//	printf("请输入地址：");
//	//	scanf("%s", ps->data[ps->size].addr);
//	//	ps->size++;//元素个数+1
//	//	printf("添加成功!\n");
//	//}
//}
//
////打印通讯录中的信息
//void ShowContact(const struct Contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("通讯录为空\n");
//	}
//	else
//	{
//		int i = 0;
//		//标题
//		printf("%-4s\t%-4s\t%-5s\t%-12s\t%-4s\n", "名字", "年龄", "性别", "电话", "地址");
//		for (i = 0; i < ps->size; i++)
//		{
//			//数据
//			printf("%-4s\t%-4d\t%-5s\t%-12s\t%-4s\n",
//				ps->data[i].name,
//				ps->data[i].age,
//				ps->data[i].sex,
//				ps->data[i].tele,
//				ps->data[i].addr);
//		}
//	}
//}
//
//static int FindByName(struct Contact* ps, char name[MAX_NAME])
//{
//	int i = 0;
//	for (i = 0; i < ps->size; i++)
//	{
//		if (0 == strcmp(ps->data[i].name, name))
//			return i;
//	}
//	return -1;
//}
//
////删除指定的联系人
//void DelContact(struct Contact* ps)
//{
//	char name[MAX_NAME];
//	printf("请输入要删除人的名字：");
//	scanf("%s", &name);
//	//1.查找要删除的人在什么位置
//	//找到返回名字所在元素下标，找不到返回-1
//	int pos = FindByName(ps, name);
//	int i = 0;
//	//2.删除
//	if (pos == -1)
//	{
//		printf("查无此人！\n");
//	}
//	else
//	{
//		//删除数据
//		int j = 0;
//		for (j = pos; j < ps->size - 1; j++)
//		{
//			ps->data[j] = ps->data[j + 1];
//		}
//		ps->size--;
//		printf("删除成功\n");
//	}
//}
//
////查找指定人的信息
//void SearchContact(const struct Contact* ps)
//{
//	char name[MAX_NAME];
//	printf("请输入要查找人的名字：");
//	scanf("%s", &name);
//	//找到返回名字所在元素下标，找不到返回-1
//	int pos = FindByName(ps, name);
//	if (pos == -1)
//	{
//		printf("查无此人！\n");
//	}
//	else
//	{
//		//标题
//		printf("%-4s\t%-4s\t%-5s\t%-12s\t%-4s\n", "名字", "年龄", "性别", "电话", "地址");
//		printf("%-4s\t%-4d\t%-5s\t%-12s\t%-4s\n",
//			ps->data[pos].name,
//			ps->data[pos].age,
//			ps->data[pos].sex,
//			ps->data[pos].tele,
//			ps->data[pos].addr);
//	}
//}
//
////修改指定人的信息
//void ModifyContact(struct Contact* ps)
//{
//	char name[MAX_NAME];
//	printf("请输入要修改人的名字：");
//	scanf("%s", &name);
//	//找到返回名字所在元素下标，找不到返回-1
//	int pos = FindByName(ps, name);
//	if (pos == -1)
//	{
//		printf("查无此人！\n");
//	}
//	else
//	{
//		printf("请输入名字：");
//		scanf("%s", ps->data[pos].name);
//		printf("请输入年龄：");
//		scanf("%d", &(ps->data[pos].age));
//		printf("请输入性别：");
//		scanf("%s", ps->data[pos].sex);
//		printf("请输入电话：");
//		scanf("%s", ps->data[pos].tele);
//		printf("请输入地址：");
//		scanf("%s", ps->data[pos].addr);
//		printf("修改完成!\n");
//	}
//}
//
////排序通讯录内容
//static int CompareByName(const void* p1, const void* p2)
//{
//	return strcmp(((struct PeoInfo*)p1)->name, ((struct PeoInfo*)p2)->name);
//}
//void SortContact(struct Contact* ps)
//{
//	qsort(ps->data, ps->size, sizeof(ps->data[0]), CompareByName);
//	printf("排序成功！\n");
//}
//
//
//void DestoryContact(struct Contact* ps)
//{
//	free(ps->data);
//	ps->data = NULL;
//}
//
////保存通讯录内容
//void SaveContact(struct Contact* ps)
//{
//	FILE* pfwrite = fopen("contact.dat", "wb");
//	if (pfwrite == NULL)
//	{
//		printf("SaveContact::%s\n", strerror(errno));
//		return;
//	}
//	//写通讯录中的数据到文件中
//	int i = 0;
//	for (i = 0; i < ps->size; i++)
//	{
//		fwrite(&(ps->data[i]),sizeof(struct PeoInfo),1,pfwrite);
//	}
//	fclose(pfwrite);
//	pfwrite = NULL;
//}
//
