#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha* p = pilha_cria();

    pilha_push(p, 3);
    pilha_push(p, 7);
    pilha_push(p, 8);

    printf("%d", pilha_pop(p));
    printf("%d", pilha_pop(p));
    printf("%d", pilha_pop(p));

    pilha_push(p, 3);
    pilha_push(p, 7);

    pilha_libera(p);
}