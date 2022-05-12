// 16_func_pointer2.c

#include <stdio.h>
/*
    함수포인터
    => 함수를 가르키는 포인터 변수입니다.

*/

#if 1
int add(int a, int b) { return a + b; }
// int(int, int)
int mul(int a, int b) { return a * b; }
// int(int, int)
float div(float a, float b) { return a / b; }
// float(float, float)
int main(void) {
    printf("add : %p\n", &add);

    int (*p)(int, int);
    float (*p2)(float, float);

    p = &add;
    int add_result = (*p)(10, 20);
    printf("add_result: %d\n", add_result);
    
    p = &mul;
    int mul_result = (*p)(10, 20);
    printf("mul_result: %d\n", mul_result);
    
    p2 = &div;
    float div_result = (*p2)(100, 3);
    printf("div_result: %f\n", div_result);
    //3.14 -> double
    //3.14f -> float
    printf("%.2f\n",3.f);


    return 0;
}

#endif