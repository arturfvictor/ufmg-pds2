// Alunos:
// * Artur Filardi Victoriano
// * Bernardo Soares Diniz Lara
// * Gabriel Wedson Mendonça de Souza Veloso
// * Gilberto de Carvalho França Pereira
// * Luigi Pinesi Tavares Jacob

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int valor;
    struct No* anterior;
} No;

typedef struct {
    No* topo;
} Pilha;

void push(Pilha* p, int x) {
    No* no = malloc(sizeof(No));
    no->valor = x;
    no->anterior = p->topo;
    p->topo = no;
}

int pop(Pilha* p) {
    No* topo_velho = p->topo;
    int temp = p->topo->valor;
    
    p->topo = p->topo->anterior;
    
    free(topo_velho);
    return temp;
}

int main() {
    Pilha* pilha = malloc(sizeof(Pilha));
    push(pilha, 10);
    push(pilha, 11);
    push(pilha, 12);
    push(pilha, 13);

    printf("%d\n", pop(pilha));
    printf("%d\n", pop(pilha));
    printf("%d\n", pop(pilha));
    printf("%d\n", pop(pilha));
}