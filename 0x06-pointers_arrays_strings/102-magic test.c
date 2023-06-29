#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int  *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  printf("address of a is %p\n" ,a);
  printf("address of n0 is %p\n" ,&n);
  printf("address of n1 is %p\n" ,&n+1);
  printf("address of n2 is %p\n" ,&n+2);
  printf("address of n3 is %p\n" ,&n+3);
  printf("address of n4 is %p\n" ,&n+4);
  printf("address of n5 is %p\n" ,&n+5);
  
  printf("address of p is %p\n" ,&p);
  printf("address of p1 is %p\n" ,p+1);
  printf("address of p2 is %p\n" ,p+2);
  printf("address of p3 is %p\n" ,p+3);
  printf("address of p4 is %p\n" ,p+4);
  printf("address of p5 is %p\n" ,p+5);

  *(p+5)=98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}