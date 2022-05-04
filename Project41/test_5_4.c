#define _CRT_SECURE_NO_WARNINGS
//#include  <stdio.h>
//#define   N   10
//int findmid(int  a, int  b, int  c)
//{
//    int  t;
//    t = (a > b) ? (b > c ? b : (a > c ? c : a)) : ((a > c) ? a : ((b > c) ? c : b));
//    /**********found**********/
//    return  t;
//}
//void fun(int  x[])
//{
//    int  i, a, b, c, t[N];
//    /**********found**********/
//    for (i = 0; i < N; i++) t[i] = x[i];
//    for (i = 0; i < N - 2; i++)
//    {
//        a = t[i]; b = t[i + 1]; c = t[i + 2];
//        /**********found**********/
//        x[i + 1] = findmid(a, b, c);
//    }
//}
//void main()
//{
//    int  i, x[N] = { 6,5,7,23,18,5,8,21,45,38 };
//    for (i = 0; i < N; i++)  printf("%d ", x[i]);
//    printf("\n");
//    fun(x);
//    for (i = 0; i < N; i++)  printf("%d ", x[i]);
//    printf("\n");
//}
//
//#include  <stdio.h>
//typedef  struct  list
//{
//    char  data;
//    struct list* next;
//} Q;
//void fun(Q* pa, Q* pb, Q* pc)
//{
//    Q* p;
//    /**********found**********/
//    pa->next = pb;
//    pb->next = pc;
//    p = pa;
//    while (p)
//    {
//        /**********found**********/
//        printf("  %c", p->data);
//        /**********found**********/
//        p = p->next;
//    }
//    printf("\n");
//}
//void main()
//{
//    Q  a, b, c;
//    a.data = 'E';  b.data = 'F';  c.data = 'G';  c.next = NULL;
//    fun(&a, &b, &c);
//}

//#include  <stdio.h>
//#define    N    20
////void NONO();
//void  fun(char* a, char* s)
//{
//    int i = 0;
//    while (*s)
//    {
//        a[i++] = *s;
//        s++;
//    }
//    a[i] = 0;
//}
//
//void main()
//{
//    char  s1[N], * s2 = "abcdefghijk";
//    fun(s1, s2);
//    printf("%s\n", s1);
//    printf("%s\n", s2);
//    //NONO();
//}



