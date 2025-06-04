#include <stdio.h>

int main() {


  // Tabuleiro da batalha naval
  int tabuleiro[10][10] = {
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,3,3,3,0,0,0,0},
    {0,0,3,0,0,0,0,0,0,0},
    {0,0,3,0,0,0,0,0,0,0},
    {0,0,3,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}
  };
  // Inicialização do Navio
  int navio[3] = {3,3,3};
  int navio2[3] = {3,3,3};
 
  // Loop aninhado para imprimir o tabuleiro no console
  for(int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {

      // Condicional para criar uma nova linha a cada 10 casas
      if(j % 10 == 0){ 
        
        printf("\n");
      }
      // imprime o tabuleiro no console
      printf("[%d]",tabuleiro[i][j]);
    }
  }
  printf("\n");
  return 0;
}