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
//����ͨѶ¼�������ʹ�С
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
	struct PeoInfo data[Max];//�����ӽ������˵���Ϣ
	int size;//��¼���ǵ�ǰͨѶ¼����Ч��Ϣ�ĸ���

};
void InitContact(struct Contact* ps);//��ʼ��
void AddContact(struct Contact* ps);//��
void DelContact(struct Contact* ps);//ɾ
void SerchContact(struct Contact* ps);//��
void ModifyContact(struct Contact* ps);//��
void ShowContact(struct Contact* ps);//��ӡ
void SortContact(struct Contact* ps);//����
