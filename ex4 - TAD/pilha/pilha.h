typedef struct Pilha Pilha;

Pilha* pilha_cria();

int pilha_pop(Pilha* p);

void pilha_push(Pilha* p, int x);

int pilha_vazia(Pilha* p);

void pilha_libera(Pilha* p);