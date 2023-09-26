#include <stdio.h>
#include <string.h>

int main(){
  char A[10], B[10], C[20];
  int i;

  printf("A: ");
  scanf("%[^\n]s", A);
  getchar();
  printf("B: ");
  scanf("%[^\n]s", B);

  int tamanho = strlen(A) > strlen(B) ? strlen(A) : strlen(B);

  printf("C: ");
  
  for(i=0; i<tamanho; i++){
    if(i>=strlen(A))
      printf("%c", B[i]);
    else if(i>=strlen(B))
      printf("%c", A[i]);
    else
      printf("%c%c", A[i], B[i]);
  }

  printf("\n");
  
  return 0;
}