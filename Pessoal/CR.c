// Calculadora de CR

#include <stdio.h>
#include <string.h>

struct subject {
  char materia[20];
  int credito;
  float media;
};

#define mat 6

int main() {
  struct subject first_semester[mat];
  float CR = 0;
  int div = 0;

  for (int i = 0; i < mat; i++) {
    printf("%iº UC:\n", i + 1);

    printf("Matéria: ");
    fgets(first_semester[i].materia, sizeof(first_semester[i].materia), stdin);
    first_semester[i].materia[strlen(first_semester[i].materia) - 1] = '\0';

    printf("Crédito: ");
    scanf("%i", &first_semester[i].credito);

    printf("Média: ");
    scanf("%f", &first_semester[i].media);

    CR += first_semester[i].credito * first_semester[i].media;
    div += first_semester[i].credito;

    printf("\n");
    getchar();
  }

  CR /= div;

  printf("Seu CR até o momento é: %.3f\n", CR);

  return 0;
}