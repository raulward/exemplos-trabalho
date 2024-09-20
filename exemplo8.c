#include <stdbool.h>
#include <stdio.h>

int main() {

    int idade = 18;
    bool maiorDeIdade;

    maiorDeIdade = idade >= 18; // Recebe um valor true or false baseado na expressao logica

    printf("%s\n", maiorDeIdade ? "Permitida a entrada!" : "Entrada negada! Menores de idade nao sao permitidos");

    return 0;
}