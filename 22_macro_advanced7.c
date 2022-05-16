// 22_macro_advanced7.c
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define XASSERT(expr)                                                          \
    do {                                                                       \
        if (!(expr)) {                                                         \
            fprintf(stderr, "Assertion failed: %s, %s:%d\n", #expr, __func__,  \
                    __LINE__);                                                 \
            abort();                                                           \
        }                                                                      \
    } while (0)
// assert

// 오류 메세지를 표현할 때,
// 파일 / 라인 정보 등을 제공하는 것이 좋습니다.
// => 미리 정의된 매크로
// __LINE__
// __FILE__
void print_age(int age) {
#if 0
    if (age <= 0) {
        fprintf(stderr, "%s : %d(%s) \nage must be positive.\n", __FILE__,
                __LINE__, __func__);
        abort();
    }
#endif
    // XASSERT(age > 0);
    assert(age > 0);
    printf("age: %d\n", age);
}
#define STATIC_ASSERT(expr) char __stat_assert_faile[(expr) ? 1 : -1]
// C11 표준에 _Static_assert(expr, reason)
void foo() {
    // sizeof(long)이 반드시 4바이트이어야 합니다.
    // assset(sizeof(long) == 4);
    // 컴파일 타임에 체크가 가능합니다.
    // =>static_assert - C++
    _Static_assert(sizeof(long) == 8,
                   " 64bit required"); // C 11 표준에서 사용가능한 함수입니다.
    STATIC_ASSERT(sizeof(long) == 8);
}

int main(void) {
    // 삼항 연산자
    int n = 10;
    int result = (n > 0) ? 100 : 200;
    // if (n > 0)
    //     result = 100;
    // else
    //     result = 200;
    foo();
    // print_age(-42);
    return 0;
}