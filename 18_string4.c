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
#if 1
int main(void)
{
    size_t str_length = 0;
    char str[32] = "hello";
    str_length = strlen(str);
    printf("%lu\n", str_length);

    return 0;
}
#endif