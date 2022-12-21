#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int n;
//	float score[101],sum=0;
//	while (~scanf("%d", &n))
//	{
//		int i,j;
//		for (i = 0; i < n; i++)
//			scanf("%f", &score[i]);
//
//		for (i = 0; i < n-1; i++)//n个数的数列总共扫描n-1次
//		{
//			for (j = 0; j < n - 1 - i; j++)//每一趟扫描到a[n-i-2]与a[n-i-1]比较为止结束
//			{
//				if (score[j] > score[j + 1])//后一位数比前一位数小的话，就交换两个数的位置（升序）
//				{
//					float tmp = score[j + 1];
//					score[j + 1] = score[j];
//					score[j] = tmp;
//				}
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			sum += score[i];
//		}
//		float average = sum / n;
//		printf("%.2f %.2f %.2f", score[n - 1], score[0], average);
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	float score, sum = 0.0;
//	float max = 0.0;
//	float min = 100.0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%f", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f %.2f %.2f", max, min, sum / n);
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char passwd1[100] = { 0 };
//	char passwd2[100] = { 0 };
//	while (~scanf("%s %s", &passwd1, &passwd2))
//	{
//		//要用库函数字符串比较函数strcmp
//		if (strcmp(passwd1, passwd2) == 0 )
//			printf("same");
//
//		else
//			printf("different");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10];
//	int m, n,sum=0;
//	while (~scanf("%d %d", &m, &n))
//	{
//		int i, j;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				if (arr[i][j] > 0)
//					sum += arr[i][j];
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10];
//	int m, n, sum = 0;
//	while (~scanf("%d %d", &m, &n))
//	{
//		int i, j;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				scanf("%d", &arr[i][j]);
//				if (arr[i][j] > 0)
//					sum += arr[i][j];
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//int main()
//{
//	int i,arr[100];
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[9 - i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[50], n, sum = 0;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//			sum += arr[i];
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//int main()
//{
//	int i, arr[10], cnt1 = 0, cnt2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > 0)
//			cnt1++;
//		else
//			cnt2++;
//	}
//	printf("positive:%d\nnegative:%d\n", cnt1, cnt2);
//	return 0;
//}

//int main()
//{
//	int i, arr[10], cnt1 = 0, cnt2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > 0)
//			cnt1++;
//		else
//			cnt2++;
//	}
//
//	printf("positive:%d\nnegative:%d\n", cnt1, cnt2);
//	return 0;
//}


//int main()
//{
//	int arr[50],n,sum=0;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0; i < n; i++)
//		{
//			sum += arr[i];
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[50], n, sum = 0;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//			sum += arr[i];
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[100],n;
//	int max = 0, min = 100;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i] > max)
//				max = arr[i];
//			if (arr[i] < min)
//				min = arr[i];
//		}
//		printf("%d", max - min);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[100], n;
//	int max = 0, min = 100;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//			if (arr[i] > max)
//				max = arr[i];
//			if (arr[i] < min)
//				min = arr[i];
//		}
//
//		printf("%d", max - min);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[100], n;
//	while (~scanf("%d", &n))
//	{
//		int i, cnt1 = 0, cnt2 = 0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (i = 0; i < n - 1; i++)//0~n-2+1 仍是n个数
//		{
//			if (arr[i] >= arr[i + 1])
//				cnt1++;//升序记数
//			else if (arr[i] <= arr[i + 1])
//				cnt2++;//降序记数
//		}
//		if (cnt1 == n - 1 || cnt2 == n - 1)
//			printf("sorted");
//		else
//			printf("unsorted");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[50], m,n;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		scanf("%d", &m);
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i] != m)
//			{
//				printf("%d ", arr[i]);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[50], del,n;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		scanf("%d", &del);
//		//删除的动作
//		int j = 0;//记录存放数据位置的下标
//		for (i = 0; i < n; i++) 
//		{
//			if (arr[i] != del)
//			{
//				arr[j++] = arr[i];//先使用再++。0  1  2  3...
//			}
//		}
//		//此时的j就是删除元素的个数
//		for (i = 0; i < j; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5000], n;
//	while (~scanf("%d", &n))
//	{
//		int i,j;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		//去重
//		for (i = 0; i < n; i++)
//		{
//			//判断arr[i]是否在后边出现
//			for (j = i+1; j < n; j++)
//			{
//				if (arr[i] == arr[j])
//				{
//					//去重，后边的元素往前覆盖
//					int k = 0;
//					for (k = j; k < n-1; k++)
//					{
//						arr[k] = arr[k + 1];
//					}
//					n--;//删除完后，n的值少1
//					j--;//j++后会跳过一个数，因此要再--
//				}
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n, m,i,j,k;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int arr3[200] = { 0 };//合并数组
//	//输入m,n
//	scanf("%d %d", &n, &m);
//	//输入两个有序数列
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//合并有序序列
//	i = 0, j = 0, k = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k] = arr1[i];
//			k++,i++;
//			//或arr3[k++]=arr1[i++]
//			//或printf("%d ",arr1[i++]);
//		}
//		else
//		{
//			arr3[k] = arr2[j];
//			k++, j++;
//			//或arr3[k++]=arr2[j++]
//			//或printf("%d ",arr2[j++]);
//		}
//	}
//
//	if (i == n)//arr1先遍历完，把arr2剩下的元素加到arr3
//	{
//		for (; j < m; j++)
//		{
//			arr3[k] = arr2[j];
//			k++;
//			//arr3[k++]=arr2[i++]
//		}
//	}
//	else//arr2先遍历完，把arr1剩下的元素加到arr3
//	{
//		for (; i< n; i++)
//		{
//			arr3[k] = arr1[i];
//			k++;
//			//arr3[k++]=arr2[i++]
//		}
//	}
//	//打印arr3
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//
//	return 0;
//}