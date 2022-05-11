// 13_pointer9.c
#include <stdio.h>
/*
    1. 포인터 타입은 8바이트입니다.
        => 64비트 - 8바이트
        => 32비트 - 4바이트

*/

#if 0
int main() {
    int *ptr1;
    double *ptr2;
    float *ptr3;
    printf("%d\n", sizeof(ptr1));
    printf("%d\n", sizeof(ptr2));
    printf("%d\n", sizeof(ptr3));
}
#endif

#if 1
    int main(void)
    {
        int *pa;
        int *pb;
        int *pc;

        int *pa, pb, pc;
        // pa는 int *
        // pb는 int
        // pc는 int
    }
#endif