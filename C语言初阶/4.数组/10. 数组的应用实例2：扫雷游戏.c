//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include "game2.h"
//void menu()
//{
//	printf("**********************************\n");
//	printf("****** 1. play    0. exit ********\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	//雷的信息存储
//	//1.布置好的雷的信息
//	char mine[ROWS][COLS] = { 0 };//11*11
//	//2.排查出雷的信息
//	char show[ROWS][COLS] = { 0 };
//	//初始化
//	InitBoard2(mine, ROWS, COLS, '0');
//	InitBoard2(show, ROWS, COLS, '*');
//	//打印棋盘
//	//DisplayBoard2(mine,ROW,COL);
//	DisplayBoard2(show, ROW, COL);
//	//布置雷
//	SetMine(mine,ROW,COL);
//	//扫雷
//	DisplayBoard2(mine, ROW, COL);//雷的分布
//	FindMine(mine,show,ROW,COL); 
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("扫雷\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
