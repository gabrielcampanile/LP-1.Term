#include <stdio.h>

#define l 3
#define c 3

int main(){
  int tab[l][c] = {{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};
  int i, j;
  int cj = 0, ganhou = 0, acabou = 0;

  printf("Tabuleiro:\n");
  for(i=0; i<l; i++){
    for(j=0; j<c; j++){
      printf("%i\t", tab[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  do{
    
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
    
    if(tab[i][j]==-1){ 
      if(cj%2==0)
        tab[i][j] = 0;
      else
        tab[i][j] = 1;
      cj++;
      printf("Tabuleiro:\n");
      for(i=0; i<l; i++){
        for(j=0; j<c; j++){
          printf("%i\t", tab[i][j]);
        }
        printf("\n");
      }
      printf("\n");
    }
    else
      printf("Coordenada já preenchida. Escolha outra.\n");

    for(i=0; i<l; i++){
      if(tab[i][0]==0 && tab[i][1]==0 && tab[i][2]==0){
        printf("O jogador 1 ganhou!\n");
        ganhou = 1;
      }
      else if(tab[i][0]==1 && tab[i][1]==1 && tab[i][2]==1){
        printf("O jogador 2 ganhou!\n");
        ganhou = 1;
      }
    }
    for(j=0; j<l; j++){
      if(tab[0][j]==0 && tab[1][j]==0 && tab[2][j]==0){
        printf("O jogador 1 ganhou!\n");
        ganhou = 1;
      }
      else if(tab[0][j]==1 && tab[1][j]==1 && tab[2][j]==1){
        printf("O jogador 2 ganhou!\n");
        ganhou = 1;
      }
    }
    if((tab[0][0]==0 && tab[1][1]==0 && tab[2][2]==0) || (tab[0][2]==0 && tab[1][1]==0 && tab[2][0]==0)){
        printf("O jogador 1 ganhou!\n");
        ganhou = 1;
      }
    else if((tab[0][0]==1 && tab[1][1]==1 && tab[2][2]==1) || (tab[0][2]==1 && tab[1][1]==1 && tab[2][0]==1)){
        printf("O jogador 2 ganhou!\n");
        ganhou = 1;
      }  
    
    if(cj==9){
      acabou = 1;
      printf("Empate!\n");
    }
  }while(!ganhou && !acabou);

  return 0;
}