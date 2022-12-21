//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//
//
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//
//}
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);//结构体指针操作符 ->
//	printf("age: %d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//
//}
//int main()
//{
//	Stu s = { "高帆",19,"13346328091","男" };
//	//打印结构体数据
//	Print1(s);//传结构体
//	Print2(&s);//传地址
//	return 0;
//}
//
///*
//上面的 print1 和 print2 函数哪个好些？
//答案是：首选print2函数。
//原因：
//函数传参的时候，参数是需要压栈（进栈）的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的
//下降。
//
//结论：
//结构体传参的时候，要传结构体的地址。
//*/