#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
/*描述
KiKi学习了面向对象技术，学会了通过封装属性（变量）和行为（函数）定义类，现在他要设计一个电子日历类TDate。
它有3个私有数据成员：Month, Day, Year和若干个公有成员函数，要求：
（1）带有默认形参值的构造函数，默认值为0, 0, 0；
（2）输出日期函数，用“日 / 月 / 年”格式输出日期；
（3）设置日期函数，从键盘输入年、月、日。
输入描述：
一行，三个整数，用空格分隔，分别表示年、月、日。
输出描述：
一行，用“日 / 月 / 年”格式输出日期。
*/ 
class TData
{
private:
	int Year;
	int Month;
	int Day;
public:
	TData(int y=0, int m=0, int d=0)
	{
		Year = y;
		Month = m;
		Day = d;
	}
	void print()
	{
		cout << Day << '/' << Month << '/' << Year << endl;
	}
};

int main()
{
	int year, month, day;
	//输入
	cin >> year >> month >> day;
	TData d(year, month, day);
	//输出
	d.print();
	return 0;
}