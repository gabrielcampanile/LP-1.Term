#include <stdio.h>

int main() {
  float h, w;

  printf("Digite sua altura: ");
  scanf("%f", &h);

  w = (72.7*h)-58;

  printf("O peso ideal à sua altura seria: %f kg.\n", w);

  return 0;
}
