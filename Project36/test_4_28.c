#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	printf("输入年月判断天数");
//	scanf("%d%d", &i, &j);
//	switch (j)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:printf("31天\n");
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:printf("30天\n");
//		break;
//	case 2:if (i%400==0||(i % 4 == 0 && i % 100 != 0))
//	{
//		printf("29天\n");
//	}
//		  else
//	{
//		printf("28天\n");
//	}
//		  break;
//	default:
//		printf("输入月份有误\n");
//		break;
//	}
//	return 0;
//}

//int sx(int m, int n)
//{
//	int k = 0;
//	int count;
//	for ( ;m<=n;m++)
//	{
//		count = (m / 100) * (m / 100) * (m / 100) + (m % 100 / 10) * (m % 100 / 10) * (m % 100 / 10) + (m % 10) * (m % 10) * (m % 10);
//		if (count==m)
//		{
//			printf("%d ", m);
//			k++;
//		}
//	}
//	return k;
//}
//#include<stdio.h>
////水仙花数（三位数每个数的立方和等于本身）
//int main()
//{
//	int a, b;
//	printf("请输入两个数\n");
//	scanf("%d%d", &a, &b);
//	printf("水仙花数个数%d", sx(a, b));
//	return 0;
//}

