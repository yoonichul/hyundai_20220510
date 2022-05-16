// 18_string5.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    strcmp
    strcpy
    => 복사하는 대상의 메모리가 충분히 할당되어야 합니다.
    strlen
    strcat
    => 두개의 문자열을 합쳐서 하나의 문자열로 만들어줍니다.
    char *strcat(char *dest, const char *src);
    주의사항: dest에 충분한 공간이 존재해야 합니다.


*/
#if 0
int main(void)
{
    
    char str1[32] = "hello";
    char str2[] = " world!!";
    printf("%s\n",str1);
    strcat(str1,str2);
    printf("%s\n",str1);

    return 0;
}
#endif

#if 0
int main(void) {
    const char *str1 = " world!!";
    const char *str2 = "hello";
    // 1. 동적 메모리 할당
    char *p = malloc(sizeof(strlen(str1) + strlen(str2) + 1));
    strcpy(p, str2);
    strcat(p, str1);
    printf("%s\n", p);
    free(p);

    return 0;
}
#endif

// char *strdup(const char *s);
// 1. malloc
//    주의 > free를 해야 한다.
#if 0
int main(void) {
    const char *s = "hello";
    // char str[32] = s;
    // => 문자열 초기화는 문자열 리터럴("hello")를 통해서만 가능합니다.

    // s는 수정 불가능한 메모리입니다.
    // 수정하기 위해서는 s의 문자열의 크기 만큼 메모리를 할당해서
    // 수정해야 합니다.
    // char *p_str = (char *)malloc(strlen(s) + 1);
    char *p_str = strdup(s);
    strcpy(p_str, s);
    // - string.h strdup 함수가 있습니다.
    printf("%s\n", p_str);
    p_str[0] = 'X';
    printf("%s\n", p_str);
    free(p_str);
    return 0;
}
#endif
// 2. strtok는 정적 지역 변수 / 전역 변수로 만들어져 있습니다.
//    - thread 안정성이 없습니다.
#if 0
int main(void) {
    char s[] = "hello world show me the money";
// 공백을 기준으로 토큰을 분리하고 싶을 떄
// => strtok
#if 0
    char *p = strtok(s, " ");
    printf("%s\n", p);
    p = strtok(NULL, " ");
    printf("%s\n", p);
    p = strtok(NULL, " ");
    printf("%s\n", p);
    p = strtok(NULL, " ");
    printf("%s\n", p);
#endif
#if 0
    char *p = strtok(s, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
#endif
    return 0;
}
#endif

#if 1
int main(void) {
    const char *s1 = "hello";
    const char *s2 = "\tworld";
    char *s = (char *)malloc(sizeof(strlen(s1) + strlen(s2) + 1));
    strcpy(s, s1);
    strcat(s, s2);
    printf("%s\n", s);
    return 0;
}

#endif
