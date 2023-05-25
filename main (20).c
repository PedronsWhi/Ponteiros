#include <stdio.h>
#include <string.h>

void imprimirvetor(int *vetor, int tamanho) {
  int *ponteiro = vetor;
  int *fim = vetor + tamanho;
    
  while (ponteiro < fim) {  
    printf("%d\n", *ponteiro);
    ponteiro++;
  }
}

int main() {
  int vetor[5] = {1, 2, 3, 4, 5};
  imprimirvetor(vetor, 5);
  
  return 0;
}