#include <stdio.h>

int main()
{
  char c[10] = "", t;

  printf("Olá! Digite o nome do seu curso: ");
  scanf("%s", c);
  getchar();
  
  printf("Em que turno você estuda? ");
  scanf("%c", &t);

  if(t=='M' || t=='m')
    printf("Bom dia!\n");

  if(t=='V' || t=='v')
    printf("Boa tarde!\n");

  if(t=='N' || t=='n')
    printf("Boa noite!\n");

  if(t!='M' && t!='m' && t!='V' && t!='v' && t!='N' && t!='n')
    printf("Valor inválido!\n");

  return 0;
}