// https://github.com/yoondev-classroom/hyundai_220510.git
#include<stdio.h>
#define PI 3.14
// Compile : Ctrl + F7
// Compile + Run : Ctrl + F5


/*
 1. Compiler
   - Microsoft C/C++ Compiler : cl.exe
   - GNU C/C++ Compiler : gcc
   - LLVM Complier : clang

 2. Compile process
   a.c								-> compile -> a.o (a.obj)
   b.c ==> preprocess(전처리기) ==> -> compile -> b.o (b.obj) ==> Link ==> a.out(a.exe)
   c.c     : text 병합 / 치환		-> compile -> c.o (c.obj)

 3. main function
   > 프로그램 시작 함수
   1. int main(void)
      return 0; -> 프로그램의 성공적인 수행을 의미
	  return 0이 아닌 값 -> 프로그램이 성공적으로 수행되지 않았음을 의미합니다.

   2. int main() <==> int main(void)
      C언어에서는 차이가 있음

   3. void main() ==> 표준이 아님 (권장 X)

   4. int main(int argc, char ** argv)
      int main(int argc, char* argv[])

*/

int main(void)
{
	printf("Hello, world!!\n");
	printf("PI:%lf\n", PI);
	return 0;
}