#include <stdio.h>
#include <string.h>

int main(){
  char* ptr = "Hi";
  /* printf("%s\n", ptr); */

  char line = '\n'; /* escape cod */
  /* printf("hi%c", line); */

  line = '\012'; /* octal notation */
  /* printf("how are you?%c", line); */

  line = '\x0A'; /* hexadecimal notation */
  /* printf("i am fine.%c", line); */

  char s1[11] = "Hello";
  char s2[11] = "World";

  strcat(s1, s2); /* append s2 to s1 */
  /* printf("%s\n", s1); */

  strcpy(s2, s1); /* copy s2 to s1 */
  /* printf("%s\n", s2); */

  int result;

  result = strcmp(s1, s2);
  /* printf("%d\n", result); */

  /* printf("%ld\n", strlen(s1)); */
  /* printf("%ld\n", sizeof(s1)); */

  char a[] = "Hello"; /* sizeof(a) = 6 */
  char b[] = "World"; /* sizeof(b) = 6 */
  char c[sizeof(a) + sizeof(b) - 1];

  printf("%s\n", strcpy(c, a));
  printf("%s\n", strcat(c, b));

  return 0;
}
