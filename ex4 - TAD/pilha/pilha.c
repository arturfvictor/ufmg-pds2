#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* anterior;
} No;

typedef struct Pilha {
    No* topo;
} Pilha;

Pilha* pilha_cria() {
    return malloc(sizeof (Pilha));
}

int pilha_pop(Pilha* p) {
    int valor = p->topo->valor;
    p->topo = p->topo->anterior;
    return valor;
}

void pilha_push(Pilha* p, int x) {
    No* no = malloc(sizeof(No));
    no->valor = x;
    no-> anterior = p->topo;

    p->topo = no;
}

int pilha_vazia(Pilha* p) {
    if (p->topo == NULL) {
        return 1;
    }

    return 0;
}

void pilha_libera(Pilha* p) {
    while (pilha_vazia(p) == 0) {
        No* anterior = p->topo->anterior;
        free(p->topo);
        p->topo = anterior;
    }
}