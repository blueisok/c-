#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void initcontact(struct Contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;//设置开始元素为0
}
void addcontact(struct Contact* ps)
{
	if (ps->size==MAX)
	{
		printf("通讯录已满,无法增加\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", ps->date[ps->size].name);
		printf("请输入年龄\n");
		scanf("%d",&(ps->date[ps->size].age));//年龄不是数组要用&
	    printf("请输入性别\n");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入电话\n");
		scanf("%s", ps->date[ps->size].tele);
		printf("请输入地址\n");
		scanf("%s", ps->date[ps->size].addr);
		printf("添加成功\n");
		ps->size++;
	}
}
void showcontact(const struct Contact* ps)
{
	int i = 0;
	if (ps->size==0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for ( i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", 
				ps->date[i].name, 
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tele,
				ps->date[i].addr);
		}
	}
}
int findname(const struct Contact* ps, char name[])
{
	   int i = 0;
	   for ( i = 0; i < ps->size; i++)
	   {
		   if (0==strcmp(ps->date[i].name,name))
		   {
			   return i;//找到返回下标
		   }
	   }
	   return -1;//未找到返回-1
}
void delcontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("输入要删除人的名字：\n");
	scanf("%s", name);
	int ret=findname(ps, name);
	if (-1==ret)
	{
		printf("未找到数据\n");
	}
	else
	{
		int j = 0;
		for ( j = ret; j < ps->size-1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void searchcontact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的名字：\n");
	scanf("%s", name);
	int ret = findname(ps, name);
	if (-1==ret)
	{
		printf("未查找到相关数据\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			ps->date[ret].name,
			ps->date[ret].age,
			ps->date[ret].sex,
			ps->date[ret].tele,
			ps->date[ret].addr);
	}
}
void modifycontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("输入要修改成员的名字：\n");
	scanf("%s", name);
	int ret = findname(ps, name);
	if (-1==ret)
	{
		printf("未找到数据\n");
	}
	else
	{

		printf("请输入名字\n");
		scanf("%s", ps->date[ret].name);
		printf("请输入年龄\n");
		scanf("%d", &(ps->date[ret].age));//年龄不是数组要用&
		printf("请输入性别\n");
		scanf("%s", ps->date[ret].sex);
		printf("请输入电话\n");
		scanf("%s", ps->date[ret].tele);
		printf("请输入地址\n");
		scanf("%s", ps->date[ret].addr);
		printf("修改成功\n");
	}
}
//void sortcontact(struct Contact* ps)//按名字排序，冒泡排序
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < ps->size-1; i++)
//	{
//		for (j = 0; j < ps->size - 1 - i; j++)
//		{
//			if (strcmp(ps->date[j].name,ps->date[j+1].name)>0)
//			{
//				struct Peoinfo tem = ps->date[j];
//				ps->date[j] = ps->date[j + 1];
//				ps->date[j + 1] = tem;
//			}
//		}
//	}
//
//}

//冒泡排序的第二种实现
void sortcontact(struct Contact* ps)
{
	int j = 0;
	int flag = 0;
	while (1)
	{
		flag = 0;
		for ( j = 0; j < ps->size-1; j++)
		{
			if (strcmp(ps->date[j].name,ps->date[j+1].name)>0)
			{
				struct Peoinfo tem = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = tem;
				flag = 1;//有逆序，赋值为1
			}
		}
		if (0==flag)//当全没有逆序时，跳出循环
		{
			break;
		}

	}
}



