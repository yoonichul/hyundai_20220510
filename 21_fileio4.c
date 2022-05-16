// 21_fileio4.c
#include <stdio.h>
#if 0
int main(void)
{
    FILE *fp = fopen("a.txt","r+");
    if(fp == NULL)
    {
        fprintf(stderr,"File Open Error!\n");
    }
    char buff[128];
    while(fscanf(fp,"%s",buff)!=EOF)
    {
        printf("buffer => %s\n",buff);
    }
    fclose(fp);

    return 0;
}
#endif
// Ctrl + D : Linux
// Ctrl + Z : Windows
// 키보드로 EOF를 전달하는 방법
// ./a.out < a.txt  :  a.txt를 표준 입력(stdin)으로 적용
// ./a.out > b.txt  : b.txt를 표준 출력(stdout)으로 적용
#if 1
int main(void)
{
    FILE *fp = fopen("a.txt","r+");
    if(fp == NULL)
    {
        fprintf(stderr,"File Open Error!\n");
    }
    char buff[128];
    while(fscanf(stdin,"%s",buff)!=EOF)
    {
        printf("buffer => %s\n",buff);
    }
    fclose(fp);
    return 0;
}
#endif
