#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//��ͨѶ¼�в���һ������Ϣ�ĺ���
static int FindContact(struct Contact* ps,char name[])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		
		if (0 == strcmp(ps->data[i].Name, name))//��Ҫ���ҵ�������ͨѶ¼�е�����һһ�Ա�
		{
			return i;//�ҵ��󷵻��±�
		}
	}
	return -1;
}

int cmp_by_name(void* a, void* b)
{
	return strcmp(((struct Contact*)a)->data->Name, ((struct Contact*)b)->data->Name);
}
void Exc(char* a, char* b, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;
	}
}
void my_sort(void* base, int sz, int width, int(*p)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			if (p((char*)base+(j*width),(char*)base+(j+1)*width)>0)
			{
				//����
				Exc((char*)base + (j*width), (char*)base + (j + 1)*width, width);
			}
		}
	}
}
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps));
	ps->size = 0;
}
//��ͨѶ¼������һ���˵���Ϣ
void AddContact(struct Contact*ps)
{
	if (ps->size== Max)
		printf("ͨѶ¼������\n");
	else
	{
		printf("���������֣�");
		scanf("%s", ps->data[ps->size].Name);
		printf("���������䣺");
		scanf("%d", &(ps->data[ps->size].Age));
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].Sex);
		printf("������绰��");
		scanf("%s", ps->data[ps->size].Tele);
		printf("�������ַ��");
		scanf("%s", ps->data[ps->size].Addr);
		ps->size++;
		printf("��ӳɹ���\n");
	}
	
}
//��ͨѶ¼��ɾ��һ���˵���Ϣ
void DelContact(struct Contact* ps)
{
	char name[Max_Name] = {0};
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return;
	}
	printf("��������Ҫɾ�������֣�");
	scanf("%s", &name);
	int pos = FindContact(ps, name);
	if (-1 == pos)
	{
		printf("�����ֲ����ڣ�\n");
	
	}
	else
	{
		int i = 0;
		for (i = pos; i < ps->size - 1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
		ps->size--;
		printf("ɾ���ɹ���\n");
	}

}
//��ͨѶ¼�в���һ���˵���Ϣ
void SerchContact(struct Contact* ps)
{
	char name[Max_Name] = { 0 };
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return;
	}
	printf("��������Ҫ���ҵ����֣�");
	scanf("%s", &name);
	int pos = FindContact(ps, name);
	if (-1 == pos)
	{
		printf("�����ֲ����ڣ�\n");

	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-20s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-5d\t%-5s\t%-20s\t%-30s\n",
			ps->data[pos].Name,
			ps->data[pos].Age,
			ps->data[pos].Sex,
			ps->data[pos].Tele,
			ps->data[pos].Addr);
	}
	
}
//��ͨѶ¼�и���һ���˵���Ϣ
void ModifyContact(struct Contact* ps)
{
	char name[Max_Name] = { 0 };
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return;
	}
	printf("��������Ҫ���ĵ����֣�");
	scanf("%s", &name);
	int pos = FindContact(ps, name);
	if (-1 == pos)
	{
		printf("�����ֲ����ڣ�\n");

	}
	else
	{
		printf("���������֣�");
		scanf("%s", ps->data[pos].Name);
		printf("���������䣺");
		scanf("%d", &(ps->data[pos].Age));
		printf("�������Ա�");
		scanf("%s", ps->data[pos].Sex);
		printf("������绰��");
		scanf("%s", ps->data[pos].Tele);
		printf("�������ַ��");
		scanf("%s", ps->data[pos].Addr);
		printf("���ĳɹ���\n");
	}

}
//չʾͨѶ¼����ʵ��
void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
	//����
		printf("%-20s\t%-5s\t%-5s\t%-20s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-5d\t%-5s\t%-20s\t%-30s\n",
				ps->data[i].Name,
				ps->data[i].Age,
				ps->data[i].Sex,
				ps->data[i].Tele,
				ps->data[i].Addr);
		}
	}
}
//����ͨѶ¼����

void SortContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return;
	}
	else
	{
		int sz =( sizeof(ps->data) / sizeof(ps->data[0]));
		my_sort(ps->data,sz , sizeof(ps->data[0]), cmp_by_name);
		printf("����ɹ���\n");
	}
	//����
	printf("%-20s\t%-5s\t%-5s\t%-20s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-20s\t%-30s\n",
			ps->data[i].Name,
			ps->data[i].Age,
			ps->data[i].Sex,
			ps->data[i].Tele,
			ps->data[i].Addr);
	}
}
