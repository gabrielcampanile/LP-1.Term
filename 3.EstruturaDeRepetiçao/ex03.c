#include <stdio.h>

int main()
{
  int i, s;
  char sx, ec;

  do
  {
    printf("idade: ");
    scanf("%i", &i);
    if(i<0 || i>150)
      printf("Valor inválido.\n");
  } while(i<0 || i>150);
  printf("Valor válido.\n");

  do
  {
    printf("salário: ");
    scanf("%i", &s);
    if(s<0)
      printf("Valor inválido.\n");
  } while(s<0);
  printf("Valor válido.\n");

  do
  {
    printf("sexo: ");
    scanf(" %c", &sx);
    if(sx!='\n' && sx!='M' && sx!='m' && sx!='F' && sx!='f')
      printf("inválido\n");
  } while(sx!='M' && sx!='m' && sx!='F' && sx!='f');
  printf("Válido.\n");

  do
  {
    printf("estado civil: ");
    scanf(" %c", &ec);
    if(ec!='\n' && ec!='s' && ec!='S' && ec!='C' && ec!='c')
      printf("inválido.\n");
  } while(ec!='s' && ec!='S' && ec!='C' && ec!='c');
  printf("Válido.\n");
  
  return 0;
}