#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(){
  int x = 3 + 2;
  /* printf("3 + 2 = %d\n", x); */
  x = 3 - 2;
  /* printf("3 - 2 = %d\n", x); */
  x = 3 * 2;
  /* printf("3 * 2 = %d\n", x); */
  x = 3 / 2;
  /* printf("3 / 2 = %d\n", x); */
  float y = 3 / (float) 2;
  /* printf("3 / (float) 2 = %f\n", y); */
  y = 3.0 / 2;
  /* printf("3.0 / 2 = %f\n", y); */
  x = 3 % 2;
  /* printf("3 %% 2 = %d\n", x); */

  int a, b, c;
  a = 5;
  b = a++;
  /* printf("a=%d\tb=%d\n", a, b); */

  c = ++a;
  /* printf("a=%d\tc=%d\n", a, c); */

  x = (2 == 3);
  /* printf("(2 == 3) is %d\n", x); */

  x = (2 != 3);
  /* printf("(2 != 3) is %d\n", x); */

  x = (2 > 3);
  /* printf("(2 > 3) is %d\n", x); */

  x = (2 < 3);
  /* printf("(2 < 3) is %d\n", x); */

  x = (2 >= 3);
  /* printf("(2 >= 3) is %d\n", x); */

  x = (2 <= 3);
  /* printf("(2 <= 3) is %d\n", x); */

  x = (1 && 0);
  /* printf("(1 && 0) is %d\n", x); */

  x = (1 || 0);
  /* printf("(1 || 0) is %d\n", x); */

  x = !(1);
  /* printf("!(1) is %d\n", x); */

  bool d = (true && false);
  /* printf("(true && false) is %d\n", d); */

  d = (true || false);
  /* printf("(true || false) is %d\n", d); */

  d = !true;
  /* printf("!true is %d\n", d); */

  x = 5 & 4;
  /* printf("5 & 4 is %d\n", x); */

  x = 5 | 4;
  /* printf("5 | 4 is %d\n", x); */

  x = 5 ^ 4;
  /* printf("5 ^ 4 is %d\n", x); */

  x = 4 << 1;
  /* printf("4 << 1 is %d\n", x); */

  x = 4 >> 1;
  /* printf("4 >> 1 is %d\n", x); */

  x = ~4;
  /* printf("~4 is %d\n", x); */

  x = 4 + 3 * 2;
  printf("4 + 3 * 2 = %d\n", x);

  return 0;
}
