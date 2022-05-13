// 19_structure5.c
#include <stdio.h>
#include <stdlib.h>


typedef struct _point {
    int x;
    int y;
} POINT;

struct AAA{
    int a;
    char b;
};
#pragma pack(1)
// 표준 문법이 아닙니다.
// => 컴파일러 확장 명령
struct BBB{
    char a;
    int b;
    double c;
};
// 구조체 멤버 변수의 크기 중 가장 큰 크기의 정렬을 가집니다.
// a___bbbbcccccccc => 4 + 4 + 8 = 16
struct CCC{
    int a;
    double b;
    char c;
};
// aaaa_____bbbbbbbbc_______ => 8 + 8 + 8 = 24
#if 0
int main(void)
{
    printf("%lu\n",sizeof(struct AAA));
    printf("%lu\n",sizeof(struct BBB));
    printf("%lu\n",sizeof(struct CCC));

    return 0;
}
#endif