#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n, x, i, cnt = 0, arr[100] = { 0 };
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//			cnt++;
//	}
//	printf("%d", cnt);
//	return 0;
//}


//int main() 
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;\n");//�������ĸ��ո�
//	return 0;
//}

//����n��������һ������x��С�������n���������ж�x���ּ��Σ����̰���ʵ�֡�
//int main()
//{
//    int n = 1;
//    int count = 0;
//    for (int i = 100; i <= 999; i++)
//    {
//        n = 1;
//        for (int j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                n = 0;
//            }
//        }
//        if (n!=0)
//        {
//            count++;
//        }
//    }
//    printf("%d ", count);
//    return 0;
//}

//int is_prime(int n)
//{
//	//��2~n-1֮������Գ�
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i, cnt = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		//�ж��Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			cnt++;
//		}
//	}
//	printf("%d", cnt);
//}

//����һ���������У�KiKi������е��ظ�������ȥ��������ȥ�غ�����д�С�������������
//int main()
//{
//	int i, n, arr1[1001] = { 0 }, arr2[1001] = { 0 };
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//		arr2[arr1[i]] = arr1[i];
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr2[i] != 0)
//			printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i, n, arr[1001] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int m;
//		scanf("%d", m);
//		arr[m] = m;
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�������
//int main()
//{
//	int i,j, n, arr[1001] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//ð������
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	//ȥ�أ�����
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			//�Ѵ�i+1�±������Ԫ����ǰ����
//			int k = 0;
//			for (k = i; k < n - 1; k++)
//			{
//				arr[k] = arr[k + 1];
//			}
//			n--;
//			i--;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//���ӣ�https://www.nowcoder.com/questionTerminal/0ab593ca56b1476eb05b1ff848fd7fcc
//��Դ��ţ����
//
//KiKiѧϰ�˽ṹ���ָ�룬���˽��˽ṹ�����Ϳ��Զ�����������ͬ���ͳ�Ա����ָ�뱾�����ڴ��ַ�����������ݵ�����һ�ַ�ʽ��
//�������뽫������������ͨ���ṹ���ָ��ķ�ʽ������һ���γ�һ��������������ÿ������ǽṹ�����ͣ������������ݳ�Ա��data���ͽṹ��ָ�����ͳ�Ա��next����
//ÿ������ָ�벿��ָ����һ������Ľ�㡣���彨���������£�������n���������������������˳����һ����ͷ���ĵ�����������һ������m, ���������е�ֵΪm�Ľ��ȫ��ɾ����
//���ɾ����ĵ�������Ϣ�� 

//������Ķ���
//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ���� -- ͬ���͵��¸����ĵ�ַ
//
//};
//
//int main()
//{
//	struct Node* list = NULL;//ָ�������ָ��
//	struct Node* tail = NULL;//βָ�� -- ָ������β��Ԫ�ص�ָ��
//	//����n
//	int n;
//	scanf("%d", &n);
//	int i,m;
//	int d;//Ҫɾ����Ԫ��
//	//����n�����֣���β�����뵽������
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		//malloc������void*����ָ�룬Ҫǿ������ת��
//		struct Node*  pn = (struct Node*)malloc(sizeof(struct Node));//���ٽڵ��С,malloc������Ƭ��ַ��ָ��
//		//�����ڵ�
//		pn->data = m;
//		pn->next = NULL;
//		//�����һ��Ԫ��
//		if (list == NULL)
//		{
//			list = pn;
//			tail = pn;
//		}
//		//��������Ԫ��
//		else
//		{
//			tail->next = pn;
//			tail = pn;
//		}
//	}
//	//����Ҫɾ����Ԫ��
//	scanf("%d", &d);
//	//ɾ��������ָ��Ԫ��
//	struct Node* cur = list;
//	struct Node* pre = NULL;
//	while (cur != NULL)
//	{
//		//�ҵ���Ҫɾ����Ԫ��
//		if (cur->data == d)
//		{
//			//ɾ��
//			struct Node* pd = cur;
//			if (cur == list)//ɾ��������ǵ�һ���ڵ�
//			{
//				list = list->next;
//				cur = cur->next;
//			}
//			else//ɾ���Ĳ��ǵ�һ���ڵ�
//			{
//				pre->next = cur->next;
//				cur = pre->next;
//			}
//			free(pd);
//			n--;//ɾ��һ��Ԫ�أ����ȼ�1
//		}
//		else
//		{
//			pre = cur;//preʼ�ռ�¼curǰһ�����ĵ�ַ
//			cur = cur->next;
//		}
//	}
//	//���
//	printf("%d\n", n);
//	cur = list;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	//�ͷ�����
//	cur = list;
//	struct Node* del = NULL;
//	while (cur != NULL)
//	{
//		del = cur;
//		cur = cur->next;
//		free(del);
//	}
//	list = NULL;
//	return 0;
//}