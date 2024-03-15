#include <stdio.h>

void printInterval(int num, int end) {
    printf("%d ", num);

    if (num < end) {
        printInterval(num + 1, end);
    } else if (num > end) {
        printInterval(num - 1, end);
    }
}

int main() {
    int start, end;

    printf("Insira o começo do intervalo: ");
    scanf("%d", &start);

    printf("Insira o final do intervalo: ");
    scanf("%d", &end);
    
    printInterval(start, end);
}