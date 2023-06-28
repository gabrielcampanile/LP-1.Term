//Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.

#include <stdio.h>

#define m 3

int main(){
  float p[m][2];
  int i, j;

  for(i=0; i<m; i++){
    printf("Digite sua idade: ");
    scanf("%f", &p[i][1]);
    printf("Digite sua altura: ");
    scanf("%f", &p[i][0]);
  }

  for(i=0; i<m; i++)
    printf("Pessoa %i: %.2fm e %.0f anos\n", i+1, p[i][0], p[i][1]);

  return 0;
}