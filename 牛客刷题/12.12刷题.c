#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("abc\ndef");
//	//c����ת���ַ�
//	printf("%d",strlen("c:\test\040\teat.c"));
//	//   \t -- tab -- ˮƽ�Ʊ��
//	//   \041 -- \ddd d��8��������
//	//   ��33��ΪASCII��ֵ������ַ�
//	printf("%c\n", '\041');
//	return 0;
//}


//int main()
//{
//    //sizeof - ������ - ���Ǻ���,���Բ�������
//    //sizeof(int)
//    int a1 = 10;
//    printf("%d\n",sizeof(int));
//    printf("%d\n", sizeof (a1));
//    printf("%d\n", sizeof a1);
//    int a = sizeof(short int);
//    int b = sizeof(int);
//    int c = sizeof(long int);
//    int d = sizeof(long long int);
//    printf("The size of short is %d bytes.\n", a);
//    printf("The size of int is %d bytes.\n", b);
//    printf("The size of long is %d bytes.\n", c);
//    printf("The size of long long is %d bytes.\n", d);
//    return 0;
//}

//int main()
//{
//	printf("%d\n", 100);//%d -- ����
//	printf("%c\n", 100);//%c -- �ַ� 100���ASCIIֵ
//	printf("%s\n", "abcdef");//%s -- ��ӡ�ַ���
//	int a = 10;
//	printf("%p\n", &a);//ȡ��ַ
//	printf("%x\n", &a);//16����ȡ��ַ
//	printf("0%o 0X%X",1234,1234);
//	return 0;
//}
//https://zh.cppreference.com/w/c/io/fscanf �����ʽ����

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b = a % 10;
//	int c = a/10 % 10;
//	int d = a/100 % 10;
//	int e = a/1000 % 10;
//	printf("%d%d%d%d", b,c,d,e);
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while(n!=0)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	ch = ch + 32;
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch ;
//	//EOF -- end of file
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		//putchar(ch + 32);
//		getchar();//����\n��--�س�
//	}
//	return 0;
//}

//���뻺�����ĸ���
//getchar() ���ȡ�س�
//scanf()   �����ȡ�س�

//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺%s",password);
//	scanf("%s", &password);
//	printf("��ȷ�ϣ�Y/N��:");
//	getchar();//����������\n
//
//	int ch = getchar();//
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}