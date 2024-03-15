#include <stdio.h>

void trocaNumeros(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int num1, num2;

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    trocaNumeros(&num1, &num2);
    
    printf("1º: %d\n", num1);
    printf("2º: %d\n", num2);

    return 0;
}