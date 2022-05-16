// 0_QnA5.c
#include <stdio.h>
#if 0
int main(void) {
#if 0
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
#endif
    return 0;
}
#endif
// Linux
// > Kernel(OS)
//  - 배포판

//  Redhat
// => RHEL
//    (RedHat Enterprise Linux)
// => Fedora
// => CentOS

//  Canonical
// => Ubuntu
//    매년 4월 / 10월 새로운 버전 업데이트
//    20.04 / 20.10
//    21.04 / 21.10
//    20.04 LTS
//    22.04 LTS(4년 유지보수) - 2년 단위

//  Debian
// => Debian Linux

// 실행 흐름(Thread, 실타래)을 여러개 만들 수 있습니다.
//  => 운영체제의 API를 이용해야 합니다.

#if 0
#include <pthread.h>
#include <unistd.h>
void *thread_start(void *p) {
    while (1) {
        printf("foo\n");
        sleep(1);
    }
}
int main(void) {
    // 스레드 생성 / 시작
    pthread_t thread;
    pthread_create(&thread,NULL,&thread_start, NULL);
    // pthread_create(&thread, NULL, &thread_start, NULL);
    while (1) {
        printf("main\n");
        sleep(1);
    }
    return 0;
}
#endif

#if 0
#include <pthread.h>
#include <unistd.h>
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int n = 0;
void *foo(void *arg) {
    int local = 0;
    for (int i = 0; i < 1000000; i++) {
        // pthread_mutex_lock(&mutex);
        // n++;
        // pthread_mutex_unlock(&mutex);
        // 스레드 경쟁 조건 : Race Condition
        // => Mutex(Mutual Exclusion, 상호배제)
        ++local;
    }
    pthread_mutex_lock(&mutex);
    n += local;
    pthread_mutex_unlock(&mutex);
    printf("end\n");

    return 0;
}

int main(void) {
    pthread_t thread[2];
    for (int i = 0; i < 2; i++) {
        pthread_create(&thread[i], NULL, &foo, NULL);
    }
    getchar();
    printf("%d\n",n);
    return 0;
}
#endif

#if 1
#include <stdlib.h>

int main(void)
{
    // int x[2][3];
    // [ int[3] ][ int[3] ]
    // int x2[6];
    // [int][int][int][int][int][int]
    int *x2 =(int*)malloc(sizeof(int)*6);
    int(*x)[3] = (int(*)[3])malloc(sizeof(int[3]) * 2);
    free(x);
    free(x2);
    return 0;
}
#endif