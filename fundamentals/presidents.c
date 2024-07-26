#include <stdio.h>

int main(int argc, char const *argv[]) {
  struct person{
    char name[32];
    int age;
  };
  struct person president = {
    "George Washing",
    67
  };
  printf("%s was %d years old\n", president.name, president.age);
  
  return 0;
}
