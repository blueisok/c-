#pragma once
#include<stdio.h>
#include<string.h>
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDE 20
#define MAX 1000
struct Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDE];
};
struct Contact
{
	struct Peoinfo date[MAX];
	int size;//记录当前信息
};
enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
void initcontact(struct Contact* ps);
void addcontact(struct Contact* ps);
void showcontact(const struct Contact* ps);//不需要修改数据，加const
void delcontact(struct Contact* ps);
void searchcontact(const struct Contact* ps);
void modifycontact(struct Contact* ps);
void sortcontact(struct Contact* ps);
