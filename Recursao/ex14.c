// Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem crescente.

#include <stdio.h>

void imprima(int);

int main(){
  int n;

  printf("Digite um número par: ");
  scanf("%i", &n);

  printf("Números pares de 0 até %i em ordem crescente:\n", n);
  imprima(n);
  printf("\n");

  return 0;
}

void imprima(int n){
  if(n<0)
    return;
  else if(n%2!=0)
    imprima(n-1);
  else{
    imprima(n-1);
    printf("%i\t", n);
  }
}