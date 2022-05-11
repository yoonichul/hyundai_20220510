// 13_pointer6.c
#include <stdio.h>
#if 0
int main(void) {
    int x[3] = {1, 2, 3};
    int *p = x + 2;
    printf("%d\n", x[0]);
    printf("%d\n", p[0]);
    ++p; // 다음 위치로 이동
    printf("%d\n", *(p - 1));
    printf("%d\n", *(p - 2));

    printf("%d\n", p[-1]);
    printf("%d\n", p[-2]);

    return 0;
}
#endif

#if 1
void print1(int *x, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\n", *(x + i));
    }
}

void print2(int *p, int n)
{
    while(n--)
    {
        // printf("%d\n",*p);
        // p++;
        printf("%d\n",*p++);
    }
}

int main(void)
{
    int x[3] = {10, 20 ,30};
    print2(x, 3);
}
#endif