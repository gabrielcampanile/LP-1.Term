// Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

#include <stdio.h>

void imprima(int);

int main(){
  int n;

  printf("Digite um número: ");
  scanf("%i", &n);

  printf("Ordem crescente de 0 até %i:\n", n);
  imprima(n);
  printf("\n");

  return 0;
}

void imprima(int n){
  if(n<0)
    return;
  else{
    imprima(n-1);
    printf("%i\t", n);
  }
}