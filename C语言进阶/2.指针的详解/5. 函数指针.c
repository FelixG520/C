#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10, b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	//�ں����&�������ͺ��������Ǻ����ĵ�ַ
//	printf("%p %p %p %p\n", &Add,Add);
//	int(*pa)(int, int) = Add; //����ָ�붨�巽ʽ
//	printf("%d\n",(*pa)(2,3));//5
//
//	return 0;
//}

//void Print(char* str)//�ַ�ָ���������ָ��ָ�������
//{
//	printf("%s\n",str);//����Ҫ�����ã�%s��ӡ��Ҫ����һ����ַ����str���ǵ�ַ
//}
//int main()
//{
//	
//	void (*p)(char*) = Print;//���庯��ָ��p������Ϊvoid
//	//ȥ������������ָ������ͣ�����void (*)(char*)����
//	(*p)("hello world");
//	return 0;
//}


//�Ķ�������Ȥ�Ĵ��룺
//����1
//(*(void (*)())0)();
//void (*)()�Ǻ���ָ�����ͣ�(void (*)())0)��0����ǿ������ת������ʱ0Ϊĳ������ַ
//*(void (*)())0������0��(*(void (*)())0)()�����������



//����2
//void (*signal(int, void(*)(int)))(int);
//signal(int, void(*)(int)),������signal,����������������int�������ͺ�void(*)(int)����ָ������
//void (*)(int);ȥ��siginal������ʣ�µ���һ������ָ������,Ҳ����siginal�����ķ�������
//������ǣ�����һ��void (*)(int)���͵ĺ�����������Ϊsiginal������Ϊint���ͺ�void(*)(int)����
//�������Ϊvoid(*)(int) signal(int, void(*)(int))������������ôд

//����2̫���ӣ���μ򻯣�
//typedef void(*pfun_t)(int);//��void(*)(int)���ͽ���������������pfun_t -- �������Ϊ��typedef void(*)(int) pfun_t������������ôд
//pfun_t signal(int, pfun_t);//��������signal����

//signal��һ����������
//signal�����Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ĺ����Ĳ�����int������������void



//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10, b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	//�ں����&�������ͺ��������Ǻ����ĵ�ַ
//	printf("%p %p %p %p\n", &Add,Add);
//	int(*pa)(int, int) = Add; //����ָ�붨�巽ʽ
//	//���ֵ��÷��������ԣ�*�ǰ���
//	printf("%d\n",(pa)(2, 3));//5 -- Add������ǵ�ַ������pa��Add == pa
//	printf("%d\n",(*pa)(2,3));//5 -- ������
//	//���ں���ָ�룬*û�м�ֵ
//	printf("%d\n",(**pa)(2, 3));//5
//	printf("%d\n",(***pa)(2, 3));//5
//	return 0;
//}

//����ָ����Բ��ý����ã�ֱ��ʹ��ָ���������