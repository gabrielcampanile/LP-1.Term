#include <stdio.h>

int main(){
  float $, h, d, s;

  printf("Quanto você ganha por hora? ");
  scanf("%f", &$);
  printf("Quantas horas você trabalha por dia? ");
  scanf("%f", &h);
  printf("Quantos dias por mês? ");
  scanf("%f", &d);

  s = $*h*d;

  printf("Seu salário mensal será: %f.\n", s);
  return 0;
}