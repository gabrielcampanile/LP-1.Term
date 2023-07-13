//Escreva uma função que dados dois números inteiros x e y, com x < y, determine quantos números primos existem entre esses.

#include <stdio.h>

int primo(int);
int primos(int, int);
void siblings(int, int);

int main(){
  int n1, n2;

  printf("n1: ");
  scanf("%i", &n1);

  do{
    printf("n2: ");
    scanf("%i", &n2);
    if(n2<n1)
      printf("Valor inválido.\n");
  }while(n2<n1);

  printf("Existem %i números primos entre %i e %i\n", primos(n1, n2), n1, n2);
  printf("Esse números são:\t");
  siblings(n1, n2);
  printf("\n");

  return 0;
}

int primo(int n){
  if(n==0 || n==1)
    return 0;
  for(int i=2; i<n; i++)
    if(n%i==0)
      return 0;
  return 1;
}

int primos(int x, int y){
  int cont = 0;
  for(int i=x; i<=y; i++)
    if(primo(i))
      cont++;
  return cont;
}

void siblings(int x, int y){
  for(int i=x; i<=y; i++)
    if(primo(i))
      printf("%i\t", i);
}