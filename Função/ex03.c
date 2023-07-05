//Escreva uma função que calcule a potência de um número inteiro x^y usando multiplicações.

#include <stdio.h>

int pot(int, int);

int main(){
  int n1, n2, p;

  printf("n1: ");
  scanf("%i", &n1);

  printf("n2: ");
  scanf("%i", &n2);

  p = pot(n1, n2);

  printf("%i^%i = %i\n", n1, n2, p);

  return 0;
}

int pot(int x, int y){
  int p = 1;
  for(int i=0; i<y; i++)
    p*= x;
  return p;
}