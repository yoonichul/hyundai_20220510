// 19_structure2.c
#include <stdio.h>
#include <stdlib.h>
/*
 */
#if 0
struct point{
    int x;
    int y;
};
typedef struct point POINT;
#endif

#if 1 
typedef struct point {
    int x;
    int y;
}POINT;
#endif
#if 0
typedef struct {
    int x;
    int y;
} POINT;
#endif
struct {
    int x;
    int y;
}XXX1, XXX2;
struct 
{
    int x;
    int y;
}XXX3;

#if 0
int main(void) {
    POINT pt;
    // XXX1 = XXX3; // 내용은 같지만 다른 타입의 구조체입니다.
    XXX1 = XXX2; // 태그명에 XXX1, XXX2 같이 선언되어있으므로 두 개의 구조체는 같은 타입입니다.
    return 0;
}
#endif

#if 1
// 전역 변수
struct point pt1;
int main(void) {
    // 지역 변수
    struct point pt2;
    // 동적 메모리 할당
    struct point *pt3 = malloc(sizeof(struct point));
    free(pt3);

    return 0;
}
#endif