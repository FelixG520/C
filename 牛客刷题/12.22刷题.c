#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//    long n;
//    int arr[40] = { 0 };
//    scanf("%ld", &n);
//    int i = 0;
//    while (n)
//    {
//        arr[i] = n % 6;//�ռ�ÿ��%��������i����λ��i=1�Ǹ�λ������10��ʮλ
//        i++;
//        n /= 6;//��6
//    }
//    for (i--; i >= 0; i--)
//        printf("%d", arr[i]);
//    return 0;
//}

//int main()
//{
//    long n, sum = 0, i = 1;
//    scanf("%ld", &n);
//    while (n)
//    {
//        sum += n % 6 * i;//�ռ�ÿ��%��������i����λ��i=1�Ǹ�λ������10��ʮλ
//        n /= 6;//��6
//        i *= 10;//��һλ
//    }
//    printf("%ld", sum);
//    return 0;
//}

//int sum(int x)
//{
//	int cnt = 0;
//	for (int i = 0; i <= x; i++)
//	{
//		cnt += i;
//	}
//	return cnt;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum(n);
//	printf("%d", sum(n));
//	return 0;
//}

//int main()
//{
//	long int n,cnt = 0;
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++)
//	{
//		cnt += i;
//	}
//	printf("%ld", cnt);
//	return 0;
//}

//int main()
//{
//	int h, m;
//	long int min;
//	scanf("%d:%d %ld", &h, &m, &min);
//	int hour = (min / 60) + h;
//	int min2 = m + min % 60;
//	if (min2 >= 60)
//	{
//		hour += 1;
//		min2 %= 60;
//	}
//	if (hour >= 24)
//	{
//		hour %= 24;
//	}
//	printf("%.02d:%.02d", hour,min2 );
//	return 0;
//}

//int main()
//{
//	long int n,min;
//	scanf("%ld", &n);
//	if ((n+1) % 12 == 0)
//		min = ((n + 1)/12) * 4 - 2;
//	else
//		min = ((n + 1)/12) * 4 + 2;
//	printf("%ld", min);
//	return 0;
//}

//int main()
//{
//	long int n, min;
//	scanf("%ld", &n);
//	printf("%ld", (n/12)*4+2);
//	return 0;
//}


//int main() 
//{
//    long long m, n;
//    scanf("%d %d", &m, &n);
//    long long p = m * n;
//    while (n != 0) 
//    {
//        long long t = m % n;
//        m = n;
//        n = t;
//    }
//    long long max = m;
//    long long min = p / m;
//    printf("%lld", max + min);
//}


//С��������ڿ���ѧϰ����������������������Լ������С����������������Ȼ���������������������Լ������С������֮�ͣ�������������������⡣
//������� - ʱ�临�Ӷȹ���
//int main()
//{
//	long n, m;
//	scanf("%d%d", &n, &m);
//	long max = n > m ? m : n;//����n��m����СֵΪ���Լ��
//	long min = n > m ? n : m;//����n��m����СֵΪ��С������
//	while (1)
//	{
//		if (n % max == 0 && m % max == 0)
//			break;
//		max--;//���������Լ���ͼ�1������ѭ�������ǣ���ʱmax�������Լ��
//	}
//	while (1)
//	{
//		if (min % n == 0 && min % m == 0)
//			break;
//		min++;//���������Լ���ͼ�1������ѭ�������ǣ���ʱmax�������Լ��
//	}
//	printf("%d", min + max);
//	return 0;
//}

//շת�����
//int main()
//{
//	long long n, m;
//	scanf("%d%d", &n, &m);
//	long long tmp = 0, max = 0, min = 0, n2 = n, m2 = m;
//	while (tmp = n % m)
//	{
//	//�磺24 18��24%18=6  18%6=0 6Ϊ���Լ��
//		n = m;
//		m = tmp;
//	}
//	max = m;
//	//��С������
//	min = n2 * m2 / max;// 24*18/6
//	printf("%d", min + max);
//	return 0;
//}

/*
С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1��
���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ��١�
*/
//int main()
//{
//	long int n, i = 0, sum = 0;
//	scanf("%ld", n);
//	while (n)
//	{
//		long m = n % 10;
//		if (m % 2 == 1)
//			m = 1;
//		else
//			m = 0;
//		sum = +m * pow(10, i);//����101 1*10^0 + 0*10^1 + 1*10^2 = 101  i=0,1,2...
//		i++;
//		n/=10;
//	}
//	return 0;
//}

