#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr = pulArray;//数组名等于首元素地址 -- 6的地址
//	*(pulPtr + 3) += 3;//*(pulPtr + 3) == 9  9+=3 == 12
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6 12
//	return 0;
//}


//写一个函数，逆序字符串的内容
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;//数组名，首元素地址
//	char* right = str + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;//第一个元素
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//缺点是，遇到空格就无法继续
//	gets(arr);//读取一行,不关注空格
//	//逆序函数
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//求Sn=a + aa + aaa + aaaa + aaaaa...前五项之和，其中a是一个数字
//int main()
//{
//	int a, n;
//	scanf("%d %d", &a, &n);
//	int sum = 0, ret = 0;
//	for(int i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//10000以内的水仙花数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		//1.计算i的位数 - n位数
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("输出水仙花数:\n");
//	int i, a, b, c;
//	for (i = 100; i <= 999; i++) //整数的取值范围
//	{
//		int a = i % 10;//个位数 
//		int b = (i / 10) % 10;//十位数 
//		int c = i / 100;//百位数 
//
//		if (i == a * a * a + b * b * b + c * c * c) //各位上的立方和是否与原数n相等
//			printf("%d\t", i);
//	}
//
//	return 0;
//}

//打印菱形
//                   *
//                  ***
//                 *****
//                *******
//               *********
//              ***********
//             *************
//              ***********
//               *********
//                *******
//                 *****
//                  ***
//                   *

//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)//循环次数
//		{
//			//正金字塔
//			for (int j = 0; j < n - i-1; j++)
//				printf(" ");
//			for (int j = 0; j <2* i+1; j++)
//				printf("*");
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			//倒金字塔
//			for (int j = 0; j <=i; j++)
//				printf(" ");
//			for (int j = 0; j < 2 * (n-i-1)-1; j++)
//				printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}

//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n",a.a );
//	//printf("%d\n",*p.a); error
//	return 0;
//}

//输出结果是什么
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							   {9802,"wang",19},
//							   {9803,"zhao",18} 
//	};
//	fun(students + 1);
//	return 0;
//}

//1瓶汽水1元，两个空瓶换一瓶，给20块，能喝多少瓶？
//int main()
//{
//	int money;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//empty / 2能换的瓶数，empty % 2余下的空瓶数
//	}
//	printf("total = %d\n", total);
//	return 0;
//}

//奇数在偶数前面
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从左边找偶数
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右边找奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;//char类型的变量相加，发生整形提升
//	//char类型，只读8个比特位
//	//00000000 00000000 00000000 11001000 - a
//	//11001000 - a
//	//00000000 00000000 00000000 01100100 - b
//	//01100100 - b
//	//00000000 00000000 00000001 00101100 - a+b
//	//00101100 - c
//	//00000000 00000000 00000000 00101100 - c
//	printf("%d %d", a + b, c);//300 44
//	return 0;
//}

//b的输出是什么？
//int main()
//{
//	unsigned int a = 0x1234;
//	//0x1234 == 0x 00 00 12 34
//	unsigned char b = *(unsigned char*)&a;//把地址强制类型转化成unsigned char*，解引用访问一个字节内容 -- 00
//	printf("%d", b);//大端存储 -- 00  小端存储 -- 52
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };//有符号char范围-128~127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 ... -128 127 126 ... 3 2 1 0 -1 -2 ...
//	printf("%d", strlen(a));//strlen找\0,也就是0，0之前有255个元素
//	return 0;
//}

//杨辉三角
//int main()
//{
//    int n, i, j;
//    int arr[100][100] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (j == 0)
//                arr[i][j] = 1;//第一列
//            if (i == j)
//                arr[i][j] = 1;//对角线
//            if (i >= 2 && j >= 1)
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)//不打印上三角
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

/*
日本某地发生了一件谋杀案,警察通过排查确定杀人凶手必为4个嫌疑犯的一个
以下为4个嫌疑犯的供词:
A说：不是我  1 0 
B说：是C     1 0
C说：是D     0 0
D说：C在胡说 1 1
已知3个人说的真话一个人说的是假话，现在请根据这些信息写一个程序来确定到底谁是凶手
*/  
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c", killer);
//		}
//	}
//	return 0;
//}



/*
猜名次
5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三
B选手说：我第二，E第四
C选手说：我第一，D第二
D选手说：C最后，我第三
E选手说：我第四，A第一
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
*/   

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b==2) + (a==3) == 1) && 
							((b==2) + (e==4) == 1) && 
							((c==1) + (d==2) == 1) && 
							((c==5) + (d==3) == 1) && 
							((e==4) + (a==1) == 1))
						{
							if(a*b*c*d*e == 120)
								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	return 0;
}