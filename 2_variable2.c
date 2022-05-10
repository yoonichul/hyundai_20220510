#include <stdio.h>

/*
    1. Local variable
      > 초기화하지 않으면 "쓰레기값"을 가지고 있습니다.
    2. 지역 변수는 사용하기 전에 반드시 초기화를 수행해야 합니다.
    3. 초기화 vs 대입
    4. 지역 변수에 대한 초기화는 반드시 함수의 상단부에 위치해야 합니다.
      - 지금은 어디서든 지역 변수를 생성할 수 있습니다.
    5. double을 int에 대입할 경우, 
       소수점이 사라집니다.
*/

int main(void)
{
    int d =  (int)3.14;

    int a = 10; // init
    
    printf("a = %d\n",a);
    
    int b;
    
    b = 10; // substitute
    
    printf("b = %d\n",b);
    
    return 0;
}