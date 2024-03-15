#include <stdio.h>

int main() {
    int vector[10], maior;

    for (int i = 0; i < 10; i++) {
        printf("Insira o número que ocupara a %d posição do vetor: ", i);
        scanf("%d", &vector[i]);
    }

    for (int cont = 0; cont < 10; cont++) {
        if (cont == 0) {
            maior = vector[cont];
        } else {
            if (vector[cont] > maior) {
                maior = vector[cont];
            }
        }
    }

    printf("O maior número contido no vetor é %d.\n", maior);
    return 0;
}