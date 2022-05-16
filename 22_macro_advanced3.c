// 22_macro_advanced3.c
#include <stdio.h>
// #define DEBUG
// > 컴파일 할 때 정의할 수 있습니다.
// gcc source.c
// gcc source.c -D DEBUG

#ifdef DEBUG
// #define LOG(x) printf(x)
// ... / __VA_ARGS__
// => 가변 인자 매크로
#define LOG(...)printf(__VA_ARGS__)
#else
#define LOG(...)
#endif
int main(void) {
    FILE *fp = fopen("a.txt", "r");
    if (fp == NULL) {
        return 1;
    }

    // printf("FILE OPEN SUCCESS\n");
    LOG("FILE OPEN SUCCESS\n");
    return 0;
}