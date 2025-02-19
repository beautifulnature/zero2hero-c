//String Exercise
//Objective
//In this exercise, we'll learn about two of the syntax for strings in C.
//In the C programming language, we can use various form of syntax to decide where in the program our string memory is allotcated.
//
//Task
//Create a copy of the string "hehe" using hex syntax, and ensure that they are the same strings!
//
//To do this, we have a few options.
//We can use the char *<name> = "<string>"; syntax, which puts the value in the `.rodata` section of the ELF.
//We can also use the char <name>[] = "string"; which puts the value to the stack.
//Also, we can use char <name>[] = {hexvalues}; to do this.

#include <stdio.h>
#include <string.h>

int main(){

  // this is a String
  char *str = "hehe";

  // create the same string
  // as a character array
  char otherstr[] = {'h', 'e', 'h', 'e'};

  if(!strcmp(str, otherstr)){
    printf("Yay!\n");
  } else {
    printf("Nay!\n");
  }

  return 0;
}
