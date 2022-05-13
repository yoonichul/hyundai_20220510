// 0_QnA4.c
#include <stdio.h>
/*


*/
// call by value
#if 0
int n = 10;
void inc1(int n)
{
    ++n;
}
// call by reference / call by pointer(C++)
void inc2(int* p)
{
    (*p)++;    
}
int main(void)
{
    int n = 10;
    inc1(n);
    printf("%d\n",n);

    inc2(&n);
    printf("%d\n",n);
    return 0;
}
#endif
#if 0
int age;
int nAge; // 헝가리안 표기법
int n = 10;
// int n = 20; //심볼 충돌 / 이름 충돌
int main(void)
{
    int n = 20;  // ok!
    printf("%d\n",n);

    return 0;
}
#endif
/*
    printf - (format)
    1. 서식을 지정하고, 서식에 대한 값(변수)를 인자로 나열하는 형태로 사용합니다.
      %d: decimal(10진수)
      %x, %X: hex(16진수)
      %c: 문자(ascii)
      %f: float
      %lf: double
      %p: pointer(주소)
      %s: string(문자열) => char 배열인데 널문자로 종료하는 문자열
      - Linux (long : 8byte)
      %ld : long 정수 출력 => offset(포인터 - 포인터)
      %lu : unsigned long 정수 출력 => sizeof
      - Window(long : 4byte) / (long long : 8byte)
      %lld : long long 정수 출력 => offset(포인터 - 포인터)
      %llu : unsigned long long 정수 출력 => sizeof

*/
#if 1
void print_str(const char *s)
{
    const char *c_ptr = s;
    while(*c_ptr)
    {
        printf("%c",*c_ptr);
        c_ptr++;
    }
    printf("\n");    
    printf("%s\n",s);
}

int main(void)
{
    char str[] = "hello";
    printf("%lu\n",sizeof(str)); // 6

    print_str(str);
    // str => &str[0] => char *
    // print_str(&str);
    // &str => char[6] => char(*)[6]

    return 0;
}

#endif