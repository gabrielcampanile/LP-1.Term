#include <stdio.h>
#include <math.h>

int main()
{
  float area, litros, lata, galao, vl, vg;

  printf("Digite a área em metros quadrados a ser pintada: ");
  scanf("%f", &area);

  litros = area/6;
  lata = ceil(litros/18);
  galao = ceil(litros/3.6);
  vl = lata*80;
  vg = galao*25;

  printf("Você precisará de %.1f litros de tinta para pintar uma área de %.1f metros quadrados.\n", litros, area);
  printf("Você poderá comprar %0.f lata(s) de tinta por R$%.2f ou %.0f galões por R$%.2f.\n", lata, vl, galao, vg);
  
  return 0;
}