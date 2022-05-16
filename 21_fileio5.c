// 21_fileio5.c
#include <stdio.h>

// stdin
// stdout => FILE*
// stderr

// printf
// => fprintf(stdout, "...");
// scanf
// => fscanf(stdin,"%d",&n);
// get - Deprecated
// => fgets(buf, size, stdin);
int main(void)
{
    char buff[32];
    // gets(buff);
    fgets(buff,sizeof(buff),stdin);

    printf("%s\n",buff);
    return 0;
}