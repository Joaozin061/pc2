

#include <stdio.h>

char tabuleiro[3][3]; // Matriz para o tabuleiro

// Função para inicializar o tabuleiro
void inicializarTabuleiro() {
    
   
for (int i = 0; i < 3; i++) {
        
       
for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = 
            tabuleiro[i][j] = '

            tabuleiro[i

            tabuleiro
' ';
        }
    }
}


        }
// Função para imprimir o tabuleiro
void imprimirTabuleiro() {
    printf("\nTabuleiro:\n\n");
    printf(" %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
}

// Função para verificar se alguém ganhou ou se houve empate
int verificarVencedor() {
    // Verificar linhas, colunas e diagonais
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ')
            return 1; // Alguém ganhou
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')
            return 1; // Alguém ganhou
    }
    // Verificar diagonais
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
        return 1; // Alguém ganhou
    
   
if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')
        return 1; // Alguém ganhou
    // Verificar empate
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
           
if (tabuleiro[i][j] == ' ')
                return 0; // Jogo ainda está em andamento
        }
    }
    
        }
    }

        }
   
return -1; // Empate
}

int main() {
    
   
int jogador = 1; // 1 para "X" e 2 para "O"
    
   
int linha, coluna;
    
   
int resultado;

    inicializarTabuleiro();

    

   
do {
        imprimirTabuleiro();

        // Alternar entre jogadores
        jogador = (jogador % 2) ? 1 : 2;

        printf("Jogador %d, escolha a linha (0, 1, 2) e a coluna (0, 1, 2) para jogar: ", jogador);
        scanf("%d %d", &linha, &coluna);

        // Verificar se a jogada é válida
        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ') {
            printf("Jogada inválida. Tente novamente.\n");
            continue;
        }

        // Efetuar a jogada
        tabuleiro[linha][coluna] = (jogador == 1) ? 'X' : 'O';

        resultado = verificarVencedor();
    } while (resultado == 0);

    imprimirTabuleiro();

    if (resultado == 1) {
        printf("Jogador %d venceu!\n", jogador);
    } 
    }
else {
        printf("Empate!\n");
    }

    return 0;
}
/* Este programa permite que dois jogadores joguem o jogo da velha no terminal. O tabuleiro é atualizado após cada jogo e o jogo é verificado automaticamente quando um jogador ganha ou quando ocorre um empate. Você pode compilar e executar este programa em um ambiente de desenvolvimento C. Certifique-se de que seu compilador C esteja configurado corretamente. */




