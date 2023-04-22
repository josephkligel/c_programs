#include <stdio.h>

int main(int argc, char const *argv[]) {
  char str[100] = "Hello, how are you? I hope your day has been well.";
  char *pt; //Declares pointer

  pt = &str; //Assigns the variable's value's memory address to the pointer

  printf("The address of 'str' is %p\n", str);
  printf("The address of the 'pt' pointer is %p\n", pt);//Because of no '*' prefix, the pt gives the address.

  printf("The value assinged to 'str': \n\t%s\n", str);
  printf("The value assigned to '*pt': \n\t%s\n", *pt); //Should print out the value of the string it is assinged to and not a memory address.

  return 0;
}
