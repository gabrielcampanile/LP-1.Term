//Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 10
#define n 30

int main(){
  int a[m], b[m], c[m], d[n], i, j=0, k=0, l=0;

  srand(time(NULL));

  for(i=0; i<m; i++){
    a[i] = rand()%10;
    b[i] = rand()%10;
    c[i] = rand()%10;
  }

  printf("A\tB\tC\n");
  for(i=0; i<m; i++)
      printf("%i\t%i\t%i\n", a[i], b[i], c[i]);

  printf("\nD:\n");
  for(i=0; i<n; i++){
    d[i] = a[j];
    j++;
    d[i+1] = b[k];
    k++;
    d[i+2] = c[l];
    l++;
    i+=2;
  }

  for(i=0; i<n; i++)
    printf("%i\n", d[i]);
  
  return 0;
}