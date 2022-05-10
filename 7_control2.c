//7_control2.c

#include <stdio.h>

/*
    switch 제어문
    fall through
    1. break
    2. default
*/
int main()
{
    int n = 0; 
    scanf("%d",&n);

    switch(n % 3)
    {
        case 0:
            printf("0\n");
            break;
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        default:
            break;
    }
}