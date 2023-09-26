/* Implemente funções que façam o mesmo que as funções do C:
 strlen( ) - retorna o tamanho da string.
 strcmp( ) - diz se as duas strings são iguais ou não.
 strcpy( ) - recebe duas strings e copia a primeira na segunda */

#include <stdio.h>

#define m 20

int length(char[]);
int compare(char[], char[]);
void copy(char[], char[]);

int main(){
  char p1[m], p2[m];
  int l1, l2, cmp = 0;

  printf("Digite uma palavra: ");
  scanf("%[^\n]s", p1);
  getchar();
  printf("Digite outra palavra: ");
  scanf("%[^\n]s", p2);
  getchar();
  
  l1 = length(p1);
  l2 = length(p2);
  
  printf("Length of '%s' = %i\n", p1, l1);
  printf("Length of '%s' = %i\n", p2, l2);

  if(compare(p1, p2))
    printf("Iguais.\n");
  else
    printf("Diferentes.\n");

  copy(p1, p2);

  printf("%s\n", p2);
  
  return 0;
}

int length(char p[]){
  int len = 0;
  for(int i=0; i<m; i++){
    if((p[i]>='A' && p[i]<='Z') || (p[i]>='a' && p[i]<='z'))
      len++;
    else
      return len;
  }
  return len;
}

int compare(char p1[], char p2[]){
  if(length(p1)!=length(p2))
    return 0;
  else
    for(int i=0; i<length(p1); i++)
      if(p1[i]!=p2[i])
        return 0;
  return 1;
}

void copy(char p1[], char p2[]){
  for(int i=0; i<m; i++)
    p2[i] = p1[i];
}