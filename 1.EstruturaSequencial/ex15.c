#include <stdio.h>

int main(){
  float $, h, d, sb, ir, inss, sind, i, sl;

  printf("Quanto vale sua hora? ");
  scanf("%f", &$);
  printf("Quantas horas você trabalha por dia? ");
  scanf("%f", &h);
  printf("Quantos dias por mês? ");
  scanf("%f", &d);

  sb = $*h*d;

  ir = sb*0.11;
  inss = sb*0.08;
  sind = sb*0.05;

  i = ir+inss+sind;
  
  sl = sb-i;

  printf("Seu salário bruto vale R$%.2f e descontando R$%.2f de impostos, seu salário líquido será R$%.2f.\n", sb, i, sl);

  return 0;
}