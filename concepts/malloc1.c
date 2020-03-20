#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int *scores, x;

  scores = malloc(sizeof(int)*4);
  if(scores == NULL){
    puts("Unable to allocate memory");
    return 1;
  } else {
    *(scores+0) = 100;
    *(scores+1) = 97;
    *(scores+2) = 105;
    *(scores+3) = 110;

    for (size_t x = 0; x < 4; x++) {
      printf("Score %d: %d\n", x+1, *(scores+x));
    }
  }

  return 0;
}
