#define _CRT_SECURE_NO_WARNINGS
//统计一个字符串各个元音字母的个数
#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
/*************found**************/
void fun(char* s, int num[5])
{
    int k, i = 5;
    for (k = 0; k < i; k++)
        /*************found**************/
        num[k] = 0;
    for (; *s; s++)
    {
        i = -1;
        /*************found**************/
        switch (*s)
        {
        case 'a': case'A': {i = 0; break; }
        case 'e': case 'E': {i = 1; break; }
        case 'i': case 'I': {i = 2; break; }
        case 'o': case 'O': {i = 3; break; }
        case 'u': case 'U': {i = 4; break; }
        }
        if (i >= 0)
            num[i]++;
    }
}
void main()
{
    char s1[81]; int num1[5], i;
    system("CLS");
    printf("\nPlease enter a string: ");
    gets(s1);
    fun(s1, num1);
    for (i = 0; i < 5; i++) printf("%d ", num1[i]);
    printf("\n");
}

//将俩个数字字符转化为整数在相加
#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
#define  N  9
long  ctod(char* s)
{
    long  d = 0;
    while (*s)
        if (isdigit(*s)) {
            /**********found**********/
            d = d * 10 + *s - '0';
            /**********found**********/
            s++;
        }
    return  d;
}
long  fun(char* a, char* b)
{
    /**********found**********/
    return ctod(a) - ctod(b);
}
void main()
{
    char  s1[N], s2[N];
    do
    {
        printf("Input  string  s1 : "); gets(s1);
    } while (strlen(s1) > N);
    do
    {
        printf("Input  string  s2 : "); gets(s2);
    } while (strlen(s2) > N);
    printf("The result is:  %ld\n", fun(s1, s2));
}

//将一串数字保留小数点后两位，并对第三位四舍五入
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float fun(float h)
{
    int tem = (int)(h * 1000 + 5) / 10;//先将小数点后三位进位加5，大于5就会进位，再除5，截断第三位小数
    return (float)tem / 100.0;//还原为小数点两位
}
void main()
{
    FILE* wf;
    float a;
    system("CLS");
    printf("Enter a: ");
    scanf("%f", &a);
    printf("The original data is :  ");
    printf("%f\n\n", a);
    printf("The  result : %f\n", fun(a));
    /******************************/
    wf = fopen("out.dat", "w");
    fprintf(wf, "%f", fun(8.32533));
    fclose(wf);
    /*****************************/
}
