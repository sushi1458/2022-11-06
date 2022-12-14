#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Max 1000
#define Max_Name 20
#define Max_Sex 10
#define Max_Tele 12 
#define Max_Addr 30 

enum Option
{
	
	add=1,
	del,
	search,
	modify,
	show,
	sort,
};
//定义通讯录数据类型大小
struct PeoInfo
{
	char Name[Max_Name];
	int Age;
	char Sex[Max_Sex];
	char Tele[Max_Tele];
	char Addr[Max_Addr];


};
struct Contact
{
	struct PeoInfo data[Max];//存放添加进来的人的信息
	int size;//记录的是当前通讯录中有效信息的个数

};
void InitContact(struct Contact* ps);//初始化
void AddContact(struct Contact* ps);//增
void DelContact(struct Contact* ps);//删
void SerchContact(struct Contact* ps);//查
void ModifyContact(struct Contact* ps);//改
void ShowContact(struct Contact* ps);//打印
void SortContact(struct Contact* ps);//排序
