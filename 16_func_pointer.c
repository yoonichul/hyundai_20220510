// 16_func_pointer.c

#include <stdio.h>
/*
    함수포인터
    => 함수를 가르키는 포인터 변수입니다.

    int* --> int
*/
// foo의 타입은 무엇인가요?
//  - void(void)
//  - void(*)(void) -----> void(void)
#if 0
void foo(void)
{
    printf("foo\n");
}
int main(void)
{
    int n;
    void (*pfunc)(void) = &foo;
    (*pfunc)();
    return 0;
}
#endif

#if 1
int add(int a, int b) { return a + b; }
double sub(double a, double b) { return a - b; }
int (*pfunc1)(int a, int b) = add;
double (*pfunc2)(double a, double b) = sub;

int main(void) {
    printf("%d\n", (*pfunc1)(10, 20));
    printf("%f\n", (*pfunc2)(30.0, 40.0));
}

#endif