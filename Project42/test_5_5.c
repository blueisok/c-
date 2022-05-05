#define _CRT_SECURE_NO_WARNINGS
#include   <stdio.h>
#include   <string.h>
//void NONO();
long  fun(char* s)
{
    int i, sum = 0;
    int len = strlen(s);
    for ( i = 0; i < len; i++)
    {
        sum = sum * 10 + ((*s) - '0');
        s++;
    }
    return sum;
}
void main()
{
    char  s[10];    long  r;
    printf("输入数字字符串 :  ");  gets(s);
    r = fun(s);
    printf(" r = %ld\n", r);
    //NONO();
}


