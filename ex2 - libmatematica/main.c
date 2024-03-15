#include <stdio.h>
#include "libmatematica.h"

int main() {
    float rads;
    
    printf("Insira um valor em radianos: ");
    scanf("%f", &rads);

    printf("Sin: %f\n", calcular_seno(rads));
    printf("Cos: %f\n", calcular_cosseno(rads));
    printf("Tan: %f\n", calcular_tangente(rads));

    return 0;
}