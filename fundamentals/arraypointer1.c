#include <stdio.h>

int main(int argc, char const *argv[]) {
  char *presidents[5] = {
    "Washington",
    "Adams",
    "Jefferson",
    "Madison",
    "Monroe"
  };
  int x;
  char *ptr;
  for (size_t x = 0; x < 5; x++) {
    ptr = *(presidents+x);
    while(*ptr){
      putchar(*ptr);
      ptr++;
    }
    putchar('\n');
  }

  return 0;
}