//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
/*
1.���ֻ��1��̨������Ȼֻ��һ������
2.���������̨�ף���ô������������һ���Ƿ�2������ÿ����1������һ����һ����2�� 
3.���̨�׼�������2����Ϊn�Ļ�����ʱ���ǰ�N��̨��ʱ����������n�ĺ�������ΪF(n)
  ��һ������ʱ����2�ֲ�ͬ��ѡ��:һ�ǵ�һ����1��,��ʱ��������Ŀ���ں���ʣ�µ�n - 1��̨�׵�������Ŀ,��ΪF(n-1)
                                ���ǵ�һ����2��,��ʱ��������Ŀ���ں���ʣ�µ�n - 2��̨�׵�������Ŀ,��ΪF(n-2)
  ���N��̨�׵Ĳ�ͬ����������Ϊ:F(n)=F(n-1)+F(n-2),���ѿ�������쳲���������  
  */ 
//int f(int n)
//{
//    if (n <= 2)
//        return n;
//    else
//        return f(n - 1) + f(n - 2);
//}
//
//int main()
//{
//    long n;
//    scanf("%d", &n);
//    int ret = f(n);
//    printf("%d", ret);
//    return 0;
//}

/*
��ʦ����С����һ�����������У�Ҫ��С���ְ��������ȥ�غ󰴴�С�������򡣵�����ʦ����������̫���ˣ�С����û�취���ĵ�ȥ�ز����������������
��һ�а���һ��������n����ʾ��ʦ������������n��������������n�У�ÿ��һ��������k��Ϊ������ÿһ��Ԫ�ص�ֵ��(1 �� n �� 105��1 �� k �� n)
*/
//int main()
//{
//    long n, arr[100001] = { 0 };
//    scanf("%d", &n);
//    int tmp;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;//������ʹ���ظ������֣�Ҳ������ͬһ���ռ�
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//            printf("%ld ", arr[i]);
//    }
//    return 0;
//}

//���ӣ�https://www.nowcoder.com/questionTerminal/e09de1fc11db4a438cf8f0668848660d
//��Դ��ţ����
//����ף���ĸ��70����֮�ʣ���ʦ��С���ֳ���һ�����⡣��Ҷ�֪��China��Ӣ����д��CHN����ô����һ���ַ���s������Ҫ������ͳ��s�������С�CHN���ĸ�����
//�����еĶ��壺���������±�a < b < c����ô��s[a]s[b]s[c]���͹���s��һ�������С��硰ABC�����������С�A������B������C������AB������AC������BC������ABC����  

//int main()
//{
//    char arr[8000] = { 0 };
//    scanf("%s", arr);
//    //ͳ��CHN�ĸ���
//    long int c = 0;
//    long int ch = 0;
//    long int chn = 0;
//    char* p = arr;
//    while (*p)
//    {
//        if (*p == 'C')
//            c++;
//        else if (*p == 'H')
//            ch += c;
//        else if (*p == 'N')
//            chn += ch;
//        p++;
//    }
//    printf("%ld\n", chn);
//    return 0;
//}

//int main()
//{
//    int arr[4] = { 0 },i;
//    for (int i = 0; i < 4; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int max = arr[0];
//    for (i = 1; i < 4; i++)
//        if (arr[i] > max)
//            max = arr[i];
//    printf("%d", max);
//    return 0;
//}


//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score >= 0 && score <= 100)
//    {
//        switch (score / 10)
//        {
//        case 10:
//        case 9:
//            printf("A\n");
//            break;
//        case 8:
//            printf("B\n");
//            break;
//        case 7:
//            printf("C\n");
//            break;
//        case 6:
//            printf("D\n");
//            break;
//        case 5:
//        case 4:
//        case 3:
//        case 2:
//        case 1:
//        case 0:
//            printf("E\n");
//            break;
//        }
//    }
//    else
//        printf("F\n");
//    return 0;
//}

int max(int a, int b, int c)
{
    int max = a > b ? a : b;
    max = max > c ? max : c;
    return max;
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    float m =(float) max(a + b, b, c) / (max(a, b + c, c) + max(a, b, b + c));
    printf("%.2f", m);
    return 0;
}