// 18_string.c
#include <ctype.h>
#include <stdio.h>
// 소문자인지 판단하고, 대문자인지 판단하고,
// 소문자를 대문자로 변경하고, 대문자를 소문자로 변경하는 함수가 이미
// 존재합니다.
/*
    문자타입 - char
    문자 리터럴 - 'a', 'A', 'b', '0', 'x'
    => ASCII code
    => UNICODE
       한글
        - Windows: euc-kr(CP949) / UTF-16 / UTF-8
        - Linux: UTF-8
        - Mac: UTF-8
    'A' : 65 / 'B' : 66
    'a' : 97 / 'b' : 98
    '0' : 48

    65 => 0x41
       => 0100 0001
    1. C 언어에서 문자를 표현하는 방법
      => ASCII 개념
        'A' : 65 / 'B' : 66
        'a' : 97 / 'b' : 98
        '0' : 48
*/
#if 0
int main(void)
{
    char c = 50;
    printf("%c\n",c);



    return 0;
}
#endif
/*
    2. 소문자를 입력 받았을 경우 , 대문자로 변경해서 출력하는 프로그램을
   작성하시오
*/
#if 0
int main() {
    char c;
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
    {
        printf("This is a lower letter\n");
        c = (c - 'a') +'A';
    }
    printf("%c\n",c);
    return 0;
}
#endif

#if 0
int main(void) {
    char c;
    scanf("%c", &c);
    if(islower(c))
    {
        printf("This is a lower letter\n");        
        c = toupper(c);
    }
    else if(isupper(c))
    {
        printf("This is a upper letter\n");        
        c = tolower(c);
    }
    printf("%c\n",c);
    return 0;
}
#endif

// 한자리 숫자를 입력하였을 때,
// 정수값으로 변경해서 출력하는 프로그램을 작성하시오.
#if 1
int main(void) {
    char c;
    int ans = -1;
    scanf("%c", &c);
    if (c >= '0' && c<= '9') {
        printf("This is a number character\n");
        ans = (int)(c - '0');
    }
    printf("%d\n",ans);
}

#endif