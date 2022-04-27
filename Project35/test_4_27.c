#define _CRT_SECURE_NO_WARNINGS
//#include  <stdio.h>
//int fun(char* s, char* t)
//{
//    int  n = 0;
//    while (*s)
//    {
//        if (*s < 97) {
//            /**********found**********/
//            *(t + n) = *s;  n++;
//        }
//        /**********found**********/
//        s++;
//    }
//    *(t + n) = 0;
//    /**********found**********/
//    return  n;
//}
//void main()
//{
//    char  s[81], t[81];    int  n;
//    printf("\nEnter a string:\n");  gets(s);
//    n = fun(s, t);
//    printf("\nThere are %d letter which ASCII code is less than 97: %s\n", n, t);
//}


//#include <stdio.h>
//float  fun(int m, int n)
//{
//    float p1=1,p2=1,p3=1;
//    int i;
//    for (i = 1; i <=m; i++)
//    {
//        p1 *= i;
//    }
//    for (i = 1; i <=n; i++)
//    {
//        p2 *= i;
//    }
//    for (i = 1; i <=(m - n); i++)
//    {
//        p3 *= i;
//    }
//    return p1 / (p2 * p3);
//   
//}
//
//void main()
//{
//    printf("P=%f\n", fun(12, 8));
//
//
//}


//
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//int fun(int k)
//{
//    int m = 0, mc = 0;
//    while ((k >= 2) && (mc < 10))
//    {
//        /*************found**************/
//        if ((k % 13 == 0) || (k % 17 == 0))
//        {
//            m = m + k; mc++;
//        }
//        k--;
//        /*************found**************/
//    }
//    return m;
//
//}
//void main()
//{
//    system("CLS");
//    printf("%d\n ", fun(500));
//}
//

#include <math.h>
#include <stdio.h>
double  fun(int  n)
{
    double i = 0;
        while (--n)
        {
            if (n % 3 == 0 && n % 7 == 0)
            {
                i += n;
            }
        }
    return sqrt(i);
}

void main()   
{
    
    printf("s =%f\n", fun(1000));
   
}

