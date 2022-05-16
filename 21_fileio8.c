// 21_fileio8.c
#include <stdio.h>
int main(void)
{
    FILE *fp = fopen("test.txt","w");
    if(fp==NULL)
    {
        fprintf(stderr,"FILE OPEN ERROR\n");
        return 1;
    }
    fprintf(fp, "hello world\n");
    fflush(fp);
    // 강제적으로 버퍼을 비울 수 있습니다.
    int n;
    scanf("%d",&n);
    fclose(fp);
    return 0;
}
