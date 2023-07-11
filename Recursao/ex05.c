// Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.

#include <stdio.h>

int soma(int);

int main(){
  int n;

  printf("Digite um número: ");
  scanf("%i", &n);

  printf("O somatório dos números de 1 a %i = %i\n", n, soma(n));

  return 0;
}

int soma(int n){
  if(n==1)
    return 1;
  return n + soma(n-1);
}