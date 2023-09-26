#include <stdio.h>

int main ()
{
  int n, c, d, u;

  printf("Digite um número: ");
  scanf("%i", &n);

  while(n>=1000 || n<=0)
  {
    printf("Valor inválido.\nDigite novamente: ");
    scanf("%i", &n);
  }

  c = n/100;
  d = (n - c*100)/10;
  u = n - d*10 - c*100;

  printf("%i = ",n);
  if(c!=0)
    if(c==1)
      printf("%i centena, ",c);
    else
      printf("%i centenas, ",c);
  
  if(d!=0)
    if(d==1)
      printf("%i dezena e ", d);
    else
      printf("%i dezenas e ", d);
  
  if(u!=0)
    if(u==1)
      printf("%i unidade.\n", u);
    else
      printf("%i unidades.\n", u);
  
  return 0;
}