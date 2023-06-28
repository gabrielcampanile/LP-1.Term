#include <stdio.h>
#include <math.h>

int main() {
  float r, a;

  printf("Informe o valor do raio: ");
  scanf("%f", &r);

  a = M_PI * pow(r,2);

  printf("A área do círculo de raio %.3f é %.3f.\n", r, a);
  return 0;
}