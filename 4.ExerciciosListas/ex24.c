//Faça um programa que simule um lançamento de dados. Lance o dado 100 vezes e armazene os resultados em um vetor . Depois, mostre quantas vezes cada valor foi conseguido. Dica: use um vetor de contadores(1-6) e uma função para gerar numeros aleatórios, simulando os lançamentos dos dados.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 100

int main(){
  int dado[m];
  int i, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;

  srand(time(NULL));

  for(i=0; i<100; i++){
    dado[i] = (rand()%6)+1;
    if(dado[i]==1)
      c1++;
    else if(dado[i]==2)
      c2++;
    else if(dado[i]==3)
      c3++;
    else if(dado[i]==4)
      c4++;
    else if(dado[i]==5)
      c5++;
    else if(dado[i]==6)
      c6++;
  }

  printf("Face 1: %i aparições\n", c1);
  printf("Face 2: %i aparições\n", c2);
  printf("Face 3: %i aparições\n", c3);
  printf("Face 4: %i aparições\n", c4);
  printf("Face 5: %i aparições\n", c5);
  printf("Face 6: %i aparições\n", c6);

  return 0;
}