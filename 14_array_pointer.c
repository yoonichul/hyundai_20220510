// 14_array_pointer.c

#include <stdio.h>
/*
    배열 포인터
    - 배열을 가르키는 포인터 타입
    포인터 배열
    - 하나의 원소타입이 포인터 타입 배열
*/
typedef int (*PARA3)[3];

void print_array(PARA3 arr, int n) {
    //  int* -> * -> int
    //  double* -> * ->double
    // int(*)[3] -> * -> int[3]
    int length = sizeof(*arr) / sizeof((*arr)[0]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < length; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    // [ int[3] ][ int[3] ]
    int x[2][3] = {{1, 2, 3}, {10, 20, 30}};
    print_array(x, 2);

    // int*p[3];  // [int*][int*][int*]
    // int(*p)[3]; // * --> int[3]
    return 0;
}