// Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 10
#define n 20

int main(){
  int a[m], b[m], c[n], i, j=0, k=0;

  srand(time(NULL));

  for(i=0; i<m; i++){
    a[i] = rand()%10;
    b[i] = rand()%10;
  }

  printf("A\tB\tC\n");
  for(i=0; i<n; i++){
    if(i%2==0){
      c[i] = a[j];
      j++;
    }
    else{
      c[i] = b[k];
      k++;
    }
    if(i<10)
      printf("%i\t%i\t%i\n", a[i], b[i], c[i]);
    else
      printf(" \t \t%i\n", c[i]);
  }

  return 0;
}