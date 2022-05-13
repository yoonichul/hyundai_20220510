// 19_structure.c
#include <stdio.h>
#include <stdlib.h>
// 구조체 태그명 : _point
// 구조체 타입 : struct point
typedef struct _point {
    // 구조체 멤버 변수
    int x;
    int y;
} POINT;

int main(void) {
    // POINT pt1;
    POINT *pt2 = (POINT *)malloc(sizeof(POINT));

    // POINT pt1 = {10, 20};
    // C-99 - 멤버 지정 초기화
    // POINT pt1 = {.x = 10, .y = 20};
    POINT pt1 = {
        0,
        0,
    };

    pt2->x = 100;
    pt2->y = 200;
    // .(dot) 연산자 : 구조체 멤버 변수에 접근이 가능합니다.
    // pt1.x = 10;
    // pt1.y = 20;

    printf("%d %d\n", pt1.x, pt1.y);
    printf("%d %d\n", pt2->x, pt2->y);

    return 0;
}