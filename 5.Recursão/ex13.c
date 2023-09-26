// Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

#include <stdio.h>

void imprima(int);

int main(){
  int n;

  printf("Digite um número: ");
  scanf("%i", &n);

  printf("Ordem decrescente de %i até 0:\n", n);
  imprima(n);
  printf("\n");
  
  return 0;
}

void imprima(int n){
  if(n<0)
    return;
  else{
    printf("%i\t", n);
    imprima(n-1);
  }
}