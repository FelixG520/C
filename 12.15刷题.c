#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	long int time;
//	scanf("%ld", &time);
//	int h = time / 3600;
//	int min = (time % 3600) / 60;
//	int s = time % 60;
//	printf("%d %d %d\n", h, min, s);
//	return 0;
//}

//int main()
//{
//	float course3, course1, course2;
//	scanf("%f %f %f", &course1, &course2, &course3);
//	float sum = course1 + course2 + course3;
//	float avr = sum / 3.0;
//	printf("%.2f %.2f", sum, avr);
//	return 0;
//}
 
//int main()
//{
//	int n, h, m,o;
//	scanf("%d%d%d", &n, &h, &m);
//	if (m % h == 0)
//		o =n - m / h;
//	else
//		o =n-( m / h + 1);
//	printf("%d\n", o);
//	return 0;
//}

//int main()
//{
//	int n, h, m,o;
//	while (scanf("%d%d%d", &n, &h, &m) != EOF)//��������
//	{
//		if (m % h == 0)
//			o = n - m / h;
//		else
//			o = n - (m / h + 1);
//		printf("%d\n", o);
//	}
//	return 0;
//}

//int main()
//{
//	printf("I lost my cellphone!\n");
//	return 0;
//}

//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man   \n");
//	return 0;
//}

//int main()
//{
//	float score[5] = {0};
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%f", &score[i]);
//	}
//	int sum=0;
//	for (i = 0; i < 5; i++)
//	{
//		sum += score[i];
//	}
//	float average = sum / 5.0;
//	printf("%.1f", average);
//	return 0;
//}

//int main()
//{
//	int a, b,sum;
//	scanf("%x %o", &a, &b);//ע����ô����ʮ�����ƺͰ˽���
//	sum = a + b;
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	float val;
//	int  month, day, discount;
//	scanf("%f %d %d %d", &val, &month, &day, &discount);
//	if (month = day == 11)
//		val *= 0.7;
//	if (month = day == 12)
//		val *= 0.8;
//	if (discount == 1)
//		val -= 50;
//	if (val <= 0)
//		val = 0;
//	printf("%.2f", val);
//	return 0;
//}

//int main()
//{
//	float val;
//	int  month, day, discount;
//	scanf("%f %d %d %d", &val, &month, &day, &discount);
//	if (month = day == 11)
//		val *= 0.7;
//	else if (month = day == 12)
//		val *= 0.8;
//	if (discount == 1)
//		val -= 50;
//	if (val <= 0)
//		val = 0;
//	printf("%.2f", val);
//	return 0;
//}

//int main()
//{
//	int i,n,score[100];
//	scanf("%d", &n);
//	//��ȡ�ɼ�������
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	//ִ�д���
//	for (i = 0; i < n - 1; i++)
//	{
//		//һ��ð������
//		int j;
//		for (j = 0; j <= n - 1 -i; j++)//Ԫ�ؽ���
//		{
//			if (score[j + 1] > score[j])
//			{
//				int tmp = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = tmp;
//			}
//		}
//
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", score[i]);
//	}
//	return 0;
//}

