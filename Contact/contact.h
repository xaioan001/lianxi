#define _CRT_SECURE_NO_WARNINGS 1

#define MAX  1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include<stdio.h> 
#include<string.h>  
struct proInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact
{
	struct peoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ��
};

//��������


void InitContact(struct Contact* ps);
void AddContact(struct Contact*ps);
void showContact(const struct Contact* ps);