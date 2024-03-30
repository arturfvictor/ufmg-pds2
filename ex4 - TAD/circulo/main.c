#include <stdio.h>
#include "circulo.h"

int main() {
    Circulo* c1 = circ_cria(0, 0, 5);
    Circulo* c2 = circ_cria(0, 0, 10);

    printf("Area do circulo 1: %f\n", circ_area(c1));
    printf("Raio do circulo 1: %f\n", circ_raio(c1));

    printf("Area do circulo 2: %f\n", circ_area(c2));
    printf("Raio do circulo 2: %f\n", circ_raio(c2));

    printf("C1 e C2 sao concentricos? %d\n", circ_concentricos(c1, c2));

    circ_libera(c1);
    circ_libera(c2);
}