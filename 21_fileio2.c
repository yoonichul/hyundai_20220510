// 21_fileio2.c
#include <stdio.h>
/*
    일반 파일
      - fopen(파일 이름(경로), 모드);
        : FILE* 를 반환합니다.
        > 오류 처리가 반드시 필요합니다.
        Mode
        - "r" : read
           - 열고자 하는 파일이 존재하지 않는 경우, NULL을 반환합니다.
        
        - "w" : write
           - 열고자 하는 파일이 존재하지 않는 경우, 새로운 파일을 생성합니다.
           - 열고자 하는 파일이 존재하는 경우, 파일의 크기를 0으로 만들어줍니다.
        - "a" : append (파일의 마지막부터 쓸 수 있습니다.)
           - 열고자 하는 파일이 존재하지 않는 경우, 새로운 파일을 생성합니다.                 
      - fclose
        => struct FILE 구조체를 파기하고, 파일의 버퍼를 비워줍니다.
*/
#if 0
typedef struct _file{
    //...
}FILE;
#endif

int main(void)
{
    FILE *fp = fopen("a.txt","w");
    // FILE *fp = stdout;
    #if 0
    if(fp != NULL)
    {
        /*Nothing*/
    }
    else
    {
        fprintf(stderr,"FILE OPEN ERROR!");
        return 1; 
    }
    #endif
    #if 1
    if(fp == NULL)
    {
        fprintf(stderr,"FILE OPEN ERROR!");
        return 1; // early exit
    }
    #endif
    // fprintf(FILE*, ...)
    fprintf(fp,"Hello!!\n");
    int n = 10;
    fprintf(fp,"n=%d\n",n);
    fclose(fp);


    return 0;
}