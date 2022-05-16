// 16_func_pointer2.c

#include <stdio.h>
/*
    1. 함수 포인터가 있습니다.
    => 함수의 주소를 가지고 있는 포인터 변수 타입입니다.
    2. 함수의 타입
    => 함수의 타입은 인자와 반환타입에 의해 결정됩니다.
    => 함수의 타입은 함수의 시그니처(반환타입, 인자타입)에 의해 결정됩니다.
    => 함수의 시그니처가 동일하면 같은 타입입니다.

    3. 함수 포인터 변수를 통해서 함수를 호출할 수 있습니다.
    4. 함수 포인터를 사용하는 방법

*/
int add(int a, int b) { return a + b; }
// int(int, int)
int mul(int a, int b) { return a * b; }
// int(int, int)
float div(float a, float b) { return a / b; }
// float(float, float)
#if 0
int (*fp)(int, int) = NULL;
fp = &add;
(*fp)(10, 20);

fp = add;
fp(10, 20);
#endif

#if 1
int main(void) {
    printf("add : %p\n", &add);

    int (*p1)(int, int);
    float (*p2)(float, float);

    p1 = &add;
    int add_result = (*p1)(10, 20);
    printf("add_result: %d\n", add_result);

    p1 = &mul;
    int mul_result = (*p1)(10, 20);
    printf("mul_result: %d\n", mul_result);

    p2 = &div;
    float div_result = (*p2)(100, 3);
    printf("div_result: %f\n", div_result);
    // 3.14 -> double
    // 3.14f -> float
    printf("%.2f\n", 3.f);

    return 0;
}

#endif