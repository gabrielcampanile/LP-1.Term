#include <stdio.h>
#include <math.h>

int main() {
  float l, a, a1;

  printf("Informe o valor de um dos lados do quadrado ");
  scanf("%f", &l);

  a = pow(l,2);
  a1 = 2 * a;

  printf("A área do quadrado de lado %.1f é %.1f e o dobro de sua área vale %.1f\n", l, a, a1);
  return 0;
}