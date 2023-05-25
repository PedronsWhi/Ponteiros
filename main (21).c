#include <stdio.h>

int main(void) {
  
  int vetor[5];
  int *p;

  for(int i = 0; i < 5; i++){
    printf("Informe o valor do vetor %d: ", i+1);
    scanf("%d", &vetor[i]);
    p = &vetor[i];
    *p = *p * 2;
  }

  for(int i = 0; i < 5; i++){
    p = &vetor[i];
    printf("\nO valor do vetor %d dobrado é: %d", i+1, *p);
  }

  return 0;
}