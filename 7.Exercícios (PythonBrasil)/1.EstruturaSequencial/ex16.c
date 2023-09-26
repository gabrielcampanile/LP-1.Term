#include <stdio.h>
#include <math.h>

int main() {
  float area, litros, lata;

  printf("Tamanho em metros quadrados da área a ser pintada: ");
  scanf("%f", &area);

  litros = (area/3);
  lata = ceil(litros/18);

  printf("Para pintar uma área de %.1f metros quadrados, será(ão) necessário(s) %.0f lata(s) de tinta.\nPreço total: R$%.2f\n", area, lata, lata*80);

  return 0;
}