#include <stdio.h>
#include <string.h>

void invert(char[], int);

int main(){
  char string[30];

  printf("String: ");
  fgets(string, sizeof(string), stdin);
  string[strlen(string)-1] = '\0';

  printf("String invertida: ");
  invert(string, strlen(string)-1);
  printf("\n");

  return 0;
}

void invert(char string[], int i){
  if(i<0)
    return;
  printf("%c", string[i]);
  invert(string, i-1);
}