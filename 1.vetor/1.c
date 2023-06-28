//Ler dois vetores de tamanho 10 com valores ordenados crescentemente e criar um terceiro também ordenado, que será a junção dos dois vetores de entrada. Por exemplo, se os dois vetores lidos forem: v1 = [1, 3, 10, 20, 50, 55, 60, 78, 90, 100] e v2 = [0, 2, 4, 12, 23, 50, 51, 56, 61, 62]; o terceiro vetor será v3 = [0, 1, 2, 3, 4, 10, 12, 20, 23, 50, 50, 51, 55, 56, 60, 61, 62, 78, 90, 100].

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 10
#define n 20

int main(){
  int v1[m], v2[m], v3[n], a[m], b[m], c[m];
  int i, j, k;
  int menor[m], m2[m];

  srand(time(NULL));

  for(i=0; i<m; i++){
    v1[i] = rand()%100;
    v2[i] = rand()%100;
    menor[i] = 100;
    m2[i] = 100;
  }

  printf("v1 = ");
  for(i=0; i<m; i++)
    printf("%i ", v1[i]);
  printf("\n");
  
  for(i=0; i<m; i++){
    for(j=0; j<m; j++){
      if(v1[j]<menor[0] && v1[j]!=menor[0])
        menor[0] = v1[j];
      else if(v1[j]>menor[0] && v1[j]<menor[1])
        menor[1] = v1[j];
      else if(v1[j]>menor[1] && v1[j]<menor[2])
        menor[2] = v1[j];
      else if(v1[j]>menor[2] && v1[j]<menor[3])
        menor[3] = v1[j];
      else if(v1[j]>menor[3] && v1[j]<menor[4])
        menor[4] = v1[j];
      else if(v1[j]>menor[4] && v1[j]<menor[5])
        menor[5] = v1[j];
      else if(v1[j]>menor[5] && v1[j]<menor[6])
        menor[6] = v1[j];
      else if(v1[j]>menor[6] && v1[j]<menor[7])
        menor[7] = v1[j];
      else if(v1[j]>menor[7] && v1[j]<menor[8])
        menor[8] = v1[j];
      else if(v1[j]>menor[8] && v1[j]<menor[9])
        menor[9] = v1[j];
    }
  }

  printf("v1 = ");
  for(i=0; i<m; i++)
    printf("%i ", menor[i]);
  printf("\n");
  
  printf("\nv2 = ");
  for(i=0; i<m; i++)
    printf("%i ", v2[i]);
  printf("\n");

  for(i=0; i<m; i++){
    for(j=0; j<m; j++){
      if(v2[j]<m2[0] && v2[j]!=m2[0])
        m2[0] = v2[j];
      else if(v2[j]>m2[0] && v2[j]<m2[1])
        m2[1] = v2[j];
      else if(v2[j]>m2[1] && v2[j]<m2[2])
        m2[2] = v2[j];
      else if(v2[j]>m2[2] && v2[j]<m2[3])
        m2[3] = v2[j];
      else if(v2[j]>m2[3] && v2[j]<m2[4])
        m2[4] = v2[j];
      else if(v2[j]>m2[4] && v2[j]<m2[5])
        m2[5] = v2[j];
      else if(v2[j]>m2[5] && v2[j]<m2[6])
        m2[6] = v2[j];
      else if(v2[j]>m2[6] && v2[j]<m2[7])
        m2[7] = v2[j];
      else if(v2[j]>m2[7] && v2[j]<m2[8])
        m2[8] = v2[j];
      else if(v2[j]>m2[8] && v2[j]<m2[9])
        m2[9] = v2[j];
    }
  }

  printf("v2 = ");
  for(i=0; i<m; i++)
    printf("%i ", m2[i]);
  printf("\n");
  
  return 0;
}