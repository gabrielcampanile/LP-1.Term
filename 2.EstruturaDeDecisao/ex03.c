#include <stdio.h>

int main()
{
  char s;

  printf("Informe seu sexo. M para homem e F para mulher: ");
  scanf("%c", &s);

  if(s=='M' || s=='m')
    printf("%c - masculino.\n", s);
  else if(s=='F' || s=='f')
    printf("%c - feminino.\n", s);
  else
    printf("%c - sexo indefinido.\n", s);

  return 0;
}

//coment
/* gggg
gggg
*/
// || &&