// Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.

#include <stdio.h>

#define MAX 10
int main(){
  char v[MAX];
  int i, c = 0;

  for(i=0; i<MAX; i++){
    printf("Digite um caracter: ");
    scanf("%c", &v[i]);
    getchar();
  }

  printf("Consoantes:\n");
  
  for(i=0; i<MAX; i++)
  {
    if((v[i]>='A' && v[i]<='Z') || (v[i]>='a' && v[i]<='z'))
    {
      if(v[i]!='A' && v[i]!='a' && v[i]!='E' && v[i]!='e' && v[i]!='I' && v[i]!='i' && v[i]!='O' && v[i]!='o' && v[i]!='U' && v[i]!='u')
      {
        c++;
        printf("%c\n", v[i]);
      }
    }
  }

  printf("%i consoantes.\n", c);
  
  return 0;
}