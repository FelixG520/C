#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int ch = 0;
//	int count_A = 0, count_B = 0;
//	while ((ch = getchar()) != '0' && ch != EOF)
//	{
//		if (ch == 'A')
//			count_A++;
//		if (ch == 'B')
//			count_B++;
//	}
//	if (count_A == count_B)
//		printf("%c\n", 'E');
//	else if (count_A > count_B)
//		printf("%c\n", 'A');
//	else if (count_A < count_B)
//		printf("%c\n", 'B');
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != '0' && ch != EOF)
//	{
//		if (ch == 'A')
//			count++;
//		if (ch == 'B')
//			count--;
//	}
//	if (count>0)
//		printf("A\n");
//	else if (count==0)
//		printf("E\n");
//	else
//		printf("B\n");
//	return 0;
//}

//int main()
//{
//	char str[100] = { 0 };
//	gets(str);//����һ��
//	int i = 0,count=0;
//	while (str[i] != '0')
//	{
//		if (str[i] == 'A')
//			count++;
//		else if (str[i] == 'B')
//			count--;
//		i++;
//	}
//	if (count>0)
//		printf("A\n");
//	else if (count==0)
//		printf("E\n");
//	else
//		printf("B\n");
//	return 0;
//}

//int main()
//{
//	int IQ;
//	scanf("%d", &IQ);
//	if (IQ >= 140)
//		printf("Genius\n");
//	return 0;
//}

//int main()
//{
//	int IQ;
//	while (scanf("%d", &IQ) != EOF)
//	{
//		if (IQ >= 140)
//			printf("Genius\n");
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int IQ;
//	while (~scanf("%d", &IQ))
///*
//        ~��λȡ����EOF=-1�������ڼ�������Բ�����ʽ���棬
//		-1�Ĳ���111111111111111111111111111111��
//		    `-1=000000000000000000000000000000
//*/
//	{
//		if (IQ >= 140)
//			printf("Genius\n");
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int score;
//	while (scanf("%d", &score) != EOF)
//	{
//		if (score >= 90)//if(score>=90 && score <= 100)
//		//������д��90<=score<=100��<=�ǲ���������scoreΪ95��90<=95Ϊ�棬TURE=1��1<=100���������Perfect
//			printf("Perfect\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int score;
//	while (scanf("%d", &score) != EOF)
//	{
//		if (score >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int score1,score2,score3;
//	while (scanf("%d%d%d", &score1, &score2, &score3) != EOF)
//	{
//		int max = 0;
//		if (score1 > max)
//			max = score1;
//		if (score2 > max)
//			max = score2;
//		if (score3 > max)
//			max = score3;
//		printf("%d\n", max);
//	}
//	return 0;
//}
 
 
//#include <stdio.h>
//int main()
//{
//	int s[3];
//	while (scanf("%d%d%d", &s[1], &s[2], &s[3]) != EOF)
//	{
//		int max = 0;
//		int i = 0;
//		for (i = 0; i < 3; i++)
//		{
//			if (s[i] > max)
//				max = s[i];
//		}
//		printf("%d\n", max);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
//	while ((ch = getchar()) != EOF)
//	//while ((scanf(" %c",&ch) != EOF)  %cǰ���Ͽո񣬱�ʾ���Կհ��ַ���������ȡ\n
//	//while ((scanf("%c\n",&ch) != EOF) %c�����\n����ʾ����%c��������\n�����ð�\n����
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == s[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//		//���\n
//		getchar();
//	}
//	return 0;
//}


//int main() 
//{
//    int ch;
//    while ((ch = getchar()) != EOF)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        {
//            printf("%c is an alphabet.\n",ch);
//        }
//        else
//            printf("%c is not an alphabet.\n", ch);
//        getchar();
//    }
//    return 0;
//}

//#include <ctype.h>
//int main()
//{
//    int ch;
//    while ((ch = getchar()) != EOF)
//    {
//        if(isalpha(ch))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//            printf("%c is not an alphabet.\n", ch);
//        getchar();
//    }
//    return 0;
//}


//int main()
//{
//    int ch;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch>='a'&&ch<='z')
//        {
//            printf("%c\n", ch-32);
//        }
//        else if (ch >= 'A' && ch <= 'Z')
//            printf("%c\n", ch+32);
//        getchar();
//    }
//    return 0;
//}

//#include <ctype.h>
//int main()
//{
//    int ch;
//    while ((ch = getchar()) != EOF)
//    {
//        if (islower(ch))
//        {
//            printf("%c\n", toupper(ch));//Сдת��д
//        }
//        else if (isupper(ch))
//            printf("%c\n", tolower(ch));//��дתСд
//        getchar();
//    }
//    return 0;
//}


//int main()
//{
//    int a;
//    while (~scanf("%d", &a))
//    {
//        if (a > 0)
//            printf("%d\n", 1);
//        else if (a == 0)
//            printf("%.1f\n", 0.5);
//        else
//            printf("%d\n", 0);
//    }
//    return 0;
//}

//int main()
//{
//    int a,b,c;
//    while (~scanf("%d%d%d", &a,&b,&c))
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (((a == b) && (b != c)) || ((a == c) && (c != b)) || ((b == c) && (c != a)))
//                printf("Isosceles triangle!\n");
//            else if(a==b&&b==c)
//                printf("Equilateral triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}