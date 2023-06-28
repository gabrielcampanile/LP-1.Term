//Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a média da turma e o resultado da contagem.

#include <stdio.h>
#define v 20

int main(){
  float n[v], m = 0;
  int i, a = 0;
  
  for(i=0; i<v; i++){
    do{
      printf("Nota do %iº aluno: ", i+1);
      scanf("%f", &n[i]);
      if(n[i]<0 || n[i]>10)
        printf("Valor inválido.\n");
    }while(n[i]<0 || n[i]>10);
    m+= n[i];
  }

  m = m/v;

  for(i=0; i<v; i++)
    if(n[i]>m)
      a++;

  printf("Média da turma = %.2f\n", m);
  printf("%i alunos acima da média.\n", a);

  return 0;
}
  