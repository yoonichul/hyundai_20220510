// 22_macro_advanced.c
#include <stdio.h>

// 매크로 상수
// 매크로 함수
// include guard
/*
    1. 전처리기(preprocessor)의 문법입니다.
       특징 : #으로 시작합니다.

        #define PI 3.14
        #define ARR_MAX_SIZE 32
*/

// 2. 매크로 상수

#define PI 3.14
#define ARR_MAX_SIZE 32
// 3. 매크로 함수
//    1) 함수 호출의 오버헤드가 존재하지 않습니다.
//    2) 타입에 독립적인 Generic(일반적인) 함수를 만들 수 있습니다.
//    3) 텍스트 치환이기 때문에, 우선순위 등의 문제가 발생할 수 있습니다.
//    4) ++x 등의 코드를 사용했을 때, 미정의 동작이 발생하는 문제가 있습니다.
#if 0
int square(int a) { return a * a; }

#define SQUARE(x) (x) * (x)

int main(void) {
    int result = square(10);
    // SQUARE(++n); - undefined
    printf("result : %d\n", result);
    printf("%lf\n", PI);
    int arr[ARR_MAX_SIZE];

    printf("result : %lf\n",SQUARE(3.14));
    return 0;
}
#endif
#if 0
#define LOG(x)                                                                 \
    printf("x: %d\n", x);                                                      \
    printf("x: %d\n", x);
#endif
// 2줄 이상의 매크로 함수는 do{}while(0)를 통해 묶어줍니다.
#define LOG(x)                                                                 \
    do {                                                                       \
        printf("x: %d\n", x);                                                  \
        printf("x: %d\n", x);                                                  \
    } while (0)

int main(void) {
    int cmd;
    scanf("%d", &cmd);
    if (cmd > 0) {
        LOG(10);
    }
    return 0;
}