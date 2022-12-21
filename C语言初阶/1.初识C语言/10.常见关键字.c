//我想大部分人都知道，通常一个程序员会具有的美德。当然了，有三种：懒惰、暴躁、傲慢。
//一个人写的烂软件将会给另一个人带来一份全职工作。
//除非我不想赢，否则没有人能让我输！！！
//一鼓作气，考研是一种忍耐！！！
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>




/*
auto  break(停滞循环)   case  char(字符类型)  const(常变量)   continue(继续，循环)  default(默认)  do(do while循环)
double(双精度浮点类型) else(if else语句)  enum(枚举)  extern(引入外部符号) float(单精度浮点数)  for(for循环)   
goto(goto语句)  if(if语句)   int   long  register(寄存器关键词)    return   short(短整型)  signed
sizeof   static struct(结构体关键字)  switch  typedef(类型定义) union(联合体/共用体)  unsigned   void(无/空)  
volatile  while
变量名不能与关键字冲突
*/

//int main()
//{
//	int a = 10;//局部变量，也叫自动变量，在int前默认省略了auto，局部变量前都有auto，但都省略了
//	return 0;
//}


//int main()
//{
//	register int a = 10;//建议把a定义为寄存器变量，一个计算机只有几十个寄存器
//	int a = 10;
//	a = -2; //int定义的变量是有符号的，应该是signed int，但通常把signed省略掉了
//	unsigned int num = 0;//无符号数，默认正数，即使放正数，也会认为是正数
//	return 0;
//}

//int main()
//{
//	typedef unsigned int u_int;//typedef-类型定义-类型重定义，即将unsigned int定义为u_int(别名)，后续就可使简化编写过程
//	unsigned int num = 20;
//	u_int num2 = 20;//等价于unsigned int num2 = 20
//	return 0;
//}


/*
关键字static
在C语言中：
static是用来修饰变量和函数的
1. 修饰局部变量 - 称为静态局部变量
2. 修饰全局变量 - 称为静态全局变量
3. 修饰函数- 称为静态函数
*/



/*
1. 修饰局部变量 - 称为静态局部变量,局部变量的生命周期变长 
 void表示无返回值或者返回值为空，而int可以返回整数,当主函数需要返回值时，不用void，反之用void
 当我们定义一个函数只是为了实现某功能时（比如输出某值），用void就可以了
 */
//void test() //
//{
//	int a = 1;        //a=1，a++=2，输出2。每次进去创建a，出来销毁a，即局部变量的生命周期结束。i+1=1<5，重复以上过程，i+1=2<5……共重复五次，输出的结果都是2
//	static int a = 1; //a是一个静态的局部变量,a++=2出来不销毁，a使用上一次a留下的值--2、3、4、5、6
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;//i相当于次数，即执行以上函数5次
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

/*
2. 修饰全局变量 - 称为静态全局变量，改变了变量的作用域，让静态的全局变量只能在自己的源文件内部使用
出了源文件就无法再使用了
*/
//int main()
//{
//	//extern--声明外部符号
//	extern int add;
//	extern int g_val;
//	printf("g_val=%d", g_val); //int g_val = 2021;输出2021
//	printf("add=%d", add);     //static int add = 2020;使外部符号无法被调用,就不会输出
//	return 0;
//}



/*
3. 修饰函数 - 称为静态函数,和全局变量类似，也是改变了函数的链接属性(作用域)
函数具有外部链接属性，如果被static修饰后变成内部链接属性
*/


//extern int Add(int, int);//调用外部函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--函数引用操作符
//	printf("sum=%d\n", sum);
//	return 0;
//}