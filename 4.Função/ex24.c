// Escreva uma função que receba dois números inteiros n e r e retorne o número de combinações de n objetos tomados r de cada vez. O número de combinações é dado pela fórmula:
// c = n! / r! ∗ (n − r)!

#include <stdio.h>

int fat(int);
int comb(int, int);

int main(){
  int n, r, c;

  printf("n: ");
  scanf("%i", &n);

  printf("r: ");
  scanf("%i", &r);

  c = comb(n, r);

  printf("Todas as combinações possíveis de %i elementos tomados de %i em %i:\nC = %i\n", n, r, r, c);

  return 0;
}

int fat(int x){
  int f = 1;
  for(int i=2; i<=x; i++)
    f*= i;
  return f;
}

int comb(int n, int r){
  int c = 0;
  c = fat(n) / (fat(r)*fat(n-r));
  return c;
}