//7_control3.c

#include <stdio.h>
/*
    1. while 
    2. for
    3. do-while

    while : 반복할 횟수가 명확하지 않는 경우 사용합니다.
    for : 반복하는 횟수가 명확한 경우 사용합니다.

*/

int main(void)
{
    int n;
    // scanf("%d",&n);
    // while(n > 0)
    // {
    //     scanf("%d",&n);
    // }
    // int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0 ; i < 10; i++)
    // {
    //     printf("x[%d]: %d\n", i, x[i]);
    // }
    do
    {
        scanf("%d",&n);
    }while(n > 0);
    return 0;
}