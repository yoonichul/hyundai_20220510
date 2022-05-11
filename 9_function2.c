// 9_function2.c
#include <stdio.h>
/*
    선언: 존재함을 컴파일러에게 알려주는 역할
    정의: 존재함을 컴파일러에게 알려주고 메모리에 할당되어야 합니다.

    함수를 만드는 방법
    1. 선언과 정의를 동시에 하는 방법
    2. 선언과 정의를 분리하는 방법
*/
// 함수의 프로토타입 선언
// ==> 헤더파일을 통해 제공합니다.
void foo(void);
void goo(void);
void foo() {
    printf("foo\n");
}
void goo() {
    printf("goo\n");
    foo();
}
int main(void) {
    goo();
    return 0;
}
