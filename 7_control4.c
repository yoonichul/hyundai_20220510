//7_control4.c

#include <stdio.h>
/*
    for / while 
    - break
    - continue : 주의해야합니다.

*/
int main(void)
{
    int count = 1;
    // while(count < 10)
    // {
    //     printf("count: %d\n",count);
    //     if((count+1)%5==0)
    //     {
    //         continue;
    //     }
    //     ++count;
    // }
    printf("\n");
    for(int count = 1; count <= 10; count++)
    {
        if((count)%5==0)
        {
            continue;
        }
        printf("count: %d\n",count);
    }
    return 0;
}