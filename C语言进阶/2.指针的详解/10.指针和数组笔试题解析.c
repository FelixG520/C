#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//一维数组
//	printf("一维数组\n");
//	int a[] = { 1,2,3,4 };//4*4=16
//	printf("int a[] = { 1,2,3,4 };\n");
//	printf("sizeof(a) = %d\n", sizeof(a));//sizeof(数组名) -- 计算的是数组的大小 -- 单位是字节 -- 16
//	printf("sizeof(a + 0) = %d\n", sizeof(a + 0));//a + 0 -- 数组名是首元素地址 -- 地址大小4/8字节
//	//sizeof(数组名) -- 数组名表示整个数组
//	//&数组名 - 数组名表示整个数组
//	//其余情况，数组名是首元素地址
//	printf("sizeof(*a) = %d\n", sizeof(*a));//首元素地址解引用 -- 首元素大小 -- 4字节
//	printf("sizeof(a + 1) = %d\n", sizeof(a + 1));//第二个元素的地址 -- 地址大小4/8字节
//	printf("sizeof(a[1]) = %d\n", sizeof(a[1]));//第二个元素的大小 -- 4字节
//	printf("sizeof(&a) = %d\n", sizeof(&a));//取出的是数组的地址 -- 地址大小4/8字节
//	printf("sizeof(*&a) = %d\n", sizeof(*&a));//取地址再解引用 -- 数组的大小 -- 16
//	printf("sizeof(&a + 1) = %d\n", sizeof(&a + 1));//取地址+1，跳过整个数组，还是地址 -- 地址大小4/8字节
//	printf("sizeof(&a[0]) = %d\n", sizeof(&a[0]));//第一个元素的地址 -- 地址大小4/8字节
//	printf("sizeof(&a[0] + 1) = %d\n", sizeof(&a[0] + 1));//第二个元素的地址 -- 地址大小4/8字节
//	//字符数组
//	printf("\n字符数组\n");
//	char arr1[] = { 'a','b','c','d','e','f' };
//	printf("char arr1[] = { 'a','b','c','d','e','f' };\n");
//	printf("sizeof(arr1) = %d\n", sizeof(arr1));//计算的是数组大小，6个元素 -- 6个字节
//	printf("sizeof(arr1 + 0) = %d\n", sizeof(arr1 + 0));//数组名首元素地址 -- 地址大小4/8字节
//	printf("sizeof(*arr1) = %d\n", sizeof(*arr1));//首元素地址解引用 -- 首元素是字符，大小 -- 1字节
//	printf("sizeof(arr1[1]) = %d\n", sizeof(arr1[1]));//第二个元素大小 -- 1字节
//	printf("sizeof(&arr1) = %d\n", sizeof(&arr1));//取出的是数组的地址 -- 地址大小4/8字节
//	printf("sizeof(&arr1 + 1) = %d\n", sizeof(&arr1 + 1));//取地址+1，跳过整个数组，还是地址 -- 地址大小4/8字节
//	printf("sizeof(&arr1[0] + 1) = %d\n", sizeof(&arr1[0] + 1));//第二个元素的地址 -- 地址大小4/8字节
//	
//	//strlen遇到\0才停止
//	printf("strlen(arr1) = %d\n", strlen(arr1));//首元素地址开始往后寻找\0,不知道arr后的空间里的值，直到遇到\0停止 -- 随机值
//	printf("strlen(arr1 + 0) = %d\n", strlen(arr1 + 0));//首元素地址开始往后寻找\0,不知道arr后的空间里的值，直到遇到\0停止 -- 随机值
//	//printf("strlen(*arr1) = %d\n", strlen(*arr1));//解引用首元素地址，a --ASCII码值是97，把97作为地址访问 -- 非法访问，程序崩溃
//	//printf("strlen(arr1[1]) = %d\n", strlen(arr1[1]));//第二个元素b -- ASCII码值98，把98作为地址访问 -- 非法访问，程序崩溃
//	printf("strlen(&arr1) = %d\n", strlen(&arr1));//取的是数组的地址，仍然从首元素地址开始往后寻找\0,不知道arr后的空间里的值，直到遇到\0停止 -- 随机值
//	printf("strlen(&arr1 + 1) = %d\n", strlen(&arr1 + 1));//跳过arr，寻找\0,不知道arr后的空间里的值，直到遇到\0停止 -- 随机值（这个值比前面的随机值小6，因为跳过了数组里6个字符）
//	printf("strlen(&arr1[0] + 1) = %d\n", strlen(&arr1[0] + 1));//从第二个元素开始寻找\0,不知道arr后的空间里的值，直到遇到\0停止 -- 随机值（这个值比前面的随机值小1，因为跳过了数组里首字符）
//	
//	printf("\nchar arr2[] = \"abcdef\";\n");
//	char arr2[] = "abcdef";//默认结尾有\0
//	printf("sizeof(arr2) = %d\n", sizeof(arr2));//abcdef+\0 = 7
//	printf("sizeof(arr2 + 0) = %d\n", sizeof(arr2 + 0));//数组名首元素地址 -- 地址大小4/8字节
//	printf("sizeof(*arr2) = %d\n", sizeof(*arr2));//首元素地址解引用 -- 首元素是字符，大小 -- 1字节
//	printf("sizeof(arr2[1]) = %d\n", sizeof(arr2[1]));//第二个元素大小 -- 1字节
//	printf("sizeof(&arr2) = %d\n", sizeof(&arr2));//取出的是数组的地址 -- 地址大小4/8字节
//	printf("sizeof(&arr2 + 1) = %d\n", sizeof(&arr2 + 1));//取地址+1，跳过整个数组，还是地址 -- 地址大小4/8字节
//	printf("sizeof(&arr2[0] + 1) = %d\n", sizeof(&arr2[0] + 1));//第二个元素的地址 -- 地址大小4/8字节
//	
//	printf("strlen(arr2) = %d\n", strlen(arr2));//首元素地址开始往后寻找\0,直到遇到\0停止 -- 6
//	printf("strlen(arr2 + 0) = %d\n", strlen(arr2 + 0));//首元素地址开始往后寻找\0,直到遇到\0停止 -- 6
//	//printf("strlen(*arr2) = %d\n", strlen(*arr2));// 解引用首元素地址，a --ASCII码值是97，把97作为地址访问 -- 非法访问，程序崩溃
//	//printf("strlen(arr2[1]) = %d\n", strlen(arr2[1]));//第二个元素b -- ASCII码值98，把98作为地址访问 -- 非法访问，程序崩溃
//	printf("strlen(&arr2) = %d\n", strlen(&arr2));//取的是数组的地址，仍然从首元素地址开始往后寻找\0 -- 6
//	printf("strlen(&arr2 + 1) = %d\n", strlen(&arr2 + 1));//跳过arr，寻找\0,不知道arr后的空间里的值，直到遇到\0停止 -- 随机值
//	printf("strlen(&arr2[0] + 1) = %d\n", strlen(&arr2[0] + 1));//从第二个元素开始寻找\0,直到遇到\0停止 -- 5（这个值比前面的随机值小1，因为跳过了数组里首字符）
//	
//	printf("\nchar* p = \"abcdef\";\n");
//	char* p = "abcdef";//把常量字符串abcdef中的a的地址存储
//	printf("sizeof(p) = %d\n", sizeof(p));//p存储的是a的地址 -- 地址大小4/8字节
//	printf("sizeof(p + 1) = %d\n", sizeof(p + 1));//首元素地址+1 -- b的地址 -- 地址大小4/8字节
//	printf("sizeof(*p) = %d\n", sizeof(*p));//p存储的是a的地址，首元素地址解引用 -- 首元素是字符，大小 -- 1字节
//	printf("sizeof(p[0]) = %d\n", sizeof(p[0]));//arr[0] == *(arr + 0)  p[0] == *(p + 0) -- a的地址 -- 地址大小4/8字节
//	printf("sizeof(&p) = %d\n", sizeof(&p));//p的地址 -- 地址大小4/8字节
//	printf("sizeof(&p + 1) = %d\n", sizeof(&p + 1));//取地址+1，跳过整个数组，还是地址 -- 地址大小4/8字节
//	printf("sizeof(&p[0] + 1) = %d\n", sizeof(&p[0] + 1));//首元素地址+1 -- b的地址 -- 地址大小4/8字节
//	
//	printf("strlen(p) = %d\n", strlen(p));//首元素地址开始往后寻找\0,直到遇到\0停止 -- 6
//	printf("strlen(p + 1) = %d\n", strlen(p + 1));//第二个元素往后寻找\0,直到遇到\0停止 -- 5
//	//printf("strlen(*p) = %d\n", strlen(*p));// 解引用首元素地址，a --ASCII码值是97，把97作为地址访问 -- 非法访问，程序崩溃
//	//printf("strlen(p[0]) = %d\n", strlen(p[0]));// 解引用首元素地址，a --ASCII码值是97，把97作为地址访问 -- 非法访问，程序崩溃
//	printf("strlen(&p) = %d\n", strlen(&p));//取的是数组的地址，仍然从首元素地址开始往后寻找\0 -- 6
//	printf("strlen(&p + 1) = %d\n", strlen(&p + 1));//跳过arr，寻找\0,不知道arr后的空间里的值，直到遇到\0停止 -- 随机值
//	printf("strlen(&p[0] + 1) = %d\n", strlen(&p[0] + 1));//从第二个元素开始寻找\0,直到遇到\0停止 -- 5（这个值比前面的随机值小1，因为跳过了数组里首字符）
//
//	//二维数组
//	printf("\n二维数组\n");
//	printf("int a[3][4] = { 0 };\n");//三行四列
//	int a2[3][4] = { 0 };
//	printf("sizeof(a2) = %d\n", sizeof(a2));//数组总大小 -- 48
//	printf("sizeof(a2[0][0]) = %d\n", sizeof(a2[0][0]));//第一行第一个元素大小 -- 4
//	printf("sizeof(a2[0]) = %d\n", sizeof(a2[0]));//当成一维数组，每一行是一个元素，而每一行又是一个一维数组 -- 计算这一行的大小 --16
//	//a2[0]相当于第一行的数组名，sizeof(a2[0])把数组名单独放在sizeof()内，计算的是一行的大小
//
//	printf("sizeof(a2[0] + 1) = %d\n", sizeof(a2[0] + 1));//a2[0]没有把数组名单独放在sizeof()内，a2[0]是第一行的数组名，数组名此时是首元素的地址
//	//a2[0]其实就是第一行第一个元素的地址,所以a2[0] + 1是第一行第二个元素的地址 -- 地址大小4/8字节
//
//	printf("sizeof(*(a2[0] + 1)) = %d\n", sizeof(*(a2[0] + 1)));//解引用第一行第二个元素大小 -- 4
//	printf("sizeof(a2 + 1) = %d\n", sizeof(a2 + 1));//第一行地址+1，就是第二行地址
//	//a2是二维数组的数组名，没有sizeof(数组名)，也没有&(数组名)，所以a是首元素地址，而二维数组的首元素是第一行
//
//	printf("sizeof(*(a2 + 1)) = %d\n", sizeof(*(a2 + 1)));//解引用第二行，计算第二行大小 -- 16
//	printf("sizeof(&a2[0] + 1) = %d\n", sizeof(&a2[0] + 1));//第二行地址 -- 地址大小4/8字节，和sizeof(a2 + 1)一样
//	printf("sizeof(*(&a2[0] + 1)) = %d\n", sizeof(*(&a2[0] + 1)));//解引用第二行地址，计算第二行大小 -- 16
//	printf("sizeof(*a2) = %d\n", sizeof(*a2));//a2数组名是首元素地址，也就是第一行，解引用第一行，计算第一行大小 -- 16
//	printf("sizeof(a2[3]) = %d\n", sizeof(a2[3]));//第四行的数组名，虽然没有第四行，但是根据类型计算大小 -- 16
//	return 0;
//}

/*
总结：
数组名的意义：
1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
3. 除此之外所有的数组名都表示首元素的地址。
*/  


//void print2(int(*p)[5], int x, int y)
//{
//			//p是一个数组地址，p+1是下一行的地址，*解引用之后才是数组名
//			printf("%d ", *(*(p + i) + j));//p+i行的第j个元素,*(p + i)相当于找到了这一行的数组名
//			printf("%d ", *(p[i] + j));
//			printf("%d ", (*(p + i))[j]);//* (p + i)既然是数组名，*(p+i) == p[i],(* (p + i))[j]) == p[i][j]
//			printf("%d ", p[i][j]);//*(p+i) == p[i],*(*(p + i) + j) == p[i][j]
//			//（p+i）就是指针在二维数组中行的移动，*（p+i)找到的是第一行这个一维数组的地址，不要忘了，数组的地址和数组首元素地址大小是一样的，*（p+i）+j，就是在这个一维数组里面移动，最后再取值。
//		}
//	}
//}