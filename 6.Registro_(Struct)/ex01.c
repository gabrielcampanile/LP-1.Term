//Crie um tipo de registro que contenha os seguintes campos: Nome, RA, nota e frequencia;

#include <stdio.h>
#include <string.h>

struct aluno{
  char nome[30];
  int ra, freq;
  float nota[3], media;
};

int main(){
  struct aluno alunoLP;

  printf("Nome: ");
  fgets(alunoLP.nome, sizeof(alunoLP.nome), stdin);
  alunoLP.nome[strlen(alunoLP.nome)-1] = '\0';

  printf("RA: ");
  scanf("%i", &alunoLP.ra);
  
  printf("Frequência: ");
  scanf("%i", &alunoLP.freq);

  for(int i=0; i<3; i++){
    do{
      printf("Nota %i: ", i+1);
      scanf("%f", &alunoLP.nota[i]);
      if(alunoLP.nota[i]<0 || alunoLP.nota[i]>10)
        printf("Valor inválido. Digite novamente.\n");
    }while(alunoLP.nota[i]<0 || alunoLP.nota[i]>10);
      
    alunoLP.media+= alunoLP.nota[i];
  }
  alunoLP.media/= 3;
  printf("\n------------------------\n");
  printf("Informações do aluno:\n");
  printf("Nome: %s\n", alunoLP.nome);
  printf("RA: %i\n", alunoLP.ra);
  printf("Frequência: %i %\n", alunoLP.freq);
  if(alunoLP.freq<75){
    printf("Reprovado por falta.\n");
    return 0;
  }
  for(int i=0; i<3; i++)
    printf("Nota %i: %.1f\n", i+1, alunoLP.nota[i]);
  printf("Média: %.1f\n", alunoLP.media);
  if(alunoLP.media>=7)
    printf("Aprovado!\n");
  else
    printf("Reprovado :(\n");

  return 0;
}