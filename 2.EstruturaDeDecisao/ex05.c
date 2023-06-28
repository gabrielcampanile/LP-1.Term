#include <stdio.h>

int main()
{
  float p1, p2, mf;
  
  printf("Digite sua primeira nota: ");
  scanf("%f", &p1);
  while(p1<0 || p1>10)
  { 
    printf("Nota inválida.\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &p1);
  }
  
  printf("Digite sua segunda nota: ");
  scanf("%f", &p2);
  while(p2<0 || p2>10)
  {  
    printf("Nota inválida.\n");
    printf("Digite sua segunda nota: ");
    scanf("%f", &p2);
  }
  
  mf = (p1+p2)/2;

  if(mf>=0 && mf<=10)
  {
    if(mf==10)
      printf("Aprovado com distinção!\n");
    else
      if(mf>=7)
        printf("Aprovado :)\n");
      else
        printf("Reprovado :(\n");
  }
  else
    printf("Valor inválido.\n");

  return 0;
}