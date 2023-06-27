#include <stdio.h>

int main() {
  float p1, p2, p3, p4, mf;

  printf("Digite sua primeira nota: ");
  scanf("%f", &p1);
  printf("Digite sua segunda nota: ");
  scanf("%f", &p2);
  printf("Digite sua terceira nota: ");
  scanf("%f", &p3);
  printf("Digite sua última nota: ");
  scanf("%f", &p4);

  mf = (p1 + p2 + p3 + p4)/4;

  printf("A sua média final será: %.2f.\n", mf);
  return 0;
}