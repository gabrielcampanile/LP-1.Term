#include <stdio.h>
#include <string.h>

struct aluno{
  char nome[30];
  int ra;
  int freq;
  float notas[3];
  float media;
};

#define m 3

int main(){
  struct aluno turmaLP[m];

  for(int i=0; i<m; i++){
    printf("Aluno %i\n", i+1);
    printf("Nome: ");
    fgets(turmaLP[i].nome, sizeof(turmaLP[i].nome), stdin);
    turmaLP[i].nome[strlen(turmaLP[i].nome)-1] = '\0';
    printf("RA: ");
    scanf("%i", &turmaLP[i].ra);
    printf("Frequência: ");
    scanf("%i", &turmaLP[i].freq);
    turmaLP[i].media = 0;
    for(int j=0; j<3; j++){
      printf("Nota %i: ", j+1);
      scanf("%f", &turmaLP[i].notas[j]);
      turmaLP[i].media+=turmaLP[i].notas[j];
    }
    turmaLP[i].media/=3;
    printf("\n");
    getchar();
  }
  printf("---------------\n");
  printf("Turma LP\n");
  for(int i=0; i<m; i++){
    printf("\nAluno %i\n", i+1);
    printf("Nome: %s\n", turmaLP[i].nome);
    printf("RA: %i\n", turmaLP[i].ra);
    printf("Frequência: %i%\n", turmaLP[i].freq);
    if(turmaLP[i].freq<75)
      printf("Reprovado por falta.\n");
    else{
      for(int j=0; j<3; j++)
        printf("Nota %i: %.2f\n", j+1, turmaLP[i].notas[j]);
      printf("Média Final: %.2f\n", turmaLP[i].media);
      if(turmaLP[i].media>=7)
        printf("Aprovado.\n");
      else
        printf("Reprovado.\n");
    }
  }

  return 0;
}