////我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
////一个人写的烂软件将会给另一个人带来一份全职工作。
////除非我不想赢，否则没有人能让我输！！！
////一鼓作气，考研是一种忍耐！！！
//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>




////猜数字游戏
////电脑会生成一个随机数--猜数字
////游戏至少要执行一次，因此用do while循环
//#include <stdio.h>
//#include <stdlib.h>//RAND_MAX--rand函数的头文件
//#include <time.h>//time函数的头文件
//void menu()//菜单函数
//{
//	printf("**********************************\n");
//	printf("*********** 1.play     **********\n");
//	printf("*********** 0.exit     **********\n");
//	printf("**********************************\n");
//}
//
//void game()//定义函数体
//{
//	int guess = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;//生成1-100之间的随机数
//	//printf("%d\n", ret);//输出随机数--用于测试
//	//2.猜数字
//	while (1)//1为真，进入循环
//	{
//		printf("请输入猜的数字>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//
////开始游戏的过程
//int main()
//{
//	int input = 0;
//	//1、生成一个随机数
//	//时间戳--当前计算机的时间-计算机发明的时间(1970.1.1 0:0:0)=(xxxx)秒
//	//拿时间戳来设置随机数的生成起点
//	//time_t time(time_t *timer),NULL--空指针
//	//RAND_MAX--rand函数能返回随机数的最大值。（0,32767]
//	srand((unsigned int)time(NULL));//使每次的随机数都不同，但是srand()里的数字也要随机，因此可以把时间放进去，因为时间时刻发生变化
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//玩游戏--猜数字的游戏过程
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,请重新输入!\n");//处理0和1之外的情况
//			break;
//		}
//	} while (input);//非0为真，继续循环
//	return 0;
//}