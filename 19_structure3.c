// 19_structure.c
#include <stdio.h>

typedef struct _point{
    int x;
    int y;
}POINT;



int main(void)
{
    POINT pt1;

    pt1.x = 10;
    pt1.y = 20;
    
    return 0;
}