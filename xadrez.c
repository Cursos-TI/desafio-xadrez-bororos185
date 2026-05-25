#include <stdio.h>

void moverTorre(int casas) {
    if(casas == 0) {
        return;
    }

    printf("Torre para a direita: %d\n", casas);
    moverTorre(casas - 1);
}

void moverBispo(int casas) {
    if(casas == 0) {
        return;
    }

    printf("Bispo cima direita: %d\n", casas);
    moverBispo(casas - 1);
}

void moverDama(int casas) {
    if(casas == 0) {
        return;
    }

    printf("Dama para a esquerda: %d\n", casas);
    moverDama(casas - 1);
}

void moverCavalo(int movimentos) {
    if(movimentos == 0) {
        return;
    }

    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");

    moverCavalo(movimentos - 1);
}

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

        // Torre
        case 1:
            printf("Movendo a torre:\n");
            moverTorre(5);
            break;

        // Bispo
        case 2:
            printf("Movendo o bispo:\n");
            moverBispo(5);
            break;

        // Dama
        case 3:
            printf("Movendo a dama:\n");
            moverDama(8);
            break;

        // Cavalo
        case 4:
            printf("Movendo o cavalo:\n");
            moverCavalo(1);
            break;

        // Sair
        case 5:
            printf("Saindo do jogo...\n");
            break;

        // Inválido
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}