#include <stdio.h>

int main()
{
  int d;

  printf("Digite um número correspondente ao dia da semana: ");
  scanf("%i", &d);

  switch(d){
    case 1:
    printf("Domingo\n");
    break;
    case 2:
    printf("Segunda\n");
    break;
    case 3:
    printf("Terça\n");
    break;
    case 4:
    printf("Quarta\n");
    break;
    case 5:
    printf("Quinta\n");
    break;
    case 6:
    printf("Sexta\n");
    break;
    case 7:
    printf("Sábado\n");
    break;
    default:
    printf("Valor inválido.\n");
  }

  return 0;
}