#include <stdio.h>

int primo(int);
int nPrimos(int, int);

int main(){
  int n1, n2;

  printf("n1: ");
  scanf("%i", &n1);

  printf("n2: ");
  scanf("%i", &n2);

  printf("%i nº primos entre %i e %i.\n", nPrimos(n1, n2), n1, n2);
  
  /*if(primo(n1)) //verdadeiro = 1
    printf("É primo.\n");
  else         //falso = 0
    printf("Não é primo.\n");*/

  return 0;
}

int primo(int x){
  if(x==1)
    return 0;
  for(int i=2; i<x; i++)
    if(x%i==0)
      return 0;
  return 1;
}

int nPrimos(int x, int y){
  int n = 0;
  for(int i=x+1; i<y; i++)
    n+= primo(i);
  return n;
}