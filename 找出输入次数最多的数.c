#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
int main()
{
        int n,i;
        scanf_s("%d",&n);
        int* a = malloc(n* sizeof(int));
        int* b = malloc(n* sizeof(int));
        for (i = 0; i < n; i++)
        {
                scanf_s("%d", a[i]);
        }
        for ( i; i < n; i++)
        {
                b[(a[i] - 1)]++;
        }
        for (int j = 0; j < n - 1; j++)
        {
                for (i = 0; i < n - 1 - j; i++)
                {
                        if (b[i] > b[i + 1])
                        {
                                int tmp;
                                tmp = b[i];
                                b[i] = b[i + 1];
                                b[i + 1] = tmp;
                        }
                }
        }
        printf("%d\n", b[n - 1]);

        return 0;
}
