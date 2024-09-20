#include <stdio.h>
#include <ctype.h>

int main() {

    char normal[22] = "Quero ser maiusculo!", maisculo[22];

    for (int i = 0; i < 22; i++) maisculo[i] = toupper(normal[i]); // A funcao toupper() transforma todos os caracteres da string em maisculo

    printf("A frase %s em caixa alta e: %s\n", normal, maisculo); 

    return 0;

}