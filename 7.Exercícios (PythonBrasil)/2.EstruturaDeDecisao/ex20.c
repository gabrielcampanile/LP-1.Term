#include <stdio.h>

int main()
{
  float p1, p2, p3, mf;

  do
  {
    printf("Digite o valor da primeira nota: ");
    scanf("%f", &p1);
    if(p1<0 || p1>10)
      printf("Valor inválido.\n");
  }while(p1<0 || p1>10);

  printf("Digite o valor da segunda nota: ");
  scanf("%f", &p2);

  while(p2<0 || p2>10)
  {
    printf("Valor inválido. Digite novamente: ");
    scanf("%f", &p2);
  }

  do
  {  
    printf("Digite o valor da terceira nota: ");
    scanf("%f", &p3);
    if(p3<0 || p3>10)
      printf("Valor inválido.\n");
  }while(p3<0 || p3>10);

  mf = (p1+p2+p3)/3;

  if(mf==10)
    printf("Aprovado com distinção! Média = %.2f\n", mf);
  else if(mf>=7 && mf<10)
    printf("Aprovado! Média = %.2f\n", mf);
  else
    printf("Reprovado! Média = %.2f\n", mf);

  return 0;
}