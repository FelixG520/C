#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
/*����
KiKiѧϰ�������������ѧ����ͨ����װ���ԣ�����������Ϊ�������������࣬������Ҫ���һ������������TDate��
����3��˽�����ݳ�Ա��Month, Day, Year�����ɸ����г�Ա������Ҫ��
��1������Ĭ���β�ֵ�Ĺ��캯����Ĭ��ֵΪ0, 0, 0��
��2��������ں������á��� / �� / �ꡱ��ʽ������ڣ�
��3���������ں������Ӽ��������ꡢ�¡��ա�
����������
һ�У������������ÿո�ָ����ֱ��ʾ�ꡢ�¡��ա�
���������
һ�У��á��� / �� / �ꡱ��ʽ������ڡ�
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
	//����
	cin >> year >> month >> day;
	TData d(year, month, day);
	//���
	d.print();
	return 0;
}