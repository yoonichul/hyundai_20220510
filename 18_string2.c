// 18_string2.c
#include <stdio.h>
#include <stdlib.h>
/*
    1. 문자열은 char 배열을 통해 표현합니다.
    => 마지막 요소가 0으로 끝나는 char 배열입니다.

    int *p = NULL;
    char c = '\0';

*/
#if 0
void print(int *x) {
    while (*x) {
        printf("%d\n", *x++);
    }
}

int main(void) {
    int x[5] = {1, 2, 3, 4, 0};
    print(x);
    char str[] = {
        'h', 'e', 'l', 'l', 'o', '\0',
    };
    printf("%s\n", str);
    return 0;
}
#endif

#if 0
int main(void) {
    // 문자열 타입
    char str[6] = "hello";
    // char str[5] = {
    //     'h', 'e', 'l', 'l', 'o',
    // }; // => 단순히 char 배열이 됨 문자열 X --> 마지막 널문자가 없음 
    
    printf("%s\n", str);
    // 문자열의 끝을 인식할 수 없기 때문에, 미정의 동작이 발생할 가능성이 있습니다.
    return 0;
}
#endif
/*
    2. 문자열 타입은 널 문자로 종료되는 char 배열입니다.
    3. 문자열을 다루는 방법 2가지
       1) char str[] = "hello";
       2)


*/
#if 0
int main(void)
{
    char str[] ="hello";
    str[0] = 'x';
    printf("%s\n",str);


    const char *str2 ="hello";
    // char *str2 = malloc(sizeof(char)*4);
    // *str2 = "hello";
    // str2[0] ='x';
    // 텍스트 영역에 대한 수정은 미정의 동작입니다.
    printf("%s\n",str2);
    
    
    return 0;
}
#endif

#if 0

int main(void) {
    int n = 100;
    const int *p = &n;
    printf("%d\n", *p);
    /*
        int *p = &n;
        * 앞에 const가 있는 경우: 
          => 포인터가 가르키는 대상체를 변경할 수 없습니다.
        * 뒤에 const가 있는 경우:
          => 포인터가 가르키는 주소값을 변경할 수 없습니다.

    */
    const int *p2 = &n;
    int *const p3 = &n;
    int const *p4 = &n;
    const int *const p5 = &n;
    int const *const p6 = &n;
}
#endif

#if 0
int main(void)
{
    int a = 10;
    int b = 20;
    // const int* pa = &a;
    // *pa = 200; // - error! ==> 앞에 const가 있는 경우 대상체 변경 불가
    int* const pa = &a;
    *pa = 200; 
    // pa = &b; // - error! ==> 뒤에 const가 있는 경우 포인터가 가르키는 주소값을 변경 불 가
}

#endif

#if 1 
// 포인터를 통해 변경되지 않는 값에 대해서는
// const를 지정하는 것이 좋습니다.
// 1) 의도를 전달할 수 있다.
//    - 포인터를 통해 값을 변경하는 것이 아니라 읽기 전용으로 사용하겠다.
// 2) 실수를 컴파일 타임에 확인할 수 있다.
void print_array(const int *arr, int n)
{
    // ....
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5};
    print_array(arr,5);
}

#endif