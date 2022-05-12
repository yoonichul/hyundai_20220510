/*
    Array / Array Pointer
    - Array : 연속된 메모리를 할당할 수 있습니다.
    - Pointer : 변수의 주소를 가지고 있는 타입.
*/
#include <stdio.h>
// Pointer
#if 0 
int main(void)
{
    int n = 10;
    printf("%p\n",&n);
    
    int *p= &n;
    printf("%p\n",p);

    double d = 3.14;
    double* pd = &d;
    printf("%lf\n",*pd);

    return 0;
}
#endif
/*
    Array
        - 배열의 이름은 배열의 첫번째 원소의 시작주소로 해석됩니다.
          => Decay
          => 예외
            1)sizeof
            2)&
        - 길이 정보를 추가적으로 받아야 합니다.
*/
#if 0 
void print(int *x, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n");
}

int main(void)
{
    int x[3] = {1, 2, 3};
    // print(x, sizeof(x)/sizeof(int));
    print(x, sizeof(x)/sizeof(x[0]));
    return 0;
}
#endif

#if 0 
void print(int (*x)[3], int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int x[2][3] = {{1,2,3},{2,3,4}};
    print(x, sizeof(x)/sizeof(x[0]));
    // print(&x[0]) 
    // int(*p)[3];

    return 0;
}
#endif

#if 0
void foo(int *x)
{
    printf("foo : %lu\n",sizeof(x)); // 8 byte
}

int main()
{
    int x[3];
    int *p = x;
    int (*p2)[3]=&x;

    printf("main : %lu\n",sizeof(x)); //12 byte
    foo(x);
}
#endif

#if 0
typedef int (*PARR3)[3];
PARR3 foo(void)
// int (*foo())[3]
{
    static int x[3] = {10, 20, 30};
    printf("%d %d %d\n", x[0], x[1], x[2]);
    return &x;
}

int main() {
    int x[3];
    int *p = x;
    int(*p2)[3] = &x;

    printf("main : %lu\n", sizeof(x)); // 12 byte
    foo();
}
#endif

/*
    int (*foo())[3]
    1. foo()
     -> foo는 함수입니다.
    2. (*foo())
     -> 반환 타입은 포인터입니다.
    3.  int (*foo())[3]
     -> 포인터가 가르키는 타입은 int[3] 배열입니다.
*/

/*
    * C / C++
    a.c  -> a.o -> a.out / a.exe
        - LLVM(Compiler)
            C/C++ -> IL(Intermediate Language) -> a.o -> a.out
    * JAVA
    A.java -> A.class(ByteCode, IL) <- VM(java.exe / java)
         Compile
        - Language
            Jython
            JRuby
            Kotlin
            Scala
    MONO Project


    * C# / A.cs     -> A.obj(IL)    <- CLR
      C++
      VB
      F#

    Wirte Once, Run Anywhere
*/
/*
    20220512 REVIEW
*/
//  1. sizeof
//  2. 9
//  3. 다음 중 짝수/홀수를 판단할 때 사용하는 연산자는?
//     ==> %(&)
//  4. n이 3일때 아래 코드의 실행후에 n의 값은 얼마 일까요?
//     if (n == 3 || ++n == 4) {}
//     ==> 3
#if 0
int main(void) {
    int arr[10] = {};
    // 홀수 여부를 확인하고 싶다.
    int n = 20;
    scanf("%d", &n);
    // & 연산의 결과는 왼쪽 피연산자의 부호와 같은 결과가 나옵니다.
    //  1 % 2 ==> 1
    //  -1 % 2==> -1
    // if (n & 1 == 1) {
    // if (n % 2 == 1) {
    //     printf("odd number\n");
    // } else {
    //     printf("even number\n");
    // }
    if(n < 0)
    {
        goto foo;  // 중첩된 loop를 한번에 빠져나갈 경우 사용합니다.
    }
    printf("goo\n");
    printf("goo\n");
    printf("goo\n");
foo:
    printf("foo\n");
    printf("foo\n");
    printf("foo\n");

    return 0;
}
#endif

#if 1
int main(void) {
    int x[3][3] = {
        {1, 2, 3},
        {10, -20, 30},
        {100, 200, 300},
    };
    int flag = 0;
#if 0
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (x[i][j] < 0) {
                flag = 1;
                break;
            }
            printf("%d\n", x[i][j]);
        }
        if (flag)
            break;
    }
#endif

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (x[i][j] < 0) {
                goto exit;
            }
            printf("%d\n", x[i][j]);
        }
    }
exit:
    return 0;
}
#endif