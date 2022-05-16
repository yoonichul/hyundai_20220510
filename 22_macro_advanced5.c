// 22_macro_advanced5.c
#include <stdio.h>
// 
// #define TOSTR(x) #x
// #x=> 문자열 ""로 바꿔줍니다.
// => 1단계로 사용할 경우, 매크로 상수가 치환되지 않고 사용됩니다.
#define _TOSTR(x) #x
#define TOSTR(x) _TOSTR(x)


#define MAX 100
#define PRINT_VALUE(x) \
    printf("%s = %d\n",TOSTR(x),x)
int main(void)
{
    int age =100;
    PRINT_VALUE(age);
    PRINT_VALUE(MAX); // _TOSTR(100) -> MAX = 100
    printf("%s\n",TOSTR(hello));
    return 0;
}