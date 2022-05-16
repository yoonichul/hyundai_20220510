// 21_fileio6.c
#include <stdio.h>
#pragma pack(1)
struct _point {
    int x;
    double y;
    char z;
}__attribute__((packed)) POINT;
#if 0
int main(void)
{
    FILE *fp = fopen("a.txt","w");
    struct _point pt =
    {
        .x = 100,
        .y = 3.14,
        .z ='A'
    };

    if(fp == NULL)
    {
        fprintf(stderr,"FILE OPEN ERROR\n");
        return 1;
    }
    fprintf(fp, "%d %lf %c\n",pt.x,pt.y,pt.z);
    fclose(fp);

    
    return 0;
}
#endif

//  이진(바이너리) 형태로 파일에 저장/로드할 때 사용하는 함수 - fwrite / fread
// size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
// size_t fwrite(const void *ptr, size_t size, size_t nmemb,FILE *stream);
int main(void) {
    FILE *fp = fopen("a.txt", "w");
    struct _point pt = {.x = 100, .y = 3.14, .z = 'A'};

    if (fp == NULL) {
        fprintf(stderr, "FILE OPEN ERROR\n");
        return 1;
    }
    fwrite(&pt, sizeof(pt), 1, fp);
    fclose(fp);

    struct _point pt2;
    FILE *fp2 = fopen("a.txt", "r");
    if (fp2 == NULL) {
        fprintf(stderr, "FILE OPEN ERROR\n");
        return 1;
    }
    fread(&pt2, sizeof(pt2), 1, fp2);
    printf("%d %lf %c\n", pt2.x, pt2.y, pt2.z);
    fclose(fp2);
    return 0;
}