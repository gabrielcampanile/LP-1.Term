#include <stdio.h>

int main() {
  float p, e, m;

  printf("Quantos quilos de peixe foram pescados hoje: ");
  scanf("%f", &p);

  e = p - 50;
  m = e * 4.00;

  printf("O limite diário de pesca é de 50.0 kg.\nVocê excedeu em %.1f kg e deverá pagar uma multa de R$%.2f.\n", e, m);

  return 0;
}