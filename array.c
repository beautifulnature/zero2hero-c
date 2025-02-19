#include <stdio.h>

#define MAX_IDS 32

int main(){

  // int ids[] = {1, 2, 3};
  int ids[MAX_IDS] = {0, 1, 2};

  //  printf("%d\n", ids[0]);
  //  printf("%d\n", ids[1]);
  //  printf("%d\n", ids[2]);

  ids[3] = 0x41;

  //  printf("%d\n", ids[3]);

  char mystr[] = {'h', 'e', 'l', 'l', 'o'};
  char *myotherstr = "hello";

  //  printf("%s\n", mystr);
  strcpy(dest, src);
  strncpy(dest, src, n);

  return 0;
}
