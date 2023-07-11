// Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem decrescente.

#include <stdio.h>

void imprima(int);

int main(){
  int n;

  printf("Digite um número ímpar: ");
  scanf("%i", &n);

  printf("Números ímpares de %i até 1 em ordem decrescente:\n");
  imprima(n);
  printf("\n");

  return 0;
}

void imprima(int n){
  if(n<1)
    return;
  else if(n%2==0)
    imprima(n-1);
  else{
    printf("%i\t", n);
    imprima(n-1);
  }
}