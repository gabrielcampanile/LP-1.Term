//Nome na vertical. Faça um programa que solicite o nome do usuário e imprima-o na vertical.

#include <stdio.h>
#include <string.h>

int main(){
  char nome[10];

  printf("Digite seu primeiro nome: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0';

  for(int i=0; i<strlen(nome); i++)
    printf("%c\n", nome[i]);
  
  return 0;
}