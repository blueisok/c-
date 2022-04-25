#define _CRT_SECURE_NO_WARNINGS
////找出大于m，且离m最近的素数
//#include  <stdlib.h>
//#include  <conio.h>
//#include  <stdio.h>
//int fun(int m)
//{
//    int i, k;
//    for (i = m + 1; ; i++)
//    {
//        for (k = 2; k < i; k++)
//            /*************found**************/
//            if (i % k == 0)
//                break;
//        /*************found**************/
//        if (k == i)
//            return(i);
//    }
//}
//void main()
//{
//    int n;
//    system("CLS");
//    printf("\nPlease enter n: ");
//    scanf("%d", &n);
//    printf("%d\n", fun(n));
//}


//#include <conio.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//void fun(int x, int pp[], int* n)
//{
//    int i, j = 0;
//    for (i = 1; i <= x; i++)
//    {
//        if (x % i == 0 && i % 2 != 0)
//        {
//            pp[j++] = i;
//        }
//    }
//    *n = j;
//}
//
//void main()
//{
//    FILE* wf;
//    int  x, aa[1000], n, i;
//    system("CLS");
//    printf("\nPlease enter an integer number : \n ");
//    scanf("%d", &x);
//    fun(x, aa, &n);
//    for (i = 0; i < n; i++)
//        printf("%d ", aa[i]);
//    printf("\n ");
//    /******************************/
//    wf = fopen("out.dat", "w");
//    fun(30, aa, &n);
//    for (i = 0; i < n; i++)
//        fprintf(wf, "%d ", aa[i]);
//    fclose(wf);
//    /*****************************/
//}
//
////判断回文，不区分大小写
//#include  <stdio.h>
//#include  <string.h>
//#include  <ctype.h>
//int fun(char* s)
//{
//    char* lp, * rp;
//    /**********found**********/
//    lp = s;
//    rp = s + strlen(s) - 1;
//    while ((toupper(*lp) == toupper(*rp)) && (lp < rp)) {
//        /**********found**********/
//        lp++; rp--;
//    }
//    /**********found**********/
//    if (lp < rp) return 0;
//    else   return 1;
//}
//void main()
//{
//    char  s[81];
//    printf("Enter a string:  ");  scanf("%s", s);
//    if (fun(s)) printf("\n\"%s\" is a Palindrome.\n\n", s);
//    else printf("\n\"%s\" isn't a Palindrome.\n\n", s);
//}


#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void fun(int m, int k, int xx[])
{
    int i, t, l = 0;
    for (i = m + 1; ; i++)
    {
        for (t = 2; t < i; t++)
        {
            if (i % t == 0)
            {
                break;
            }
        }
        if (l == k)
        {
            break;
        }
        if (t==i)
        {
            xx[l++] = i;
        }
    }
}
void main()
{
    //FILE* wf;
    int m, n, zz[1000];
    system("CLS");
    printf("\nPlease enter two integers: ");
    scanf("%d%d", &m, &n);
    fun(m, n, zz);
    for (m = 0; m < n; m++)
        printf("%d ", zz[m]);
    printf("\n ");
    /******************************/
   /* wf = fopen("out.dat", "w");
    fun(17, 5, zz);
    for (m = 0; m < 5; m++)
        fprintf(wf, "%d ", zz[m]);
    fclose(wf);*/
    /*****************************/
}
