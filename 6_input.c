// 6_input.c
#include <stdio.h>
// 표준 입출력 라이브러리
/*
    프로그램 : 실행 가능한 파일
    프로세스 : 실행 중인 프로그램
        => 파일이 3개 열려 있습니다.
        0: 표준 입력 장치 파일 => stdin
        1: 표준 출력 장치 파일 => stdout 
        2: 표준 에러 장치 파일 => stderr
        - Unix(Linux)
          : 모든 것은 파일이다.
        => 표준 출력 장치 파일과 표준 에러 장치 파일의 차이 ==> 버퍼링 정책에 차이점이 있습니다.
        표준 라이브러리 (stdin, stdout)은 라인 버퍼링 정책을 사용합니다.
        stderr는 버퍼링을 사용하지 않습니다.
        일반 파일은 풀버퍼링을 사용합니다.

*/
#if 0
int main(void)
{
    // printf("Hello, world!\n");
    // fprintf(stdout,"hello, world!\n");
    // fprintf(stderr,"hello,world!\n");
    // printf("hello"); // 출력 안됨
    fprintf(stderr,"hello"); // 출력 됨
    while(1) ;
    
    
    return 0;
}
#endif

/*
    2. 표준 입출력 함수
       - printf
       - scanf
    3. EOF (End Of File)
       - 일반 파일에서는 파일의 끝에 도달하였을 경우, EOF를 반환합니다.
       - 표준 입력은 약속된 키값을 통해 EOF를 전달할 수 있습니다.
            Windows : Ctrl + Z
              Linux : Ctrl + D
*/
#if 0
int main()
{
    int age = 0;
    int ret = scanf("%d",&age); 
    // 입력받고자 하는 변수의 주소를 전달해야 합니다.

    printf("ret: %d\n",ret);

    printf("age: %d\n",age);
    return 0;
}
#endif

// 파일 입출력
// => 표준 입출력과 사용 방법이 동일합니다.
#if 0
int main()
{
    FILE* fp = fopen("a.txt", "w");

    fprintf(fp, "Hello, world\n");
    fprintf(fp, "Hello, world\n");
    fprintf(fp, "Hello, world\n");

    fclose(fp);

    return 0;
}
#endif

int main()
{
    FILE* fp = fopen("a.txt", "r");

    int a, b, c, d;
    // scanf("%d %d %d %d", &a, &b, &c, &d);
    fscanf(fp, "%d %d %d %d", &a, &b, &c, &d);

    printf("%d %d %d %d\n", a, b, c, d);

    fclose(fp);

    return 0;
}