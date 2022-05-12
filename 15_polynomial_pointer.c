// 15_polynomial_pointer.c
#include <stdio.h>
/*

    ppn ----> pn ----> n  [100]

*/
#if 0
int main(void)
{
    int n = 100;
    int* pn = &n;
    int **ppn = &pn;
    **ppn = 200;

    printf("n:: %d\n",n);

    return 0;
}
#endif

#if 1
void pswap(int **ppa, int **ppb) {
    int *temp = *ppa;
    *ppa = *ppb;
    *ppb = temp;
}

int main(void) {
    const int a = 10;
    const int b = 20;
    int *pa = &a;
    int *pb = &b;
    printf("pa: %d pb: %d\n", *pa, *pb);
    pswap(&pa, &pb);
    // pa = pb;
    // pb = *temp;
    printf("a: %d b: %d\n", a, b);
    printf("pa: %d pb: %d\n", *pa, *pb);

    return 0;
}
#endif
