/* This may look like nonsense, but really is -*- mode: c -*- */
#include <stdio.h>
#include <stdlib.h>

/* The main thing that this program does. */
int main(){
  // Declarations
  double A[5] = {
    [0] = 9.0,
    [1] = 2.9,
    [4] = 3.E+25,
    [3] = .00007,
  };

  // Doing some work
  for (size_t i =0; i < 5; ++i){
    printf("element %zu is %g, \tits square is %g\n",
        i,
        A[i],
        A[i] * A[i]);
  }

  return 0;
}
