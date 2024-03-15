#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Insira um número: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= num) {
        sum += i;
        i++;
    }

    printf("A soma dos números de 1 a %d é %d.\n", num, sum);
    return 0;
}