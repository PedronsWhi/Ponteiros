#include <stdio.h>
#include <string.h>

int main() {
  
  float vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  float *p;

  printf("Endereços do vetor:\n");

  for(int i = 0; i < 10; i++) {
    p = &vetor[i];
    printf("Posição %d: %d\n", i+1, p);
  }

  return 0;
}