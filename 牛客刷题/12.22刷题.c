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
//        arr[i] = n % 6;//收集每次%到的数，i代表位，i=1是个位，等于10是十位
//        i++;
//        n /= 6;//除6
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
//        sum += n % 6 * i;//收集每次%到的数，i代表位，i=1是个位，等于10是十位
//        n /= 6;//除6
//        i *= 10;//下一位
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


//小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。
//暴力求解 - 时间复杂度过大
//int main()
//{
//	long n, m;
//	scanf("%d%d", &n, &m);
//	long max = n > m ? m : n;//假设n和m的最小值为最大公约数
//	long min = n > m ? n : m;//假设n和m的最小值为最小公倍数
//	while (1)
//	{
//		if (n % max == 0 && m % max == 0)
//			break;
//		max--;//若不是最大公约数就减1，继续循环，若是，此时max就是最大公约数
//	}
//	while (1)
//	{
//		if (min % n == 0 && min % m == 0)
//			break;
//		min++;//若不是最大公约数就减1，继续循环，若是，此时max就是最大公约数
//	}
//	printf("%d", min + max);
//	return 0;
//}

//辗转相除法
//int main()
//{
//	long long n, m;
//	scanf("%d%d", &n, &m);
//	long long tmp = 0, max = 0, min = 0, n2 = n, m2 = m;
//	while (tmp = n % m)
//	{
//	//如：24 18，24%18=6  18%6=0 6为最大公约数
//		n = m;
//		m = tmp;
//	}
//	max = m;
//	//最小公倍数
//	min = n2 * m2 / max;// 24*18/6
//	printf("%d", min + max);
//	return 0;
//}

/*
小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。
如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
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
//		sum = +m * pow(10, i);//例：101 1*10^0 + 0*10^1 + 1*10^2 = 101  i=0,1,2...
//		i++;
//		n/=10;
//	}
//	return 0;
//}

//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
/*
1.如果只有1级台阶那显然只有一种跳法
2.如果有两级台阶，那么有两种跳法，一种是分2次跳，每次跳1级，另一种是一次跳2级 
3.如果台阶级数大于2，设为n的话，这时我们把N级台阶时的跳法看成n的函数，记为F(n)
  第一次跳的时候有2种不同的选择:一是第一次跳1级,此时的跳法数目等于后面剩下的n - 1级台阶的跳法数目,即为F(n-1)
                                二是第一次跳2级,此时的跳法数目等于后面剩下的n - 2级台阶的跳法数目,即为F(n-2)
  因此N级台阶的不同跳法的总数为:F(n)=F(n-1)+F(n-2),不难看出就是斐波那契数列  
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
老师给了小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序。但是老师给出的序列太长了，小乐乐没办法耐心的去重并排序，请你帮助他。
第一行包含一个正整数n，表示老师给出的序列有n个数。接下来有n行，每行一个正整数k，为序列中每一个元素的值。(1 ≤ n ≤ 105，1 ≤ k ≤ n)
*/
//int main()
//{
//    long n, arr[100001] = { 0 };
//    scanf("%d", &n);
//    int tmp;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;//这样即使有重复的数字，也被存在同一个空间
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//            printf("%ld ", arr[i]);
//    }
//    return 0;
//}

//链接：https://www.nowcoder.com/questionTerminal/e09de1fc11db4a438cf8f0668848660d
//来源：牛客网
//在庆祝祖国母亲70华诞之际，老师给小乐乐出了一个问题。大家都知道China的英文缩写是CHN，那么给你一个字符串s，你需要做的是统计s中子序列“CHN”的个数。
//子序列的定义：存在任意下标a < b < c，那么“s[a]s[b]s[c]”就构成s的一个子序列。如“ABC”的子序列有“A”、“B”、“C”、“AB”、“AC”、“BC”、“ABC”。  

//int main()
//{
//    char arr[8000] = { 0 };
//    scanf("%s", arr);
//    //统计CHN的个数
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