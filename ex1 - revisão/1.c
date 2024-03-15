#include <stdio.h>

int main() {
    int num;

    printf("Insira um número: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("%d é divisivel por 5.\n", num);
    } else {
        printf("%d não é divisível por 5.\n", num);
    }

    if (num % 11 == 0) {
        printf("%d é divisivel por 11.\n", num);
    } else {
        printf("%d não é divisível por 11.\n", num);
    }  

    return 0;
}