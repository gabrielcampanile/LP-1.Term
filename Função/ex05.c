//Escreva uma função que receba um número inteiro e retorne 1 se esse for primo e 0 caso contrário.

#include <stdio.h>

int primo(int);

int main(){
  int n;

  printf("n: ");
  scanf("%i", &n);

  if(primo(n))
    printf("É primo\n");
  else
    printf("Não é primo\n");
}

int primo(int n){
  if(n==1 || n==0)
    return 0;
  for(int i=2; i<n; i++)
    if(n%i==0)
      return 0;
  return 1;
}