#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
/*
����				������		������
�ַ����뺯��		fgetc		����������
�ַ��������	    fputc		���������
�ı������뺯��	    fgets		����������
�ı����������		fputs		���������
��ʽ�����뺯��		fscanf		����������
��ʽ���������		fprintf		���������
����������			fread		�ļ�
���������			fwrite		�ļ�
*/   

//fputc
//int main()
//{
//	FILE* pfWrite = fopen("test4.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('a', pfWrite);
//	fputc('b', pfWrite);
//	fputc('c', pfWrite);
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//fgetc
//int main()
//{
//	FILE* pfRead = fopen("test4.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

/*
�Ӽ�������
�������Ļ
����&��Ļ�����ⲿ�豸

���� -- ��׼�����豸 -- stdin -- FILE*
��Ļ -- ��׼����豸 -- stdout -- FILE*
��һ������Ĭ�ϴ򿪵��������豸
*/

//int main()
//{
//	//���Զ�ȡ��׼�����豸�����ڱ�׼����豸�����
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


//fgets -- char *fgets( char *string, int n, FILE *stream );
//int main()
//{
//	char arr[1024]= {0};
//	FILE* pf = fopen("test4.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(arr,1024,pf);
//	printf("%s", arr);
//	fgets(arr, 1024, pf);
//	printf("%s", arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//puts
//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("test4.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(arr, 1024, pf);
//	puts(arr);//puts�Զ�����
//	fgets(arr, 1024, pf);
//	puts(arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fputs -- int fputs( const char *string, FILE *stream );
//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("test4_2.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//д�ļ�fputs -- �����Զ�����
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	//�Ӽ��̶�ȡһ����Ϣ
//	fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
//	fputs(buf, stdout);//�������׼�����
//
//	//������д���ȼ�
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//fprintf -- int fprintf( FILE *stream, const char *format [, argument ]...);
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"hello" };
//	FILE* pf = fopen("test4_3.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fscanf -- int fscanf( FILE *stream, const char *format [, argument ]... );
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test4_3.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	//��ʽ������������
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout,"%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}
//scanf�ǴӼ�������,fscanf�Ǵ��ı����룬fprintf��д���ı� , printf��д����Ļ



//sscanf -- int sscanf(const char* buffer, const char* format[, argument] ...);
//sprintf -- int sprintf( char *buffer, const char *format [, argument] ... );

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

/*
4.1 �Ա�һ�麯����
scanf / fscanf / sscanf
printf / fprintf / sprintf
������ʾ������亯����ʹ�úͶԱ�
*/
/*
scanf��printf   ����Ա�׼�������ͱ�׼������ĸ�ʽ������/������
fscanf��fprintf ���������������������������ĸ�ʽ������/������
sscanf��sprintf sscanf�Ǵ��ַ����ж�ȡ��ʽ��������
                sprintf�ǰѸ�ʽ����������ɣ��洢�����ַ���
*/



//fwrite -- size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
//struct S
//{
//    char name[20];
//    int age;
//    double score;
//};
//int main()
//{
//    struct S s = { "����",20,55.6 };
//    FILE* pf = fopen("test4_4.txt", "wb");//��wb����ֻд�� Ϊ��������ݣ���һ���������ļ�
//    if (pf == NULL)
//    {
//        return 0;
//    }
//    //��������ʽд�ļ�
//    fwrite(&s, sizeof(struct S), 1, pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//fread -- size_t fread( void *buffer, size_t size, size_t count, FILE *stream );
//int main()
//{
//    struct S tmp = { 0 };
//    FILE* pf = fopen("test4_4.txt", "rb");//��rb����ֻ���� Ϊ���������ݣ���һ���������ļ�
//    if (pf == NULL)
//    {
//        return 0;
//    }
//    //��������ʽ���ļ�
//    fread(&tmp, sizeof(struct S), 1, pf);
//    printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

