#include <stdio.h>
/*
    함수 호출의 원리
    => Calling Convention
    => 함수 호출 규약

    https://godbolt.org/
*/
#if 0
int add(int a, int b) { return a + b; }

int main(void) {
    int result = add(10, 20);
    printf("result: %d\n", result);
    return 0;
}
#endif

/*
   재귀 함수의 정의 : 함수가 자기 자신을 다시 호출하는 것을 재귀함수라고 합니다.
    - 함수가 무한정 중첩될 경우 Stack Overflow가 발생합니다.
    - 함수가 무한정 중첩되지 않도록, 종료 조건 설정이 필요합니다.


*/

#if 0
void print_hello(int n) {
    // 종료 조건
    if (n <= 0) {
        return;
    }
    printf("hello!!\n");
    print_hello(n - 1);
}


int main() {
    print_hello(10);
    return 0;
}
#endif
/*
    factorial
    3! = 3 * 2 * 1
    5! = 5 * 4 * 3 * 2 * 1
    n! => n-1 * n-2 * n-3 ....
    재귀함수의 장점
    => 코드를 직관적으로 구현할 수 잇음
      - 가독성이 좋은 선언적인 코드를 만들 수 있습니다.
    문제점
      1) 같은 코드를 비재귀로 구현하였을 때보다 느리다.
      2) 메모리의 효율성도 떨어집니다.
*/
#if 1
// non-recursive
/*
    Dynamic Programming
    => 동적 계획법
    => 계산의 결과를 캐시해서, 재활용할 수 있도록 만들어줍니다.
*/
int factorial1(int n) {
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}
int factorial2(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial2(n - 1);
}
int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    printf("fac1: %d , fac2: %d\n", factorial1(5), factorial2(5));
    return 0;
}

#endif
