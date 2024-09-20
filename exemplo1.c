#include <stdlib.h>
#include <stdio.h>

int main() {

    int *vetor, tam = 10;

    vetor = (int*) malloc (tam * sizeof(int)); // Aloca 10 espaços sequenciais na memória com 4 bytes cada

    free(vetor); // Libera o espaço na memória alocado

    return 0;
}