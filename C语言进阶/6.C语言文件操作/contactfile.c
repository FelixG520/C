//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include "contactfile.h"
//
////��������
////��ʼ��ͨѶ¼����
//void InitContact(struct Contact* ps)
//{
//	//��ʼ�������˵Ŀռ䣬�Ժ�ÿ�ο���2��
//	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
//	if (ps->data == NULL)
//	{
//		return;
//	}
//	ps->size = 0;
//	ps->capacity = DEFAULT_SZ;
//	//���ļ����Ѿ���ŵ�ͨѶ¼�е���Ϣ���ص�ͨѶ¼��
//	LoadContact(ps);
//}
//
////��������
//void CheckCapacity(struct Contact* ps);
////�����ļ��е���Ϣ��ͨѶ¼
//void LoadContact(struct Contact* ps)
//{
//	struct PeoInfo tmp = { 0 };
//	FILE* pfRead = fopen("contact.dat", "rb");
//	if (pfRead == NULL)
//	{
//		printf("LoadContact::%s\n", strerror(errno));
//		return;
//	}
//	//��ȡ�ļ��ŵ�ͨѶ¼��
//	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))
//	{
//		CheckCapacity(ps);
//		ps->data[ps->size] = tmp;
//		ps->size++;
//	}
//	fclose(pfRead);
//	pfRead = NULL;
//}
//
////����һ����Ϣ��ͨѶ¼
//void CheckCapacity(struct Contact* ps)
//{
//	if (ps->size == ps->capacity)
//	{
//		//����
//		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
//		if (ptr != NULL)
//		{
//			ps->data = ptr;
//			ps->capacity += 2;
//			printf("���ݳɹ���\n");
//		}
//		else
//		{
//			printf("����ʧ�ܣ�\n");
//		}
//	}
//}
//void Addcontact(struct Contact* ps)
//{
//	//��⵱ǰͨѶ¼������
//	//���˾����ӿռ䣬������ִ�в���
//	CheckCapacity(ps);
//	//��������
//	printf("���������֣�");
//	scanf("%s", ps->data[ps->size].name);
//	printf("���������䣺");
//	scanf("%d", &(ps->data[ps->size].age));
//	printf("�������Ա�");
//	scanf("%s", ps->data[ps->size].sex);
//	printf("������绰��");
//	scanf("%s", ps->data[ps->size].tele);
//	printf("�������ַ��");
//	scanf("%s", ps->data[ps->size].addr);
//
//	ps->size++;//Ԫ�ظ���+1
//	printf("��ӳɹ�!\n");
//
//
//	//if (ps->size == MAX)
//	//{
//	//	printf("ͨѶ¼�������޷�����\n");
//	//}
//	//else
//	//{
//	//	printf("���������֣�");
//	//	scanf("%s", ps->data[ps->size].name);
//	//	printf("���������䣺");
//	//	scanf("%d", &(ps->data[ps->size].age));
//	//	printf("�������Ա�");
//	//	scanf("%s", ps->data[ps->size].sex);
//	//	printf("������绰��");
//	//	scanf("%s", ps->data[ps->size].tele);
//	//	printf("�������ַ��");
//	//	scanf("%s", ps->data[ps->size].addr);
//	//	ps->size++;//Ԫ�ظ���+1
//	//	printf("��ӳɹ�!\n");
//	//}
//}
//
////��ӡͨѶ¼�е���Ϣ
//void ShowContact(const struct Contact* ps)
//{
//	if (ps->size == 0)
//	{
//		printf("ͨѶ¼Ϊ��\n");
//	}
//	else
//	{
//		int i = 0;
//		//����
//		printf("%-4s\t%-4s\t%-5s\t%-12s\t%-4s\n", "����", "����", "�Ա�", "�绰", "��ַ");
//		for (i = 0; i < ps->size; i++)
//		{
//			//����
//			printf("%-4s\t%-4d\t%-5s\t%-12s\t%-4s\n",
//				ps->data[i].name,
//				ps->data[i].age,
//				ps->data[i].sex,
//				ps->data[i].tele,
//				ps->data[i].addr);
//		}
//	}
//}
//
//static int FindByName(struct Contact* ps, char name[MAX_NAME])
//{
//	int i = 0;
//	for (i = 0; i < ps->size; i++)
//	{
//		if (0 == strcmp(ps->data[i].name, name))
//			return i;
//	}
//	return -1;
//}
//
////ɾ��ָ������ϵ��
//void DelContact(struct Contact* ps)
//{
//	char name[MAX_NAME];
//	printf("������Ҫɾ���˵����֣�");
//	scanf("%s", &name);
//	//1.����Ҫɾ��������ʲôλ��
//	//�ҵ�������������Ԫ���±꣬�Ҳ�������-1
//	int pos = FindByName(ps, name);
//	int i = 0;
//	//2.ɾ��
//	if (pos == -1)
//	{
//		printf("���޴��ˣ�\n");
//	}
//	else
//	{
//		//ɾ������
//		int j = 0;
//		for (j = pos; j < ps->size - 1; j++)
//		{
//			ps->data[j] = ps->data[j + 1];
//		}
//		ps->size--;
//		printf("ɾ���ɹ�\n");
//	}
//}
//
////����ָ���˵���Ϣ
//void SearchContact(const struct Contact* ps)
//{
//	char name[MAX_NAME];
//	printf("������Ҫ�����˵����֣�");
//	scanf("%s", &name);
//	//�ҵ�������������Ԫ���±꣬�Ҳ�������-1
//	int pos = FindByName(ps, name);
//	if (pos == -1)
//	{
//		printf("���޴��ˣ�\n");
//	}
//	else
//	{
//		//����
//		printf("%-4s\t%-4s\t%-5s\t%-12s\t%-4s\n", "����", "����", "�Ա�", "�绰", "��ַ");
//		printf("%-4s\t%-4d\t%-5s\t%-12s\t%-4s\n",
//			ps->data[pos].name,
//			ps->data[pos].age,
//			ps->data[pos].sex,
//			ps->data[pos].tele,
//			ps->data[pos].addr);
//	}
//}
//
////�޸�ָ���˵���Ϣ
//void ModifyContact(struct Contact* ps)
//{
//	char name[MAX_NAME];
//	printf("������Ҫ�޸��˵����֣�");
//	scanf("%s", &name);
//	//�ҵ�������������Ԫ���±꣬�Ҳ�������-1
//	int pos = FindByName(ps, name);
//	if (pos == -1)
//	{
//		printf("���޴��ˣ�\n");
//	}
//	else
//	{
//		printf("���������֣�");
//		scanf("%s", ps->data[pos].name);
//		printf("���������䣺");
//		scanf("%d", &(ps->data[pos].age));
//		printf("�������Ա�");
//		scanf("%s", ps->data[pos].sex);
//		printf("������绰��");
//		scanf("%s", ps->data[pos].tele);
//		printf("�������ַ��");
//		scanf("%s", ps->data[pos].addr);
//		printf("�޸����!\n");
//	}
//}
//
////����ͨѶ¼����
//static int CompareByName(const void* p1, const void* p2)
//{
//	return strcmp(((struct PeoInfo*)p1)->name, ((struct PeoInfo*)p2)->name);
//}
//void SortContact(struct Contact* ps)
//{
//	qsort(ps->data, ps->size, sizeof(ps->data[0]), CompareByName);
//	printf("����ɹ���\n");
//}
//
//
//void DestoryContact(struct Contact* ps)
//{
//	free(ps->data);
//	ps->data = NULL;
//}
//
////����ͨѶ¼����
//void SaveContact(struct Contact* ps)
//{
//	FILE* pfwrite = fopen("contact.dat", "wb");
//	if (pfwrite == NULL)
//	{
//		printf("SaveContact::%s\n", strerror(errno));
//		return;
//	}
//	//дͨѶ¼�е����ݵ��ļ���
//	int i = 0;
//	for (i = 0; i < ps->size; i++)
//	{
//		fwrite(&(ps->data[i]),sizeof(struct PeoInfo),1,pfwrite);
//	}
//	fclose(pfwrite);
//	pfwrite = NULL;
//}
//
