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
    6. 변수의 주소와 크기
      1) 변수는 메모리에 할당됩니다.
      2) 변수의 선언에서 이름을 뺀 나머지가 타입입니다.
         Declaration         Type
         int n;           => int
         int arr[10]      => int[10]
         void foo(int a); => void(int a)
      3) 변수의 메모리 크기를 얻기 위해서는 sizeof 연산자를 사용하면 됩니다.
        => unsigned long   
           sizeof(타입)
           sizeof(변수) / sizeof 변수
      4) 모든 변수는 메모리에 할당되고, 메모리의 주소를 가집니다.
        => &: 주소연산자
        => 주소를 출력하는 서식은 %p 입니다.
        => 주소의 크기는 32bit는 4 byte / 64 bit는 8 byte 입니다.
*/

int main(void)
{
    int d =  (int)3.14;

    int a = 10; // init
    
    printf("a = %d\n",a);
    
    int b;
    
    b = 10; // substitute
    
    printf("b = %d\n",b);
    
    printf("%lu\n",sizeof(char));
    printf("%lu\n",sizeof(unsigned int));
    printf("%lu\n",sizeof(unsigned long long));
    printf("%lu\n",sizeof a);
    printf("%p\n",&a);
    printf("%lu\n",sizeof(&a));



    return 0;
}