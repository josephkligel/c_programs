#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main(int argc, char const *argv[]) {
  char *sto;
  sto = malloc(sizeof(char) * SIZE);
  if(sto == NULL){
    puts("Memory error");
    return(1);
  } else {
    printf("%d bytes of memory allocated at %p\n", SIZE, sto);
  }

  return 0;
}
