//11_static_locat_variable.c
#include <stdio.h>
/*
    정적 지역 변수
    1. 전역 변수처럼 사라지지 않고 유지되지만.
       지역 변수처럼 함수에서만 접근이 가능해야 한다.
    2. 지역 변수처럼 스택에 저장되지 않습니다.
       데이터 영역(전역 변수와 동일한 영역)에 저장됩니다.
    3. 함수가 최초에 실행될 때 초기화되고, 프로그램이 종료될 때(함수가 더 이상 호출되지 않을 때)
       사라집니다.
*/
void foo()
{
    static int count = 0; // 최초 함수가 호출되는 시점에만 수행됩니다.
    ++count;
    printf("%d\n",count);
}

int main(void)
{
    foo();
    foo();
    foo();
    return 0;
}