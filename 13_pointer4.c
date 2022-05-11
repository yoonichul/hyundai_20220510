#include <stdio.h>
void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}


int main(void) {
    int a = 10;
    int b = 20;
    /* 
        a와 b의 값을 교환(swap)하고 싶습니다.
        => 임시변수가 필요합니다.
     */

    // int tmp = a;
    // a = b;
    // b = tmp;
    swap(&a, &b);
    printf("%d %d\n",a,b);
    return 0;
}