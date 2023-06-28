#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

int main() {
    int VET[SIZE];
    int i, j, count = 0;
    int repeated[SIZE] = {0};  // Vetor auxiliar para evitar contagem repetida

    // Leitura dos números
    printf("Digite %i números:\n", SIZE);
    srand(time(NULL));
    for (i = 0; i < SIZE; i++) {
        VET[i] = rand() % 101;
        printf("Número %d: %i\n", i + 1, VET[i]);
    }

    // Verificação de números repetidos
    printf("\nNúmeros repetidos:\n");
    for (i = 0; i < SIZE; i++) {
        if (!repeated[i]) {  // Verifica se o número já foi contabilizado
            for (j = i + 1; j < SIZE; j++) {
                if (VET[i] == VET[j]) {
                    if (!repeated[i]) {  // Verifica se o número já foi contabilizado
                        printf("%d nas posições ", VET[i]);
                        count++;
                        repeated[i] = 1;  // Marca o número como repetido
                    }
                    repeated[j] = 1;  // Marca o número como repetido
                    printf("%d ", j+1);
                }
            }
            if (repeated[i]) {
                printf("e %d\n", i+1);
            }
        }
    }

    // Contagem de números repetidos
    printf("\nTotal de números repetidos distintos: %d\n", count);

    return 0;
}
