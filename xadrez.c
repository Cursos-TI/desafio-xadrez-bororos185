#include<stdio.h>
int main() {
    int opcao;
    printf("==== Jogo de Xadrez ====\n");
    printf("Escolha a peca:\n");
    printf("1. Torre - Movimento em linha reta\n");
    printf("2. Bispo - Movimento diagonal\n");
    printf("3. Dama - Movimento livre\n");
    printf("4. Cavalo - Movimento em L\n");
    printf("5. Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    switch(opcao) {
//movimento da torre
    case 1:
    printf("Movendo a torre: \n");
    for(int i =1; i <=5; i++){
        printf("Torre para a direita: %d\n", i);
    }
    break;
//movimento do bispo
    case 2:
    printf("Movendo o bispo: \n");
    for(int i =1; i <=5; i++){
        printf("Cima Direita %d\n", i);
    }
    break;
//movimento da dama
    case 3:
    printf("Movendo a dama: \n");
    int casaDama = 1;
    do {
        printf("Dama para a esquerda: %d\n", opcao);
        opcao++;
    } while (opcao <= 8);
    break;
//movimento do cavalo
    case 4:
    int movimentoCavalo = 1;
    while (movimentoCavalo--)
    {
      for(int i = 0; i < 2; i++) {
        printf("Cima\n", i);
      }
      printf("Direita\n");
    }
    break;
//sair do programa
    case 5:
    printf("Saindo do jogo...\n");
    break;
//opcao invalida
    default:
    printf("Opcao invalida. Tente novamente.\n");
    break;
   
    }
return 0;
}