#include <stdio.h>

/* inline int increment(int a) { */
int increment(int a) {
  return ++a;
}

int main(){
  int i;
  for(i = 0; i < 100;){
    i = increment(i);
  }
  return 0;
}
