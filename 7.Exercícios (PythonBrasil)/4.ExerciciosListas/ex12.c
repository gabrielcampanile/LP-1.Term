//Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 30

int main(){
  int a[30][2], soma = 0, media = 0;
  int i, j, cont = 0;

  srand(time(NULL));

  for(i=0; i<m; i++){
    do{
      a[i][0] = rand()%22;
    }while(a[i][0]<10 || a[i][0]>17);
    do{
      a[i][1] = rand()%201;
    }while(a[i][1]<130 || a[i][1]>180);
    soma+= a[i][1];
  }

  for(i=0; i<m; i++)
    printf("Aluno %i: %i anos\t%i cm\n", i+1, a[i][0], a[i][1]);

  media = soma/m;

  printf("\nMédia de altura: %i cm\n", media);
  
  for(i=0; i<m; i++){
    if(a[i][0]>13 && a[i][1]<media)
      cont++;
  }

  printf("\n%i alunos com mais de 13 anos possuem altura inferior à média de altura.\n", cont);

  return 0;
}