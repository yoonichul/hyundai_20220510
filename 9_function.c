// 9_function.c
#include <stdio.h>
/*
    function
    : 입력값을 받아서 주어진 연산을 수행한 뒤 결과를 반환하는
      코드의 집합입니다.
    목적
    1) 재사용 가능하다.

    > 공통성과 가변성의 분리
      - 변하는 것과 변하지 않는 것의 분리
      => 변하는 것을 인자를 통해 전달받습니다.
*/
#if 1
#define ARRAR_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))
void print_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(void) {
    int arr1[3] = {1, 2, 3};
    int arr2[2] = {10, 20};
    print_array(arr1, ARRAR_LENGTH(arr1));
    print_array(arr2, ARRAR_LENGTH(arr2));
    // for (int i = 0; i < 3; i++) {
    //     printf("%d ", arr1[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < 2; i++) {
    //     printf("%d ", arr2[i]);
    // }
    return 0;
}
#endif

#if 0
int square(int x) { return (x) * (x); }
//반환타입 함수이름(함수 인자1, 함수 인자2 ...){}

//매크로 상수
#define PI 3.14

//매크로 함수
#define SQUARE(x) ((x) * (x))
/*
    1. 호출이 아니라 텍스트 치환입니다.
      => 호출의 오버헤드가 존재하지 않습니다.
    2. 주의사항
      => 치환으로 인해서 의도하지 않은 우선순위에 역전이 발생할 수 있습니다.
        : 인자로 전달된 부분의 괄호가 필요합니다.
      => ++x / x++ 같은 부수효과가 두번이상 발생하는 미정의 동작을 방어할 수 없습니다.
*/
int main(void) {
    int x = 2;
    printf("%d\n", SQUARE(++x));
    return 0;
}
#endif