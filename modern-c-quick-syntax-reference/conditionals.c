#include <stdio.h>

int main(){

  int x;
  scanf("%d", &x);

  if (x < 1){
    printf("x < 1\n");
  } else if (x > 1){
    printf("x > 1\n");
  } else {
    printf("x = 1\n");
  }

  int done = 0;

  if(!done){
    printf("do today's task\n");
  }else if(done){
    printf("do tomorrow task\n");
  }else {
    printf("do the planning for futre\n");
  }

  printf("-----switch-----\n");
  switch(x){
    case 0:
      printf("x is 0\n");
      break;
    case 1:
      printf("x is 1\n");
      break;
    default:
      printf("x is not 0 or 1\n");
      break;
  }

  x = (x < 1) ? 0 : 1;
  printf("x value is %d via ternary expression (x < 1) ? 0 : 1", x);

  return 0;
}
