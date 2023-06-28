//Um armazém trabalha com 20 mercadorias diferentes identificadas pelos número de 1 a 20. O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. Ele tem uma tabela que indica para cada mercadoria o preço de venda. Calcular o faturamento mensal com base nas vendas e no preço de cada item.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 20
#define n 30

int main(){
  float merc[m], faturamento = 0;
  int i, vendas[m];
  
  srand(time(NULL));

  printf("Digite o valor de cada item:\n");
  
  for(i=0; i<m; i++){
    merc[i] = rand()%51;
    printf("Item %i: R$ %.2f\n", i+1, merc[i]);
  }

  printf("\nNúmero de vendas:\n");
  
  for(i=0; i<m; i++){
    vendas[i] = rand()%11;
    printf("Item %i: %i\n", i+1, vendas[i]);
  }

  for(i=0; i<m; i++){
    faturamento+= merc[i] * vendas[i];
  }

  printf("\nFaturamento mensal = R$ %.2f\n", faturamento);
  
  return 0;
}