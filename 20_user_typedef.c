// 20_user_typedef.c
#include <stdio.h>
// 사용자 정의 타입
// => struct
//    union
//    enum

// 공용체
// - 멤버 데이터 변수 중 가장 큰 크기를 가지는 것의
//   크기와 동일합니다.
union AAA {
    int a;
    char b;
    double c;
}; // 8
union job {
    char *school;
    char *company;
};
union test{
    char bytes[4];
    int n;
};

struct user {
    char *name;
    int age;
    union job job;
};




int main(void) {
    union test t;
    t.n = 0x12345678;
    printf("%x %x %x %x\n", t.bytes[0], t.bytes[1], t.bytes[2], t.bytes[3]);



    struct user user;
    user.job.company = "Hyundai";
    printf("%s\n",user.job.company);
    printf("%s\n",user.job.school);

    user.job.school = "Seoul";
    printf("%s\n",user.job.company);
    printf("%s\n",user.job.school);

    union AAA aaa;
    printf("%lu\n", sizeof(aaa));

    return 0;
}