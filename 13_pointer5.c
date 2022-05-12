// 13_pointer5.c
#include <stdio.h>
/*
    1. 포인터에 + / - 연산을 수행할 수 있습니다.
        int *p = 100;
        p + 1  => 100 + (1 * sizeof(int))
    2. 포인터 + 포인터는 허용하지 않습니다.
    3. 포인터 - 포인터는 허용됩니다.
        ==> 포인터 사이에 거리를 구하는 개념으로 사용할 수 있습니다.
*/
int main(void) {
    #if 0
    int x[5] = {1, 2, 3, 4, 5};

    int *p = x; //&x[0]

    // printf("%d\n", *(p));
    // printf("%d\n", *(p + 1));
    // printf("%d\n", *(p + 2));
    // printf("%d\n", *(p + 3));
    // printf("%d\n", *(p + 4));

    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);
    printf("%d\n", p[3]);
    printf("%d\n", p[4]);

    printf("%d\n", *x);
    printf("%d\n", *(x + 1));
    printf("%d\n", *(x + 2));
    printf("%d\n", *(x + 3));
    printf("%d\n", *(x + 4));
    //---------------
    // x[0] / x[1] / x[2]
    // *(x+0) / *(x+1) / *(x+2)

    // (x + 1)  == (1 + x)
    // printf("%d\n", 1[x]);
    #endif
    int arr[5] = {1, 2, 3, 4, 5};
    int *p1 = arr;
    int *p2 = arr + 3;

    printf("distance: %ld\n", p2 - p1);
    // (p2 - p1) / sizeof(int)
    // ==> offset

    return 0;
}
/*
    포인터 연산
    1. ++p / p++ / --p / p-- => 허용됩니다.
    2. p + integer           => 허용됩니다.
       p - integer           => 허용됩니다.
    3. p1 + p2               => 허용되지 않습니다. 
    4. p2 - pq               => 허용됩니다.
*/