//Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor a média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 3
#define n 3

int main(){
  float alunos[m], notas[n], mf[m], soma;
  int i, j, cont = 0;

  for(i=0; i<m; i++){
    soma = 0;
    printf("Digite as notas do %iº aluno:\n", i+1);
    for(j=0; j<n; j++){
      do{
        printf("P%i: ", j+1);
        scanf("%f", &notas[j]);
        if(notas[j]<0 || notas[j]>10)
          printf("Valor inválido.\n");
      }while(notas[j]<0 || notas[j]>10);
        soma+= notas[j];
    }
    mf[i] = soma/3;
    printf("Média final: %.2f\n", mf[i]);
    if(mf[i]>=7)
      cont++;
  }

  if(cont>1)
    printf("%i alunos acima da média.\n", cont);
  else if(cont==1)
    printf("1 aluno acima da média.\n");
  else
    printf("Nenhum aluno acima da média.\n");
  return 0;
}