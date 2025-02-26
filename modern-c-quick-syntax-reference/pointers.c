#include <stdio.h>

int main(){
  int* p;
  int *q;

  int i = 10;
  p = &i;

  printf("address of i is %p\n", &i);
  printf("address of p is %p\n", p);
  printf("value at p is %d\n", *p);

  *p = 20;
  printf("value of i changed through p to 20 check %d\n", *p);

  int* p2 = p;
  printf("address of p as value in p2 is %p\n", p2);

  *p2 = 30;

  printf("---------------\n");
  printf("i = %d at address %p\n", i, &i);
  printf("p = %d at address %p\n", *p, p);
  printf("p2 = %d at address %p\n", *p2, p2);

  printf("----pointer pointing to a pointer ----\n");
  int** r = &p; /* pointer r pointing to int* p */

  printf("i = %d at address %p\n", i, &i);
  printf("p = %d at address %p\n", *p, p);
  printf("address of p: %p through r\n", r);
  printf("address of i: %p through *r\n", *r);
  printf("value of i: %d through **r\n", **r);

  int* nullp = 0; /* null pointer */
  int* nullP = NULL; /* null pointer */

  return 0;
}
