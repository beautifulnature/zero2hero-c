// Arrays exercise
//
// Objective
// In this exercise, we'll learn about arrays in C!
// Arrays are an important part of C that allow you to organise items of the same type together in a logical manner.
// In C, an array is a area of contiguous memory that contains elements that are each individually the same size.
//
// Task
// In this exercise, you'll be creating an array.
// Create an array of 10 intergers.
// Then, set the 4th element of the array to the number '2'.
// Then print that element.


#include <stdio.h>

int main(){
  int ints[10];
  ints[3] = 2;
  printf("%d\n", ints[3]);
  return 0;
}
