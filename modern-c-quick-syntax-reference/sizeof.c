#include <stdio.h>

int main(){
  size_t s = sizeof(int);
  /* printf("%zu\n", s); */
  /* printf("%Iu\n", s); */

  int myDec = 50; /* decimal notation */
  int myOct = 062; /* octal notation (0) */
  int myHex = 0x32; /*hexadecimal notation (0x) */
  printf("%d\n", myDec);
  printf("%d\n", myOct);
  printf("%d\n", myHex);

  return 0;
}
