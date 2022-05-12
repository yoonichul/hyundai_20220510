// 18_string2.c
#include <stdio.h>
/*
    1. 문자열은 char 배열을 통해 표현합니다.
    => 마지막 요소가 0으로 끝나는 char 배열입니다.

    int *p = NULL;
    char c = '\0';

*/
#if 0
void print(int *x) {
    while (*x) {
        printf("%d\n", *x++);
    }
}

int main(void) {
    int x[5] = {1, 2, 3, 4, 0};
    print(x);
    char str[] = {
        'h', 'e', 'l', 'l', 'o', '\0',
    };
    printf("%s\n", str);
    return 0;
}
#endif
int main(void) {
    // 문자열 타입
    char str[6] = "hello";
    // char str[5] = {
    //     'h', 'e', 'l', 'l', 'o',
    // }; // => 단순히 char 배열이 됨 문자열 X --> 마지막 널문자가 없음 
    
    printf("%s\n", str);
    return 0;
}