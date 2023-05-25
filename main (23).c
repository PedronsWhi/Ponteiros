#include <stdio.h>
#include <string.h>

int Soma(int *a, int *b) {
  int soma;
  soma = *a + *b;
  *a = soma;
  return 0;
}

int main() {
  
  int n1, n2;
  printf("Digite um valor inteiro (A): ");
  scanf("%d", &n1);

  printf("Digite outro valor inteiro (B): ");
  scanf("%d", &n2);

  int resultado = Soma(&n1, &n2);

  printf("\nValor atual de A: %d\n", n1);
  printf("Valor atual de B: %d\n", n2);

  return 0;
}