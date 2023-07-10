//Faca um programa que permita inserir remover, visualizar e buscar elementos do registro pelo RA.

#include <stdio.h>
#include <string.h>

#define max 5

struct aluno{
  char nome[40];
  int ra;
  int freq;
  float nota[3];
  float media;
};

void imprimeMenu();
void consultar(struct aluno[], int);
void listar(struct aluno[], int);
void inserir(struct aluno[], int, int);
void remover(struct aluno[], int, int, int);
int buscar(struct aluno[], int, int);

int main(){
  struct aluno turmaLP[max];
  int opcao=0, n=0, p=0;
  int ra;

  while(opcao!=5){
    imprimeMenu();
    scanf("%i", &opcao);
    switch(opcao){
      case 1:
        //inserir aluno
        if(n==max)  
          printf("\nTurma cheia.\n");
        else{
          printf("\n1 - Inserir aluno\n");
          printf("Buscar RA: ");
          scanf("%i", &ra);
          if(buscar(turmaLP, n, ra)==-1){
            printf("\nAluno não matrículado\n");
            printf("Efetuar matrícula\n");
            inserir(turmaLP, n, ra);
            n++;
          }
          else{
            printf("\nAluno já matriculado.\n");
          }
        }
        break;
      case 2:
        //remover aluno
        if(n==0)
          printf("\nTurma vazia.\n");
        else{
          printf("\n2 - Remover aluno\n");
          printf("Buscar RA: ");
          scanf("%i", &ra);
          p = buscar(turmaLP, n, ra);
          if(p==-1){
            printf("\nAluno não matriculado.\n");
          }
          else{
            remover(turmaLP, p, n, ra);
            n--;
          }
        }
        break;
      case 3:
        //listar alunos
        if(n==0)
          printf("\nTurma vazia.\n");
        else{
          printf("\n3 - Turma LP:\n");
          listar(turmaLP, n);
        }
        break;
      case 4:
        //consultar aluno por RA
        if(n==0)
          printf("\nTurma vazia.\n");
        else{
          printf("\n4 - Consultar aluno\n");
          printf("Buscar RA: ");
          scanf("%i", &ra);
          p = buscar(turmaLP, n, ra);
          if(p==-1)
            printf("Aluno não matriculado.\n");
          else
            consultar(turmaLP, p);
        }
        break;
      case 5:
        printf("\nFim!\n");
        break;
      default:
        printf("\nOpção incorreta.\n");
    }
  }
}

void imprimeMenu(){
  printf("\nMenu:");
  printf("\n1 - Inserir aluno");
  printf("\n2 - Remover aluno");
  printf("\n3 - Listar Turma");
  printf("\n4 - Consultar aluno por RA");
  printf("\n5 - Sair");
  printf("\nOpção: ");
}

void consultar(struct aluno turmaLP[], int p){
  printf("\nNome: %s\n", turmaLP[p].nome);
  printf("RA: %i\n", turmaLP[p].ra);
  printf("Frequência: %i\n", turmaLP[p].freq);
  if(turmaLP[p].freq<75){
    printf("Reprovado por falta.\n");
  }
  else{ 
    for(int i=0; i<3; i++)
      printf("Nota %i: %.1f\n", i+1, turmaLP[p].nota[i]);
    printf("Média: %.1f\n", turmaLP[p].media);
    if(turmaLP[p].media<7)
      printf("Reprovado.\n");
    else if(turmaLP[p].media==10)
      printf("Aprovado com distinção!\n");
    else
      printf("Aprovado\n");
  }
  printf("\n------------------\n");
}

void listar(struct aluno turmaLP[], int n){
  for(int i=0; i<n; i++){
    printf("%i. %s\n", i+1, turmaLP[i].nome);
    /*if(turmaLP[i].freq<75)
      printf("Reprovado por falta.\n");
    else{
      if(turmaLP[i].media<7)
        printf("Reprovado.\n");
      else if(turmaLP[i].media==10)
        printf("Aprovado com distinção!\n");
      else
        printf("Aprovado\n");
    }*/
  }
  printf("\n------------------\n");
}

void inserir(struct aluno turmaLP[], int n, int ra){
  turmaLP[n].ra = ra;
  getchar();
  printf("\nNome completo: ");
  fgets(turmaLP[n].nome, sizeof(turmaLP[n].nome), stdin);
  turmaLP[n].nome[strlen(turmaLP[n].nome)-1] = '\0';
  
  printf("Frequência: ");
  scanf("%i", &turmaLP[n].freq);

  for(int i=0; i<3; i++){
    do{
      printf("Nota %i: ", i+1);
      scanf("%f", &turmaLP[n].nota[i]);
      if(turmaLP[n].nota[i]<0 || turmaLP[n].nota[i]>10)
        printf("Valor inválido. Digite novamente.\n");
    }while(turmaLP[n].nota[i]<0 || turmaLP[n].nota[i]>10); 
    turmaLP[n].media+= turmaLP[n].nota[i];
  }
  turmaLP[n].media/=3;
  ra = 0;
  printf("\n------------------\n");
}

void remover(struct aluno turmaLP[], int p,int n, int ra){
  for(int i=p; i<n; i++){
    turmaLP[i] = turmaLP[i+1];
  }
  printf("\nAluno removido.\n");
  printf("\n------------------\n");
}

int buscar(struct aluno turmaLP[], int n, int ra){
  for(int i=0; i<n; i++){
    if(turmaLP[i].ra==ra)
      return i;
  }
  return -1;
}