#define _CRT_SECURE_NO_WARNINGS
//#include  <stdio.h>
//#define    N    9
//int fun(int  x[])
//{
//    int  i, j, k, t, mid, b[N];
//    for (i = 0; i < N; i++) b[i] = x[i];
//    for (i = 0; i <= N / 2; i++)//选择排序
//    {
//        k = i;
//        for (j = i + 1; j < N; j++) if (b[k] > b[j])  k = j;
//        if (k != i)
//        {
//            /**********found**********/
//            t = b[i]; b[i] = b[k]; b[k] = t;
//        }
//    }
//    /**********found**********/
//    mid = b[N/2];
//    for (i = 0; i < N; i++)
//        /**********found**********/
//        if (x[i] < mid) x[i] = mid;
//    return  mid;
//}
//void main()
//{
//    int  i, x[N] = { 1,5,7,23,87,5,8,21,45 };
//    for (i = 0; i < N; i++)  printf("%d ", x[i]);
//    printf("\nThe mid data is: %d\n", fun(x));
//    for (i = 0; i < N; i++)  printf("%d ", x[i]);
//    printf("\n");
//}

#include  <stdio.h>
void NONO();
int fun(char* s)
{
    int count = 0;
    while (*s)
    {
        if ((*s - '0') <= 9 && (*s - '0') >= 0)
        {
            count++;
        }
        s++;
    }

    return count;
}

void main()
{
    char* s = "2def35adh25  3kjsdf 7/kj8655x";
    printf("%s\n", s);
    printf("%d\n", fun(s));
   // NONO();
}

//void NONO()
//{
//    FILE* fp, * wf;
//    int i;
//    char s[256];
//
//    fp = fopen("in.dat", "r");
//    wf = fopen("out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fgets(s, 255, fp);
//        fprintf(wf, "%d\n", fun(s));
//    }
//    fclose(fp);
//    fclose(wf);
//}

