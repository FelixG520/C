#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	float a, b, c, d, e;
//	while (~scanf("%f%f%f%f%f", &a, &b, &c, &d, &e))
//	{
//		printf("%.1f %.1f %.1f %.1f %.1f %.1f\n", a, b, c, d, e, (a + b + c + d + e));
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	float score[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		//��ȡһ���˵�5�Ƴɼ�
//		float sum = 0.0;
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%f", &score[j]);
//			sum += score[j];
//		}
//		for (j = 0; j < 5; j++)
//		{
//			printf("%.1f ", score[j]);
//		}
//		printf("%.1f \n", sum);
//	}
//	return 0;
//}

//int main()
//{
//	int n, m,m1,n1, arr[100][100] = {0};
//	while (~scanf("%d%d", &n, &m))
//	{
//		int i, j;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		scanf("%d%d", &n1, &m1);
//		printf("%d\n", arr[n1 - 1][m1 - 1]);
//	}
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[100] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i]);
//            printf("%d ", arr[i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = {0};
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            //��Ȼ����һ�У������Զ�����ά����Ĺ�������
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//           printf("%d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int m = 0;
//    int tmp = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 1; i <= m * n; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        printf("%d ", tmp);
//        if (i % m == 0)//ÿ���m��Ԫ�ػ���
//            printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//    int n, m, x = 0, y = 0;
//    int arr[100][100] = {0};
//    int max = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//                x = i + 1;
//                y = j + 1;
//            }
//        }
//    }
//    printf("%d %d\n", x, y);
//    return 0;
//}

//int main()
//{
//    int n, m,i,j;
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    int cnt = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for ( i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                cnt++;
//        }
//    }
//    if (cnt == m * n)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    return 0;
//}

//int main()
//{
//    int n, m, i, j;
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    int cnt = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                printf("No\n");
//                return 0;//��ʾ���뵽�˽��������ۺ��滹��û�д���
//            }
//
//        }
//    }
//    printf("Yes\n");//���û��ӡNo��˵�����     
//    return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i, j, n, sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i > j)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	if (sum == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i, j, n, sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i > j)
//			{
//				if (arr[i][j] != 0)
//				{
//					printf("NO\n");
//					return 0;
//				}
//			}
//		}
//	}
//	printf("YES\n");
//	return 0;
//}

//int main()
//{
//    int n, m,i,j;
//    int arr[100][100] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//int main()
//{
//    int n, m, i, j, k;
//    int arr[100][100] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    scanf("%d", &k);
//    getchar();//�õ���������\n��ֻ�ж��ַ��ſ���
//    int a,b;
//    char t;
//    for (i = 0; i < k; i++)//k�β���
//    {
//        //ÿһ�β����Ĺ���
//        scanf("%c %d %d", &t, &a, &b);//a,bҪ�������л���
//        //canf(" %c %d %d", &t, &a, &b);//%cǰ���Ͽո񣬿����������հ��ַ���Ҳ�ǽ��\n��һ�ַ���
//        if (t == 'r')//������
//        {
//            //�м��оͽ�������
//            for (j = 0; j < m; j++)
//            {  
//                //��Ԫ�ؽ���
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        else if (t == 'c')//������
//        {
//            //�м��оͽ�������
//            for (j = 0; j < n; j++)
//            {
//                //��Ԫ�ؽ���
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//            }
//        }
//    }
//    //��ӡ���
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

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
//                arr[i][j] = 1;
//            if (i == j)
//                arr[i][j] = 1;
//            if (i >= 2 && j >= 1)
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

int main()
{
    int n, i, j;
    char arr[3][3] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%c", &arr[i][j]);
            getchar();
        }
    }
    //�ж���Ӯ
    char flag = 'o';
    for (i = 0; i < 3; i++)
    {
        //�ж���
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'o')
        {
            flag = arr[i][1];
            break;
        }
        //�ж���
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'o')
        {
            flag = arr[1][i];
            break;
        }
    }
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'o')
    {
        flag = arr[1][1];
    }
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'o')
    {
        flag = arr[1][1];
    }
    if ('K' == flag)
    {
        printf("KiKi wins!\n");
    }
    else if ('B' == flag)
    {
        printf("BoBo wins!\n");
    }
    else
    {
        printf("No winner!\n");
    }
    return 0;
}