// Faça um algoritmo para ler um valor N qualquer (que será o tamanho dos vetores). Após, ler dois vetores A e B (de tamanho N cada um) e depois armazenar em um terceiro vetor Soma a soma dos elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o vetor Soma.

#include <stdio.h>

int main(){
  int i, N;
  
  printf("Digite o tamanho do vetor: ");
  scanf("%i", &N);
  
  int A[N], B[N], S[N];

  printf("\nElementos do vetor A:\n");
  for(i=0; i<N; i++){
    printf("A%i = ", i+1);
    scanf("%i", &A[i]);
  }

  printf("\nElementos do vetor B:\n");
  for(i=0; i<N; i++){
    printf("B%i = ", i+1);
    scanf("%i", &B[i]);
    S[i] = A[i] + B[i];
  }

  printf("\nSoma dos elementos do vetor A com os do vetor B:\n");
  
  for(i=0; i<N; i++)
    printf("S%i: %i + %i = %i\n", i+1, A[i], B[i], S[i]);

  return 0;
}