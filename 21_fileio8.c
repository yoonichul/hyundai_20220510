// 21_fileio8.c
#include <stdio.h>
#if 0
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
#endif
// fseek
// int fseek(FILE *stream, long offset, int whence);
// whence
//   SEEK_SET : 시작
//   SEEK_CUR : 현재 위치
//   SEEK_END : 마지막 위치
// 반환값
// - 성공 0, 실패 -1
#if 1
int main(void) {
    char buff[32];
    FILE *fp = fopen("test.txt", "w+");
    if (fp == NULL) {
        fprintf(stderr, "FILE OPEN ERROR\n");
        return 1;
    }
    fprintf(fp, "hello\n");
    printf("%d\n",fseek(fp, 0, SEEK_SET));
    fscanf(fp, "%s", buff);
    printf("buffer : %s\n", buff);
    fclose(fp);
    return 0;
}
#endif
#if 0
#include <fcntl.h>
#include <unistd.h>
int main(void) {
    int fd = open("19_structure.c",O_RDONLY);
    size_t fileSize = lseek(fd, 0, SEEK_END);
    printf("%lu\n",fileSize);

    return 0;

}
#endif
