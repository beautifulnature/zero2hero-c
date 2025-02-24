#include <stdio.h>

int main(){
  float myFloat = 12345.678;
  /* printf("%f\n", myFloat); */
  /* printf("%.2f\n", myFloat); */

  double fDec = 1.23;
  double fExp = 3e2;
  double fHex = 0xAp2;

  printf("%f\t%f\t%f\n", fDec, fExp, fHex);

  float testFloat = 1.234567891234564444444444444444;
  printf("%f\n", testFloat);

  return 0;
}
