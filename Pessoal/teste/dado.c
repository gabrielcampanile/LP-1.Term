#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, dado;
  int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;

  printf("Número de lançamentos: ");
  scanf("%i", &n);

  for(int i=0; i<n; i++){
    dado = rand()%6 + 1;
    switch(dado){
      case 1:
        c1++;
        break;
      case 2:
        c2++;
        break;
      case 3:
        c3++;
        break;
      case 4:
        c4++;
        break;
      case 5:
        c5++;
        break;
      case 6:
        c6++;
        break;
      default:
        break;
    }
  }

  printf("c1 = %i\nc2 = %i\nc3 = %i\nc4 = %i\nc5 = %i\nc6 = %i\n", c1, c2, c3, c4, c5, c6);

  return 0;
}