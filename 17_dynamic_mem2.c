// 17_dynamic_mem2.c
#include <stdio.h>
#include <stdlib.h>
/*
    1. void*
    => 모든 타입의 주소를 담을 수 있는 타입입니다.
    => 목적:
       - 주소값을 저장하기 위해서만 사용합니다.
       - 연산이 불가능합니다.
        +, -, ++, --, *(ref)
*/
#if 0
int main(void)
{
    int n = 10;
    // &n(int*)
    char c = 42;
    // &c(char*)

    void *pv = &n;
    pv =  &c;

    // *pv - 10;
    //  : void*는 참조를 통해 값을 읽거나 변경하는 것이 불가능합니다.    
    
    int *p1 = malloc(4);
    char *p2 = malloc(4);

    free(p1);
    free(p2);

    return 0;
}
#endif



// void* malloc(size_t size)
#if 1
int main(void) {
    int *p1 = malloc(4);
    printf("%d\n",*p1);
    // 초기값을 쓰레기 값을 가집니다.
    char *p2 = malloc(4);
    // void*를 다른 포인터 타입으로의 암묵적인 변환인 허용됩니다.
    // => C언어에서만 허용합니다.
    #if 0
    int *p1 = (int*)malloc(4);
    char *p2 = (char*)malloc(4);
    #endif
    // => C++에서는 명시적으로 작성해야 합니다!

    // void*를 통해 값을 읽거나 변경하기 위해서는,
    // 다른 타입으로의 타입 캐스팅이 필요합니다.
    free(p1);
    free(p2);    
    return 0;
}

#endif