// 2. variable(변수)
#include <stdio.h>

/*
변수 (variable)
1. 메모리에 저장하는 실행시간에 변경가능한 값

2. 전역 변수
  - 프로그램이 시작될 때 초기화되고, 끝날 때까지 존재하는 변수
  - 실행 파일의 크기가 커집니다.
  - 초기화하지 않는 경우, 0으로 자동으로 초기화합니다.

3. 지역 변수
  - 함수의 시작에 초기화되고, 함수가 종료되면 사라집니다.
  - 초기화하지 않으면, 쓰레기값을 가지고 있습니다.
  - 초기화가 중요합니다.

4. 정적 지역 변수 / 내부 정적 변수
  - 함수의 시작에 초기화되고, 프로그램이 종료될 때까지 유지됩니다.
  - static : 기억 부류 지정자 (Storage Class Specifier)

5. 전역 변수/함수(static)
  - static : 통용 범위 지정자
            internal linkage를 갖는다.
            같은 파일에서만 접근이 가능합니다.

  - extern : external linkage를 갖는다.
             다른 파일에서 접근이 가능하다.

6. 동적 메모리 할당 변수
  - malloc / free
  - 프로그래머가 원하는 시점에 생성하고, 원하는 시점에 파기할 수 있습니다.
  - free를 잊을 경우, 메모리 누수 문제점이 있습니다.
  - 할당/해지의 오버헤드가 존재합니다.

7. 타입
  => 타입의 크기에 따라서 메모리 할당 크기가 결정됩니다.
  - x64 기준
  char   - 1byte
      > 부호가 있는지 없는지는 컴파일러마다 다름
    (문자열이 아닌 1byte의 데이터 타입이 필요할 경우 아래의 타입 사용)
    : signed char : -128 ~ 127 
      > 부호가 있는 1 byte 정수를 표기할 경우 사용
    : unsigned char : 0 ~ 255
      > 0을 포함한 1 byte 양수의 정수를 표기할 경우 사용
  short  - 2byte
  int    - 4byte
  long   - 4byte(Windows) / 8byte(Linux)  
  long long - 8byte
  
  float  - 4byte
  double - 8byte
   > 부동소수점 타입
     - 오차가 있습니다. 
     - 동등성 비교가 불가능합니다.
*/
int g1; // global variable
static int g2;
// int g[10000] = {1, 2, 3};
// {
//     1,
//     2,
//     3,
// }; //global variable - 40000bytes

int main(void)
{
    // int a; //local variable
    // static int b; // static local variable, inner static variable
	  // printf("%lu\n", sizeof(long));
    double a = 0.7;
    double b = 0.1 * 7;
    if(a == b)
    {
      printf(" Same \n");
    }
    else 
    {
      printf("Different\n");
    }
	  return 0;
    // int a2[10000] = {1,2,3};
}

