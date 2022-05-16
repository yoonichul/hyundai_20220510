// 21_fileio9.c
#include <errno.h>
#include <stdio.h>
#include <string.h> // strerror
/*
    C 오류 처리
    => 반환값을 통해서 확인합니다.

    C언어 표준 입출력 함수가 실패한 경우,
    에러의 원인이 errno(전역변수 , errnum의 준말)를 통해 알 수 있습니다.
*/
int main(void)
{
    FILE *fp = fopen("aaa.txt","r");
    if(fp == NULL)
    {
        // printf("FILE OPEN ERROR : %d\n", errno);
        // printf("Fail : %s\n", strerror(errno));
        perror("Fail");
        return 1;
    }
    return 0;
}
