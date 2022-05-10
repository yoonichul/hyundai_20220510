//7_control.c
#include <stdio.h>
/*
    제어문(Control Statement)
    => 조건문 / 반복문
    if / while, for, do-while
    switch
*/
#if 0 
int main(void)
{
    int score;
    scanf("%d",&score);
    if(score < 70)
    {
        printf("FAIL\n");
    }
    else if(score < 80)
    {
        printf("WARN\n");
    }
    else 
    {
        printf("PASS\n");
    }
    return 0;
}
#endif

#if 1
int main(void)
{
    int n;
    scanf("%d",&n);
    // if(n % 2 == 0)
    if(n & 1 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
}

#endif