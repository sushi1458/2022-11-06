#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define Max 1000
#define FirstCapacity 3
#define Max_Name 20
#define Max_Sex 10
#define Max_Tele 12 
#define Max_Addr 30 


//定义通讯录数据类型大小
typedef struct PeoInfo
{
	char Name[Max_Name];
	int Age;
	char Sex[Max_Sex];
	char Tele[Max_Tele];
	char Addr[Max_Addr];


}PeoInfo;
typedef struct Contact
{
	struct PeoInfo* data;//存放添加进来的人的信息
	int size;//记录的是当前通讯录中有效信息的个数
	int Capacity;

}Contact;
void InitContact(struct Contact* ps);//初始化
void AddContact(struct Contact* ps);//增
void DelContact(struct Contact* ps);//删
void SerchContact(struct Contact* ps);//查
void ModifyContact(struct Contact* ps);//改
void ShowContact(struct Contact* ps);//打印
void SortContact(struct Contact* ps);//排序
void DestdoryContact(struct Contact* ps);//释放空间