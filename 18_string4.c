// 18_string.c
#include <stdio.h>
#include <string.h>
/*
    1. 문자타입
    - char(1바이트)
      0 ~ 127 : ASCII 코드
    => A : 65
    => a : 97
    => 0 : 48
    2. 문자열 타입
    - char 배열이지만 마지막 원소가 '\0'(NULL)입니다.
    3. 문자열 함수 - string.h
    - 비교: strcmp
*/
#if 0
int main(void) {
    char str1[] = "hello";
    const char *str2 = "hello";

    printf("%lu\n", sizeof(str1));
    printf("%lu\n", sizeof(str2));
    // if (str1 == str2)
    //    - str1의 주소와 str2의 주소를 비교하고 있습니다.
    //    => 문자열의 내용이 동일해도, 주소는 다를 수 있습니다.
    if (!strcmp(str1, str2)) {
        printf("SAME SENTENCE\n");
    }

    return 0;
}
#endif

#if 0
int main(void)
{
    char str1[6]= "hello";
    // char str2[6] = str1;
    int a[3] = { 1, 2, 3};
    // int[b] = a;
    int b[3];

    for(int i = 0 ; i < 3; i++)
    {
        b[i]= a[i];
    }
    for(int i = 0; i < 3; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");

    return 0;
}
#endif

// 4. 문자열 복사 함수 - strcpy
// char *strcpy(char *dest, const char *src);
// char *strncpy(char *dest, const char *src, size_t n);
// => 복사되는 배열에는 충분한 메모리가 할당되어 있어야 합니다.
#if 0
int main(void)
{
    char str1[6] = "TEST";
    char str2[6];
    strcpy(str2,str1);
    printf("%s\n",str2);

    return 0;
}
#endif
// 5. 문자열 길이
// size_t strlen(const char *s);
unsigned long xstrleng(const char *str) {
// 1. for
#if 0
    unsigned long len = 0;
    for (const char *p = str; *p != '\0'; p++) {
        len++;
    }
    return len;
#endif
#if 1
    printf("str_size: %lu\n", sizeof((str)) / sizeof(str[0]));
    const char *p = str;
    // while (!(*p++)) ;
    /* Nothing*/
    for (p = str; *p != '\0'; p++)
        ;
    /* Nothing */
    return p - str;

#endif
}
#if 0
void xint_length(const int *int_arr) {
    printf("int_arr size: %lu\n", sizeof(int_arr)); // return Pointer size
}

int main(void) {
    size_t str_length = 0;
    char str[32] = "hello";
    int temp[32] = {
        0,
    };
    printf("int_arr size: %lu\n", sizeof(temp) / sizeof(temp[0]));
    xint_length(temp);
    // str_length = xstrleng(str);
    // printf("%lu\n", str_length);

    return 0;
}
#endif
#if 1
int main(void)
{
    char c1 = ' ';
    char c2 = '\n';
    char c3 = '\t';
    char c4 = '\\';

    printf("123%c456", 32);

    char str[]
        = "hello \tworld\n";
    printf("%lu\n", strlen(str));

    return 0;
}
#endif