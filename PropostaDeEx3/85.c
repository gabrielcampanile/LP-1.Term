/*
Faça um algoritmo para ler e armazenar em um vetor a temperatura média de todos os dias do ano.
Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi inferior a média anual
*/

#include <stdio.h>

#define DIAS 365

int main(){
  float T[DIAS], Menor, Maior, TempMedia;
  int i, TempInf = 0;
  
  printf("Temperatura média dos dias:\n");
  
  printf("Dia 1: ");
  scanf("%f", &T[0]);

  Menor = T[0];
  Maior = T[0];
  TempMedia = T[0];
  
  for(i=1; i<DIAS; i++){
    printf("Dia %i: ", i+1);
    scanf("%f", &T[i]);
    if(T[i]<Menor)
      Menor = T[i];
    else if(T[i]>Maior)
      Maior = T[i];

    TempMedia+= T[i];
  }

  TempMedia = TempMedia/DIAS;

  for(i=0; i<DIAS; i++)
    if(T[i]<TempMedia)
      TempInf++;

  printf("Menor temperatura do ano: %.1f°C.\n", Menor);
  printf("Maior tmeperatura do ano: %.1f°C.\n", Maior);
  printf("Temperatura média anual: %.1f°C.\n", TempMedia);
  printf("%i dias no ano em que a temperatura foi inferior a média anual.\n", TempInf);

  return 0;
}