#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x, y, raio;
} Circulo;

/* Cria um circulo com centro (x,y) e raio r */
Circulo* circ_cria(float x, float y, float r) {
    Circulo* c = malloc(sizeof (Circulo));
    c->raio = r;
    c->x = x;
    c->y = y;

    return c;
}

/* Libera a memoria de um Circulo */
void circ_libera(Circulo* c) {
    free(c);
}

/* Calcula a area de um circulo */
float circ_area(Circulo* c) {
    float raio = c->raio;
    return 3.1415 * raio * raio;
}

/* Verifica se dois circulos tem o mesmo centro */
int circ_concentricos(Circulo* c1, Circulo* c2){
    if (c1->x == c2->x) {
        if (c1->y == c2->y) {
            return 1;
        }
    }
    return 0;
}

/* Obtem o raio de um circulo */
float circ_raio(Circulo* c) {
    return c->raio;
}