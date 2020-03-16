#include <stdio.h>

int main(int argc, char const *argv[]) {
  char names[4][5] = {
    "Ant",
    "Bee",
    "Cat",
    "Duck"
  };
  int x;

  names[2][2] = 'r';
  
  for (size_t x = 0; x < 4; x++) {
    printf("%s\n", names[x]);
  }
  return 0;
}
