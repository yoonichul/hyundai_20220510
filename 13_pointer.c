// 13_pointer.c
#include <stdio.h>
/*
    1. C언어에서 함수의 인자를 전달할 때, 복사를 수행합니다.
    2. 포인터
      필요성 : 다른 함수를 통해 변수의 값을 변경하기 위해서 필요합니다.
*/
// call by reference
void inc(int* p)
{
    ++(*p);
}
// call by value
int inc2(int n)
{
    return ++n;
}
int main()
{
    int n = 0;
    inc(&n);  
    inc(&n);  
    inc(&n);  
    printf("%d\n",n);
    return 0;
}