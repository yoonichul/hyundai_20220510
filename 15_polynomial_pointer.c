// 15_polynomial_pointer.c
#include <stdio.h>
/*

    ppn ----> pn ----> n  [100]

*/
int main(void)
{
    int n = 100;
    int* pn = &n;
    int **ppn = &pn;
    **ppn = 200;

    printf("n:: %d\n",n);

    return 0;
}
