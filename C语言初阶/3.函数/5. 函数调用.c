//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 

//1 传值调用
//函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。
//void Swap1(int x, int y)//代表没有返回值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

/*
2 传址调用
·传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
·这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操
作函数外部的变量。
*/
//正确的版本 - 指针解决
//void Swap2(int* pa, int* pb)//pa,pb - 指针变量
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用Swap1函数 - 传值调用
//	Swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	//调用Swap2函数 - 传址调用
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//传值调用
//int get_max(int x, int y)
//{
//	if (x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max); 
//	
//	return 0;
//}


//仅仅想要获取到值，并不想改变变量的值 - 传值调用