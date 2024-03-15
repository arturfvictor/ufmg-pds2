#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Insira um número: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    printf("A soma dos números de 1 a %d é %d.\n", num, sum);
    return 0;
}