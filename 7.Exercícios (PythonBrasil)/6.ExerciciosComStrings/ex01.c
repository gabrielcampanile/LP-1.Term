//Tamanho de strings. Faça um programa que leia 2 strings e informe o conteúdo delas seguido do seu comprimento. Informe também se as duas strings possuem o mesmo comprimento e são iguais ou diferentes no conteúdo.

#include <stdio.h>
#include <string.h>

int main(){
  char A[30], B[30];
  int t1, t2, cmp;
  
  printf("A: ");
  //scanf("%[^\n]s", A);
  fgets(A, sizeof(A), stdin);
  fflush(stdin);
  A[strlen(A)-1] = '\0';
  t1 = strlen(A);
  
  printf("B: ");
  //scanf("%[^\n]s", B);
  fgets(B, sizeof(B), stdin);
  fflush(stdin);
  B[strlen(B)-1] = '\0';
  t2 = strlen(B);

  printf("Size of %s = %i caracteres.\n", A, t1);
  printf("Size of %s = %i caracteres.\n", A, t2);

  if(t1==t2)
    if(strcmp(A, B)==0)
      printf("A e B possuem o mesmo comprimento e são iguais.\n");
    else 
      printf("A e B possuem o mesmo comprimento, mas não são iguais.\n");
  else
    if(strcmp(A, B)==0)
      printf("A e B são iguais, mas não possuem o mesmo tamanho.\n");
    else
      printf("A e B não são iguais e não possuem o mesmo tamanho.\n");

  return 0;
}