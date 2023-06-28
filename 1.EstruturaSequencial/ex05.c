#include <stdio.h>

int main() {
  float m, dm, cm, mm;

  printf("Olá, bem-vindo ao conversor de medidas!\nDigite um valor em metros:");
  scanf("%f", &m);

  dm = m*10;
  cm = m*100;
  mm = m*1000;

  printf("%.1f metros é igual a %.1f decâmetros, %.1f centímetros e %.1f milímetros.\n", m, dm, cm, mm);
  return 0;
}