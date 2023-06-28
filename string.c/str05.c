#include <stdio.h>
#include <string.h>

int main(){
  char A[100], B[10], C[10], D[10], E[100];
  int i, j, k;
  char temp[2];
  
  printf("Digite uma frase:\n");
  fgets(A, sizeof(A), stdin);
  fflush(stdin);

  strcpy(B, "para");
  strcpy(C, "e tente");

  for(i=0; i<strlen(A); i++){
    k = 0;
    for(j=i; j<i+strlen(B) && j<strlen(A); j++){
      D[k] = A[j];
      k++;
    }
    if(strcmp(D, B)==0){
      strcat(E, C);
      i += strlen(B)-1;
    } 
    else{
      temp[0] = A[i];
      temp[1] = '\0';
      strcat(E, temp);
    }
  }
  
  printf("\n%s", E);
  
  return 0;
}


//Abra a porta para entrar para poder descansar calmamente