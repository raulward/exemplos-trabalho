#include <math.h>
#include <stdio.h>

int main() {

    int num = 2, numAoQuadrado;

    numAoQuadrado = (int) pow(num, 2); // Funcao que retorna o numero (parametro 1) elevado ao outro numero (parametro 2)

    printf("O numero %d ao quadrado e: %d\n", num, numAoQuadrado);

    return 0;
}