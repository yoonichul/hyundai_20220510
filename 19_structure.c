// 19_structure.c
#include <stdio.h>

/*
    복소수 2개의 합을 구하는 함수를 만들어봅시다.
    복소수
    실수부 / 허수부
*/
// 1) 함수의 결과를 반환값을 통해 전달하는 것이 아니라,
//    인자를 통해서 전달한다.
// => Call by reference
//  : Out Parameter
#if 0
void add(int ar, int ai, int br, int bi, int *sr, int *si) {
    *sr = ar + br;
    *si = ai + bi;
    // return sr, si;
    // => 함수는 하나의 값만 반환할 수 있습니다.

int main(void) {
    int ar = 1, ai = 1;
    int br = 2, bi = 2;
    int sr = 0, si = 0;
    add(ar, ai, br,bi, &sr,&si);
    printf("%d + %di\n",sr,si);
    return 0;
}
#endif

// 2) 새로운 타입을 설계한다.
// int, char, double, long => built-in type
// struct                  => user defined type(사용자 정의 타입)

// 복소수
struct complex {
    int re;
    int im;
};
void print_complex(const struct complex input)
{
    printf("%d %d\n",input.re,input.im);
}

struct complex add(struct complex a, struct complex b) {
    struct complex s = {a.re + b.re, a.im + b.im};
    return s;
}
int main(void)
{
    struct complex a = {1, 1};
    struct complex b = {2, 2};
    print_complex(add(a, b));

    return 0;
}

#if 0
typedef struct _complex_num
{
    int sr;
    int si;
}COMPLEX_NUM;
COMPLEX_NUM add (int ar, int ai, int br, int bi)
{
    COMPLEX_NUM ret;
    ret.sr = ar + br;
    ret.si = ai + bi;
    // return sr, si
    // => 함수는 하나의 값만 반환 할 수 있습니다.
    return ret;
}

int main()
{

}
#endif