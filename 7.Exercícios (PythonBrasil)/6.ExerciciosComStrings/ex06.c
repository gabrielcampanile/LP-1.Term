//Data por extenso. Faça um programa que solicite a data de nascimento (dd/mm/aaaa) do usuário e imprima a data com o nome do mês por extenso.

#include <stdio.h>
#include <string.h>

int main(){
  char data[11];
  int dia, mes, ano;

  do{
    printf("Data de nascimento: ");
    fgets(data, sizeof(data), stdin);
    sscanf(data,"%d/%d/%d", &dia, &mes, &ano);
    
    if(dia<1 || dia>31 || mes<1 || mes>12 || ano<1){
      printf("Valor inválido. Digite novamente.\n");
    }
  }while(dia<1 || dia>31 || mes<1 || mes>12 || ano<1);
  
  switch(mes){
    case 1:
      printf("Você nasceu em %i de janeiro de %i.\n", dia, ano);
      break;
    case 2:
      printf("Você nasceu em %i de fevereiro de %i.\n", dia, ano);
      break;
    case 3:
      printf("Você nasceu em %i de março de %i.\n", dia, ano);
      break;
    case 4:
      printf("Você nasceu em %i de abril de %i.\n", dia, ano);
      break;
    case 5:
      printf("Você nasceu em %i de maio de %i.\n", dia, ano);
      break;
    case 6:
      printf("Você nasceu em %i de junho de %i.\n", dia, ano);
      break;
    case 7:
      printf("Você nasceu em %i de julho de %i.\n", dia, ano);
      break;
    case 8:
      printf("Você nasceu em %i de agosto de %i.\n", dia, ano);
      break;
    case 9:
      printf("Você nasceu em %i de setembro de %i.\n", dia, ano);
      break;
    case 10:
      printf("Você nasceu em %i de outubro de %i.\n", dia, ano);
      break;
    case 11:
      printf("Você nasceu em %i de novembro de %i.\n", dia, ano);
      break;
    case 12:
      printf("Você nasceu em %i de dezembro de %i.\n", dia, ano);
      break;
    default:
      break;
  }

  return 0;
}