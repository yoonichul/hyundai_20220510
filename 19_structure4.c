// 19_structure4.c
#include <stdio.h>
#include <stdlib.h>

typedef struct _point {
    int x;
    int y;
} POINT;


POINT add(POINT a, POINT b)
{
    POINT ret = {.x = a.x + b.x, .y = a.y + b.y};
    return ret;
}



int main(void) {
    // struct _point pt1 = {.x = 10, .y = 10};
    POINT pt1 =  {.x = 10, .y = 10};
    POINT pt2 =  {.x = 100, .y = 200};

    POINT result = add(pt1, pt2);
    printf("%d %d\n",result.x, result.y);
    return 0;
}