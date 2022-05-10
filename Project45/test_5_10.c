#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/************found************/
void fun(char* s, char* t)
{
	int   i, d;
	d = strlen(s);
	for (i = 0; i < d; i++)  t[i] = s[i];
	for (i = 0; i < d; i++)  t[d + i] = s[d - 1 - i];
	/************found************/
	t[2 * d] = '\0';
}

void main()
{
	char   s[100], t[100];
	printf("\nPlease enter string S:"); scanf("%s", s);
	fun(s, t);
	printf("\nThe result is: %s\n", t);
}

#include  <stdio.h>
double fun(double  e)
{
	int  i;    double  s, x;
	/**********found**********/
	s = 0;  i = 0;
	x = 1.0;
	while (x > e) {
		/**********found**********/
		i++;
		/**********found**********/
		x = (2.0 * i - 1) / ((2.0 * i) * (2.0 * i));
		s = s + x;
	}
	return  s;
}
void main()
{
	double  e = 1e-3;
	printf("\nThe result is: %f\n", fun(e));
}

#include <stdio.h>
#include <string.h>

void fun(char* s, char t[])
{
	int len, i, k = 0;
	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (i % 2 != 0 && s[i] % 2 != 0)
		{
			t[k++] = s[i];
		}
	}
	t[k] = '\0';
}

void main()
{
	char   s[100], t[100]; void NONO();
	printf("\nPlease enter string S:"); scanf("%s", s);
	fun(s, t);
	printf("\nThe result is: %s\n", t);
	NONO();
}

void NONO()
{
	char s[100], t[100];
	FILE* rf, * wf;
	int i;

	rf = fopen("in.dat", "r");
	wf = fopen("out.dat", "w");
	for (i = 0; i < 10; i++) {
		fscanf(rf, "%s", s);
		fun(s, t);
		fprintf(wf, "%s\n", t);
	}
	fclose(rf);
	fclose(wf);
}

