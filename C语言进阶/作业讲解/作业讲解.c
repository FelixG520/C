#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr = pulArray;//������������Ԫ�ص�ַ -- 6�ĵ�ַ
//	*(pulPtr + 3) += 3;//*(pulPtr + 3) == 9  9+=3 == 12
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6 12
//	return 0;
//}


//дһ�������������ַ���������
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;//����������Ԫ�ص�ַ
//	char* right = str + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;//��һ��Ԫ��
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
//	//scanf("%s", arr);//ȱ���ǣ������ո���޷�����
//	gets(arr);//��ȡһ��,����ע�ո�
//	//������
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//��Sn=a + aa + aaa + aaaa + aaaaa...ǰ����֮�ͣ�����a��һ������
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

//10000���ڵ�ˮ�ɻ���
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		//1.����i��λ�� - nλ��
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i == sum
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
//	printf("���ˮ�ɻ���:\n");
//	int i, a, b, c;
//	for (i = 100; i <= 999; i++) //������ȡֵ��Χ
//	{
//		int a = i % 10;//��λ�� 
//		int b = (i / 10) % 10;//ʮλ�� 
//		int c = i / 100;//��λ�� 
//
//		if (i == a * a * a + b * b * b + c * c * c) //��λ�ϵ��������Ƿ���ԭ��n���
//			printf("%d\t", i);
//	}
//
//	return 0;
//}

//��ӡ����
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
//		for (int i = 0; i < n; i++)//ѭ������
//		{
//			//��������
//			for (int j = 0; j < n - i-1; j++)
//				printf(" ");
//			for (int j = 0; j <2* i+1; j++)
//				printf("*");
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			//��������
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

//��������ʲô
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

//1ƿ��ˮ1Ԫ��������ƿ��һƿ����20�飬�ܺȶ���ƿ��
//int main()
//{
//	int money;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//empty / 2�ܻ���ƿ����empty % 2���µĿ�ƿ��
//	}
//	printf("total = %d\n", total);
//	return 0;
//}

//������ż��ǰ��
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
//		//�������ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ұ�������
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
//	c = a + b;//char���͵ı�����ӣ�������������
//	//char���ͣ�ֻ��8������λ
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

//b�������ʲô��
//int main()
//{
//	unsigned int a = 0x1234;
//	//0x1234 == 0x 00 00 12 34
//	unsigned char b = *(unsigned char*)&a;//�ѵ�ַǿ������ת����unsigned char*�������÷���һ���ֽ����� -- 00
//	printf("%d", b);//��˴洢 -- 00  С�˴洢 -- 52
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };//�з���char��Χ-128~127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 ... -128 127 126 ... 3 2 1 0 -1 -2 ...
//	printf("%d", strlen(a));//strlen��\0,Ҳ����0��0֮ǰ��255��Ԫ��
//	return 0;
//}

//�������
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
//                arr[i][j] = 1;//��һ��
//            if (i == j)
//                arr[i][j] = 1;//�Խ���
//            if (i >= 2 && j >= 1)
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)//����ӡ������
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

/*
�ձ�ĳ�ط�����һ��ıɱ��,����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��
����Ϊ4�����ɷ��Ĺ���:
A˵��������  1 0 
B˵����C     1 0
C˵����D     0 0
D˵��C�ں�˵ 1 1
��֪3����˵���滰һ����˵���Ǽٻ��������������Щ��Ϣдһ��������ȷ������˭������
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
������
5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
Aѡ��˵��B�ڶ����ҵ���
Bѡ��˵���ҵڶ���E����
Cѡ��˵���ҵ�һ��D�ڶ�
Dѡ��˵��C����ҵ���
Eѡ��˵���ҵ��ģ�A��һ
����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������
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