#include <string.h>
#include <stdio.h>

int main() {

    char ola[20] = "Ola ";
    char mundo[] = "Mundo";

    printf("%s\n", strcat(ola, mundo)); // Concatena as strings "ola" e "mundo"

    return 0;
}