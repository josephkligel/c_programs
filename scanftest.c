#include <stdio.h>

int main(int argc, char const *argv[]) {
  char input[5];
  printf("Enter text here: ");
  scanf("%4s", input);
  printf("You typed: %s\n", input);

  return 0;
}
