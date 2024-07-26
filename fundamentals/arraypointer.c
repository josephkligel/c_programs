#include <stdio.h>

int main(int argc, char const *argv[]) {
  char *months[12] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
  };
  int x;
  for (size_t x = 0; x < 12; x++) {
    printf("%p\n", months[x]);
  }

  return 0;
}
