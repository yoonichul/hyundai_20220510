// 21_fileio3.c
#include <stdio.h>

int main(void)
{
    FILE* fp = fopen("a.txt","r");
    if(fp == NULL)
    {
        fprintf(stderr,"FILE OPEN ERROR!\n");
        return 1;
    }
    int n ;
    // scanf("%d",&n);
    fscanf(fp,"%d",&n);
    printf("n = %d\n",n);
    fclose(fp);
    return 0;
}
/*
    mode
    r
    w
    a

    +
     r+ : read / write 가능하나 파일이 없으면 NULL 반환
     w+ : read / write가 가능하고 파일이 없으면 새로 만듬
     a+
    t: Text
    b: Binary
*/