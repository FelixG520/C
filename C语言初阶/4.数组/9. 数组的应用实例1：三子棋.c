//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//#include "game.h"
//void menu()
//{
//	printf("**********************************\n");
//	printf("****** 1. play    0. exit ********\n");
//	printf("**********************************\n");
//}
//
////游戏的实现
//void game()
//{
//	char ret = 0;
//	//创建一个数组 - 存放走出的棋盘信息
//	char board[ROW][COL]={0};//全部空格
//	//初始化棋盘
//	InitBoard(board, ROW, COL);
//	//打印棋盘
//	DisplayBoard(board,ROW,COL);
//	//下棋
//	while (1)
//	{
//		//玩家下棋
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//判断玩家输赢
//		ret = IsWin(board, ROW, COL);
//		if (ret != "C")
//		{
//			break;
//		}
//		//电脑下棋
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//判断电脑输赢
//		ret = IsWin(board, ROW, COL);
//		if (ret != "C")
//		{
//			break;
//		}
//	}
//	if (ret == "*")
//	{
//		printf("玩家赢");
//	}
//	else if (ret == "#")
//	{
//		printf("电脑赢");
//	}
//	else
//	{
//		printf("平局");
//	}
//	
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("三子棋\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//
//
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}