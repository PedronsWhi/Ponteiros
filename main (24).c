#include <stdio.h>

int calcularSomaDobro(int *a, int *b) {
    *a = (*a) * 2;
    *b = (*b) * 2;
    return (*a) + (*b);
}

int main() {
    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    int resultado = calcularSomaDobro(&valor1, &valor2);

    printf("O resultado da soma do dobro dos valores é: %d\n", resultado);
    printf("Valor atual de A: %d\n", valor1);
    printf("Valor atual de B: %d\n", valor2);

    return 0;
}