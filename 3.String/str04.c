#include <stdio.h>
#include <string.h>

int main(){
  int i, j = 0, k = 0;
  char A[10], B[10], C[20];

  printf("A: ");
  fgets(A, sizeof(A), stdin);
  fflush(stdin);
  A[strlen(A)-1] = '\0';

  printf("B: ");
  fgets(B, sizeof(B), stdin);
  fflush(stdin);
  B[strlen(B)-1] = '\0';
  
  printf("C: ");
  for(i=0; i<strlen(A)+strlen(B); i++){
    if(i%2==0){
      C[i] = A[j];
      j++;
    }
    else{
      C[i] = B[k];
      k++;
    }
  }

  printf("%s\n", C);
  
  return 0;
}