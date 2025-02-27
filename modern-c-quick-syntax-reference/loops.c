#include <stdio.h>

int main(){

  printf("-----while loop-----\n");
  int i = 0;

  while(i < 10){
    printf("%d\n", i);
    i++;
  }

  printf("-----do-while loop-----\n");
  int j = 0;

  do{
    printf("%d\n", j);
    j++;
  } while(j < 10);

  printf("-----for loop-variation-1-----\n");
  int k = 0;

  for(; k < 10; k++){
    printf("%d\t", k);
  }

  printf("\n%d\n", k);

  printf("-----for loop-variation-2-----\n");
  int n;

  for(n = 0; n < 10; n++){
    printf("%d\t", n);
  }

  printf("\n%d\n", n);

  printf("-----for loop-variation-3-----\n");
  for(int m = 0; m < 10; m++){
    printf("%d\t", m);
  }

  printf("-----for loop-variation-4-----\n");
  for(int n = 0, p = 0; n < 10; n++, p++){
    printf("%d\n", n+p);
  }

  printf("-----break & continue-----\n");
  int z;
  for(z = 0; z < 10; z++){
    if(z == 2){
      continue;
    }else if(z == 5){
      break;
    }
    printf("%d\n", z);
  }

  printf("-----goto statement-----\n");
  int q;
  scanf("%d", &q);

  if(q == 5){
    goto mylable;
  }
  printf("q is %d\n", q);

  mylable:
    printf("hello world");

  return 0;
}
