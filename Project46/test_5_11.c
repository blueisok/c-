#define _CRT_SECURE_NO_WARNINGS
//#include     <stdio.h>
//void fun(char* s)
//{
//    int  i, j, n;
//    for (i = 0; s[i] != '\0'; i++)
//        /**********found**********/
//        if (s[i] >= '0' && s[i] <= '9')
//        {
//            n = 0;
//            /**********found**********/
//            while (s[i + 1 + n] != '\0')  n++;
//            for (j = i + n + 1; j > i; j--)
//                /**********found**********/
//                s[j + 1] = s[j];
//            s[j + 1] = '*';
//            i = i + 1;
//        }
//}
//void main()
//{
//    char  s[80] = "def35adh3kjsdf7";
//    printf("\nThe original string is :  %s\n", s);
//    fun(s);
//    printf("\nThe result is :  %s\n", s);
//}



#include <stdio.h>

void  fun(int a[3][3], int b[3][3])
{
    int i, j;
    int m[3][3] = { 0 };
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            m[i][j] = a[j][i];
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            b[i][j] = a[i][j] + m[i][j];
    }




}

void main()
{
    int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }, t[3][3];
    int i, j;

    fun(a, t);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%7d", t[i][j]);
        printf("\n");
    }
   
}

//#include<stdio.h>
//int main()
//{
//    int i, j;
//	int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }, m[3][3]={0};
//
//	    for (i = 0; i < 3; i++)
//    {
//        for (j = i + 1; j < 3; j++)
//        {
//            m[i][j] = a[j][i];
//        }
//    
//    }
//        for ( i = 0; i < 3; i++)
//        {
//            for (j = 0; j < 3; j++)
//                printf("%d ", m[i][j]);
//        }
//        return 0;
//}

