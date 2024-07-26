#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main(int argc, char const *argv[]) {
  char *name;
  name = malloc(sizeof(char)*SIZE);

  if(name == NULL){
    puts("Unable to allocate memory");
    return 1;
  } else {
    printf("Type name here: ");
    fgets(name, SIZE, stdin);

    printf("Hello, %s\n", name);
  }
  return 0;
}
