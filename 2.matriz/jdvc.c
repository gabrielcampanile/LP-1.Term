#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char tab[3][3] = {{'_','_','_'},{'_','_','_'},{'_','_','_'}};
  int i, j;
  int cont = 0, ganhou = 0, acabou = 0;

  printf("Tabuleiro:\n");
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      printf("%c\t", tab[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  
  srand(time(NULL));

  do{
    if(cont%2==0){ 
      i = rand()%3;
      j = rand()%3;
      if(tab[i][j]=='_'){
        tab[i][j] = 'o';
        cont++;
        printf("Computador:\n");
        for(i=0; i<3; i++){
          for(j=0; j<3; j++){
            printf("%c\t", tab[i][j]);
          }
          printf("\n");
        }
        printf("\n");
      }
    }
    else{
      printf("Digite a linha: ");
      scanf("%i", &i);
      while(i<0 || i>2){
        printf("Inválido. Digite a linha: ");
        scanf("%i", &i);
      }
      printf("Digite a coluna: ");
      scanf("%i", &j);
      while(j<0 || j>2){
        printf("Inválido. Digite a coluna: ");
        scanf("%i", &j);
      }
      printf("\n");
      
      if(tab[i][j]=='_'){
        tab[i][j] = 'x';
        cont++;
        printf("Você:\n");
        for(i=0; i<3; i++){
          for(j=0; j<3; j++){
            printf("%c\t", tab[i][j]);
          }
          printf("\n");
        }
        printf("\n");
      }
      else
        printf("Coordenada já preenchida. Jogue novamente.\n\n");
    }

    for(i=0; i<3; i++){
      if(tab[i][0]=='x' && tab[i][1]=='x' && tab[i][2]=='x'){
        printf("Você ganhou!\n");
        ganhou = 1;
      }
      else if(tab[i][0]=='o' && tab[i][1]=='o' && tab[i][2]=='o'){
        printf("O computador ganhou!\n");
        ganhou = 1;
      }
    }
    
    for(j=0; j<3; j++){
      if(tab[0][j]=='x' && tab[1][j]=='x' && tab[2][j]=='x'){
        printf("Você ganhou!\n");
        ganhou = 1;
      }
      else if(tab[0][j]=='o' && tab[1][j]=='o' && tab[2][j]=='o'){
        printf("O computador ganhou!\n");
        ganhou = 1;
      }
    }
    
    if((tab[0][0]=='x' && tab[1][1]=='x' && tab[2][2]=='x') || (tab[0][2]=='x' && tab[1][1]=='x' && tab[2][0]=='x')){
        printf("Você ganhou!\n");
        ganhou = 1;
      }
    else if((tab[0][0]=='o' && tab[1][1]=='o' && tab[2][2]=='o') || (tab[0][2]=='o' && tab[1][1]=='o' && tab[2][0]=='o')){
        printf("O computador ganhou!\n");
        ganhou = 1;
      }  
    
    if(ganhou==0 && cont==9){
      acabou = 1;
      printf("Empate!\n");
    }
    
  }while(!ganhou && !acabou);
  
  return 0;
}