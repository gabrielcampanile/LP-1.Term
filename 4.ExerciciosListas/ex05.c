// Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Armazene os números pares no vetor PAR e os números IMPARES no vetor impar. Imprima os três vetores.

#include <stdio.h>

#define M 10

int main(){
  int i, n[M], P[M], I[M];
  int contP = 0, contI = 0;

  printf("Digite um número inteiro:\n");
  
  for(i=0; i<M; i++)
  {
    printf("%iºn: ", i+1);
    scanf("%i", &n[i]);

    if(n[i]%2==0){
      P[contP] = n[i];
      contP++;
    }
    else{
      I[contI] = n[i];
      contI++;
    }
  }
  printf("\n%i números:\n", M);
  for(i=0; i<M; i++)
    printf("n[%i] = %i\n", i+1, n[i]);

  printf("\n%i pares:\n", contP);
  for(i=0; i<contP; i++)
    printf("Par[%i] = %i\n", i+1, P[i]);
  
  printf("\n%i ímpares:\n", contI);
  for(i=0; i<contI; i++)
    printf("Impar[%i] = %i\n", i+1, I[i]);

  return 0;
}