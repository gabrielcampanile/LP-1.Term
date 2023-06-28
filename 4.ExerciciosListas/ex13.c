//Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista. Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média anual, e em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char meses[12][25] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
  int mes[12], media, soma = 0;
  int i;

  srand(time(NULL));

  for(i=0; i<12; i++){
    mes[i] = rand()%31;
    soma+= mes[i];
    printf("%s: %i°C\n", meses[i], mes[i]);
  }

  media = soma/12;
  printf("\nMédia anual: %i°C\n", media);

  printf("\nMeses acima da média:\n");
  for(i=0; i<12; i++){
    if(mes[i]>media)
      printf("%s\n", meses[i]);
  }

  return 0;
}