// Escreva uma função que receba um número inteiro positivo x e retorne a soma de todos os inteiros positivos entre 1 e x.

#include <stdio.h>

int soma(int);

int main(){
  int n, s;

  printf("n: ");
  scanf("%i", &n);

  s = soma(n);

  printf("A soma de todos os inteiros positivos entre 1 e %i = %i\n", n, s);

  return 0;
}

int soma(int x){
  int s = 0;
  for(int i=1; i<=x; i++){
    s+=i;
  }
  return s;
}