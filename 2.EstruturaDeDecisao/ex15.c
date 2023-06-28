#include <stdio.h>

int main()
{
  int l1, l2, l3;

  do
  {
    printf("Informe os três lados do triângulo:\n");
    scanf("%i %i %i", &l1, &l2, &l3);
    if(l1<=0 || l2<=0 || l3<=0)
      printf("Valor inválido.\n");
  }while(l1<=0 || l2<=0 || l3<=0);

  if(l1+l2>l3 && l1+l3>l2 && l3+l2>l1)
  {
    if(l1==l2 && l2==l3)
      printf("Triângulo equilátero.\n");
    else
      if(l1!=l2 && l1!=l3 && l2!=l3)
        printf("Triângulo escaleno.\n");
      else
        printf("Triângulo isóceles.\n");
  }
  else
    printf("Não é um triângulo.\n");


  return 0;
}