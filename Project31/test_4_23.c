#define _CRT_SECURE_NO_WARNINGS
//#include  <stdio.h>
//#define   M   3
//#define   N   5
//void fun(int(*a)[N], int  k)
//{
//    int  i, j, p, temp;
//    /**********found**********/
//    for (p = 1; p <= k; p++)
//        for (i = 0; i < M; i++)
//        {
//            temp = a[i][0];
//            /**********found**********/
//            for (j = 0; j < N - 1; j++) a[i][j] = a[i][j + 1];
//            /**********found**********/
//            a[i][N - 1] = temp;
//        }
//}
//void main()
//{
//    int  x[M][N] = { {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5} }, i, j;
//    printf("The array before moving:\n\n");
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++)  printf("%3d", x[i][j]);
//        printf("\n");
//    }
//    fun(x, 2);
//    printf("The array after moving:\n\n");
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++)  printf("%3d", x[i][j]);
//        printf("\n");
//    }
//}
//
//
//#include <conio.h>
//#include <stdio.h>
//#define  M 10
//int  a[M][M] = { 0 };
//
///**************found**************/
//void fun(int a[][M], int m)
//{
//    int j, k;
//    for (j = 0; j < m; j++)
//        for (k = 0; k < m; k++)
//            /**************found**************/
//            a[j][k] = (k + 1) * (j + 1);
//}
//
//void main()
//{
//    int  i, j, n;
//
//    printf(" Enter n : ");  scanf("%d", &n);
//    fun(a, n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//            printf("%4d", a[i][j]);
//        printf("\n");
//    }
//}

//#include <stdio.h>
//void fun(int  a, int  b, long* c)
//{
//    int i = a % 10;
//    int j = a / 10;
//    int k = b % 10;
//    int t = b / 10;
//    *c = (1000 * i) + (10 * j) + (100 * k) + t;
//}
//void main()
//{
//    int  a, b; long  c; void NONO();
//    printf("Input a, b:");
//    scanf("%d%d", &a, &b);
//    fun(a, b, &c);
//    printf("The result is: %ld\n", c);
//    NONO();
//}
//void NONO()
//{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
//    FILE* rf, * wf;
//    int i, a, b; long c;
//
//    rf = fopen("in.dat", "r");
//    wf = fopen("out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fscanf(rf, "%d,%d", &a, &b);
//        fun(a, b, &c);
//        fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c);
//    }
//    fclose(rf);
//    fclose(wf);
//}

