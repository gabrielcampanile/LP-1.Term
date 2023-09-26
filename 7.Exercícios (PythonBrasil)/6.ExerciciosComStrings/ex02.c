//Nome ao contrário em maiúsculas. Faça um programa que permita ao usuário digitar o seu nome e em seguida mostre o nome do usuário de trás para frente utilizando somente letras maiúsculas. Dica: lembre−se que ao informar o nome o usuário pode digitar letras maiúsculas ou minúsculas.

#include <stdio.h>
#include <string.h>

int main(){
  char nome[50], emon[50];
  int i, j=0;

  printf("Digite seu nome completo:\n");
  fgets(nome, sizeof(nome), stdin);
  fflush(stdin);
  nome[strlen(nome)-1] = '\0';

  for(i=0; i<strlen(nome); i++){
    if(nome[i]>='a' && nome[i]<='z')
      nome[i]-= 32;
  }
  
  for(i=strlen(nome)-1; i>=0; i--){
    emon[j] = nome[i];
    j++;
  }

  printf("Seu nome de trás para frente:\n");
  printf("%s\n", emon);

  return 0;
}