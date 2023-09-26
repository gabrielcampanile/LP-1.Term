// Crie um tipo de registro que contenha os seguintes campos: Nome, RA, nota e frequencia;

#include <stdio.h>
#include <string.h>

#define m 3

struct aluno{
  char nome[30];
  int ra;
  int freq;
  float nota[3];
  float media;
};

void imprimeAlunos(struct aluno[]);

int main(){
  struct aluno alunoLP[m];

  for(int i=0; i<m; i++){
    printf("Aluno %i\n", i+1);
    printf("Nome: ");
    fgets(alunoLP[i].nome, sizeof(alunoLP[i].nome), stdin);
    alunoLP[i].nome[strlen(alunoLP[i].nome)-1] = '\0';
    printf("RA: ");
    scanf("%i", &alunoLP[i].ra);
    printf("Frequência: ");
    scanf("%i", &alunoLP[i].freq);
    for(int j=0; j<3; j++){
      printf("N%i: ", j+1);
      scanf("%f", &alunoLP[i].nota[j]);
      alunoLP[i].media+=alunoLP[i].nota[j];
    }
    alunoLP[i].media/=3;
    printf("\n");
    getchar();
  }

  printf("\nTurma LP:\n");
  imprimeAlunos(alunoLP);

  return 0;
}

void imprimeAlunos(struct aluno turma[]){
  for(int i=0; i<m; i++){
    printf("Aluno %i\n", i+1);
    printf("%s\n", turma[i].nome);
    printf("RA: %i\n", turma[i].ra);
    printf("Frequência: %i %\n", turma[i].freq);
    if(turma[i].freq<75)
      printf("Reprovado por falta.\n");
    else{
      for(int j=0; j<3; j++)
        printf("N%i: %.2f\n", j+1, turma[i].nota[j]);
      printf("Média: %.2f\n", turma[i].media);
      if(turma[i].media<7)
        printf("Reprovado.\n");
      else
        printf("Aprovado.\n");
    }
    printf("\n");
  }
}