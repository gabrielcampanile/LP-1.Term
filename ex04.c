//Escreva uma função que receba um número inteiro e retorne o inverso desse número. Por exemplo, se a função receber 123456 deve retornar 654321.

#include <stdio.h>

int inverso(int);

int main(){
  int n, i;

  printf("Número: ");
  scanf("%i", &n);

  i = inverso(n);

  printf("Inverso: %i\n", i);

  return 0;
}

int inverso(int n){
  int k=1, j = 1, inv = 0, aux;
  while(n/(k*10)!=0){
    k*=10;
  }
  for(NULL; k>0; k/=10, j*=10){
    aux = n / k;
    n-= aux*k;
    inv+= aux*j;
  }
  return inv;
}