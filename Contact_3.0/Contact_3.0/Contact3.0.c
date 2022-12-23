#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"contact3.0.h"
//初始化通讯录
void InitContact(struct Contact* ps)
{
	ps->data = malloc(sizeof(Contact)+3 * sizeof(PeoInfo));
	if (ps == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->Capacity = FirstCapacity;
	//把文件中已经存放信息加载到通讯录中
	LoadContact(ps);
}
//在通讯录中增加一个人的信息
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->Capacity)
	{
		struct PeoInfo* ptr = realloc(ps->data, (ps->Capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->Capacity += 2;
		}
	}
	else
		return;
}
void AddContact(struct Contact*ps)
{
	//检查空间是否已满
	CheckCapacity(ps);
	printf("请输入名字：");
	scanf("%s", ps->data[ps->size].Name);
	printf("请输入年龄：");
	scanf("%d", &(ps->data[ps->size].Age));
	printf("请输入性别：");
	scanf("%s", ps->data[ps->size].Sex);
	printf("请输入电话：");
	scanf("%s", ps->data[ps->size].Tele);
	printf("请输入地址：");
	scanf("%s", ps->data[ps->size].Addr);
	ps->size++;
	printf("添加成功！\n");
}
//在通讯录中删除一个人的信息
void DelContact(struct Contact* ps)
{
	char name[Max_Name] = { 0 };
	if (ps->size == 0)
	{
		printf("通讯录为空！\n");
		return;
	}
	printf("请输入你要删除的名字：");
	scanf("%s", &name);
	int pos = FindContact(ps, name);
	if (-1 == pos)
	{
		printf("该名字不存在！\n");

	}
	else
	{
		int i = 0;
		for (i = pos; i < ps->size - 1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
		ps->size--;
		printf("删除成功！\n");
	}

}
//在通讯录中查找一个人的信息
static int FindContact(struct Contact* ps, char name[])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{

		if (0 == strcmp(ps->data[i].Name, name))//将要查找的名字与通讯录中的名字一一对比
		{
			return i;//找到后返回下标
		}
	}
	return -1;
}
void SerchContact(struct Contact* ps)
{
	int pos = 0;
	char name[Max_Name] = { 0 };
	if (ps->size == 0)
	{
		printf("通讯录为空！\n");
		return;
	}
	printf("请输入你要查找的名字：");
	scanf("%s", &name);
	pos = FindContact(ps, name);
	if (-1 == pos)
	{
		printf("该名字不存在！\n");

	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-20s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-20s\t%-30s\n",
			ps->data[pos].Name,
			ps->data[pos].Age,
			ps->data[pos].Sex,
			ps->data[pos].Tele,
			ps->data[pos].Addr);
	}

}
//在通讯录中更改一个人的信息
void ModifyContact(struct Contact* ps)
{
	int pos = 0;
	char name[Max_Name] = { 0 };
	if (ps->size == 0)
	{
		printf("通讯录为空！\n");
		return;
	}
	printf("请输入你要更改的名字：");
	scanf("%s", &name);
	pos = FindContact(ps, name);
	if (-1 == pos)
	{
		printf("该名字不存在！\n");

	}
	else
	{
		printf("请输入名字：");
		scanf("%s", ps->data[pos].Name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[pos].Age));
		printf("请输入性别：");
		scanf("%s", ps->data[pos].Sex);
		printf("请输入电话：");
		scanf("%s", ps->data[pos].Tele);
		printf("请输入地址：");
		scanf("%s", ps->data[pos].Addr);
		printf("更改成功！\n");
	}

}
//展示通讯录内容实现
void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空！\n");
	}
	else
	{
		//标题
		printf("%-20s\t%-5s\t%-5s\t%-20s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
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
//排序通讯录内容
int cmp_by_name(void* a, void* b)
{
	return strcmp(((PeoInfo*)a)->Name, ((PeoInfo*)b)->Name);
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
			//两个元素比较
			if (p((char*)base + (j*width), (char*)base + (j + 1)*width)>0)
			{
				//交换
				Exc((char*)base + (j*width), (char*)base + (j + 1)*width, width);
			}
		}
	}
}
void SortContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空！\n");
		return;
	}
	else
	{
		my_sort(ps->data, ps->size, sizeof(ps->data[0]) , cmp_by_name);
		printf("排序成功！\n");
	}
	//标题
	printf("%-20s\t%-5s\t%-5s\t%-20s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
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
//保存通讯录内容
void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact:%s\n", strerror(errno));
		return;
	}
	//以二进制写入文件
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}
//加载信息到通讯录
void LoadContact(struct Contact* ps)
{
	PeoInfo tmp = {0};
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}

	while ((fread(&tmp, sizeof(PeoInfo), 1, pfRead)))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfRead);
	pfRead = NULL;
}
//销毁通讯录在动态内存开辟的空间
void DestdoryContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}