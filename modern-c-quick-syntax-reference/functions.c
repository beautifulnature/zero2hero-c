#include <stdio.h>
#include <stdarg.h>

void myFunction(void){
  printf("Hello World\n");
  return;
}

void sum(int a, int b){
  printf("sum is %d\n", a + b);
}

int sumi(int a, int b){
  int result = a + b;
  return result;
}

void sumFloat(int a, float b){
  printf("sum is %f\n", a + b);
}

void prinHello(void){
  printf("Hello World!\n");
}

int sumvar(int num, ...){
  va_list args; /* variable argument list */
  int sum = 0, i = 0;

  va_start(args, num); /* initialize argument list */

  for(i = 0; i < num; i++){
    sum += va_arg(args, int);
  }

  va_end(args); /* free memory */
  return sum;
}

void set(int i){
  i = 1;
}

void setadd(int* i){
  *i = 1;
}

void setxy(int a[]){
  a[0] = 1;
}

int byVal(int i){
  return i + 1;
}

int* byAdr(int* i){
  /* int* p; */
  /* *p = (*i)++; */ /* this won't work as local variables memory is released after execution of this function */
  (*i)++;
  return i;
}

inline int inc(int a){
  a = a + 10;
  return a;
}

int main(void){
  myFunction();
  sum(3, 4);
  sumFloat(3, 4);
  prinHello();
  prinHello("1");
  printf("sum via return: %d\n", sumi(3, 4));
  printf("sum of 10+20+30+40 = %d\n", sumvar(4, 10, 20, 30, 40));

  int x = 0;
  set(x);
  printf("%d\n", x);

  setadd(&x);
  printf("%d\n", x);

  int xy[] = { 0 };
  setxy(xy);
  printf("%d\n", xy[0]);

  int a = 10;
  printf("%d\n", byVal(a));

  int* p = byAdr(&a);
  printf("%d\n", *p);

  return 0;
}
