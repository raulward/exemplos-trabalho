#include <time.h>
#include <stdio.h>

int main() {
    time_t tempo;
    time(&tempo);
    printf("Tempo atual: %s", ctime(&tempo));
    return 0;
}
