#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


//int main()
//{
//    int i, max, min, a[10];
//
//    printf("Please enter 10 integers:\n");
//
//    for (i = 0; i < 10; i++)
//
//        scanf("%d", &a[i]);
//
//    max = min = a[0];
//
//    for (i = 1; i < 10; i++)
//    {
//        if (a[i] > max)
//            max = a[i];
//
//        if (a[i] < min)
//            min = a[i];
//    }
//
//    printf("max = %d, min = %d\n", max, min);
//    return 0;
//}

//int main()
//{
//    int max, min, arr[10],i;
//    int size = sizeof(arr) / sizeof(arr[0]);
//    printf("请输入十个数字：");
//    for (i = 0; i < size; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    max = min = arr[0];
//    for (i = 1; i < size; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//        if (arr[i]< min)
//            min = arr[i];
//    }
//    printf("max=%d,min=%d", max, min);
//
//    return 0;
//}


int main()
{
	int max,min,arr[10],i;
	printf("输入10个数：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", arr[i]);
	}
	max = min = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] >= max)
			max=arr[i];
		if (arr[i] < min)
			min = arr[i];

	}
	printf("max=%d,min=%d", max, min);

	return 0;
}