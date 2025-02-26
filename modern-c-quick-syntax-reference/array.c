#include <stdio.h>

int main(){
  /* int myArray[3] = {10, 25, 33}; */
  int myArray[3];
  myArray[0] = 10;
  myArray[1] = 25;
  myArray[2] = 33;

  for(int i = 0; i < 3; i++){
    printf("array element at %d is %d\n", i, myArray[i]);
  }

  printf("------------------------------\n");
  printf("array element at position 0 through pointer is %d\n", *myArray);
  printf("array element at position 1 through pointer is %d\n", *(myArray+1));
  printf("array element at position 2 through pointer is %d\n", *(myArray+2));

  int* ptr = myArray;
  printf("Address of myArray[0] = %d is %p\n", *ptr, ptr);
  ptr++;
  printf("Address of myArray[1] = %d is %p\n", *ptr, ptr);
  ptr++;
  printf("Address of myArray[2] = %d is %p\n", *ptr, ptr);

  printf("-----sizeof---------\n");
  int sizeArray[2] = {1, 2};
  int length = sizeof(sizeArray);
  printf("length of sizeArray is %d\n", length);

  return 0;
}
