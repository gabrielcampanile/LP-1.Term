#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 15

int main(void) {
  int vet[NUM] = {0};
  int contador;

  srand(time(NULL));

  for (int i = 0; i < NUM; i++) {
    vet[i] = rand() % 16;
  }
  for (int i = 0; i < NUM; i++) {
    if (vet[i] >= 0) {
      contador = 1;
      printf("num:%d | posições: %d ", vet[i], i);
      for (int j = i + 1; j < NUM; j++) {
        if (vet[j] == vet[i]) {
          contador++;
          printf("%d ", j);
          vet[j] = -1;
        }
      }
      printf("| apareceu %d vez(es)\n", contador);
    }
  }
  return 0;
}
