// 21_fileio9.c
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE* fp = fopen("19_structure.c","r");
    if(fp==NULL)
    {
        perror("");
        exit(1);
    }
    int ch;
    // getchar() : 표준 입출력에서 한글자만 읽습니다.
    // fgetc(fp) : 파일로부터 한 글자를 읽습니다.
    while( (ch = fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    return 0;
}