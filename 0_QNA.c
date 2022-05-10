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

#if 1
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



