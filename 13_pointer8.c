// 13_pointer8.c
#include <stdio.h>
/*
    10   11   12   13   14
    |----|----|----|----|----|----|----|----|
      78   56   34   12   00   00   00   00 

*/
int main(void)
{
    // int n = 0x12345678;
    signed char x[4] = {0x78, 0x56, 0x34, 0x12};
    // int *p = &n;
    // char *p = (char*) &n;
    char *p = x;

    int *int_ptr = (int *)x;
    printf("%x\n",*p++);
    printf("%x\n",*p++);
    printf("%x\n",*p++);
    printf("%x\n",*p);
    printf("INT:: %x\n",*int_ptr);

    return 0;
}