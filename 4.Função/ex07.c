// Escreva uma função que receba uma string (cadeia de caracteres) e retorne 1 se essa for um palíndromo e 0 caso contrário. Um palíndromo é uma palavra ou frase que se lê da mesma maneira no dois sentidos - normalmente, da esquerda para a direita ou ao contrário, da direita para a esquerda. Por exemplo, OVO; ARARA; SOCORRAM-ME, SUBI NO ÓNIBUS EM MARROCOS.

#include <stdio.h>
#include <string.h>

int palind(char[]);

int main(){
  char string[30];

  printf("String: ");
  fgets(string, sizeof(string), stdin);
  string[strlen(string)-1] = '\0';
  
  if(palind(string))
    printf("É palíndromo.\n");
  else
    printf("Não é palíndromo.\n");

  return 0;
}

int palind(char palavra[]){
  for(int i=0; i<strlen(palavra); i++)
    if(palavra[i]!=palavra[strlen(palavra)-1-i])
      return 0;
  return 1;
}