#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 10
#define MAX_QUESTIONS 3

typedef struct {
    char nome[50];
    int pontos;
} Jogador;

void apresentarPergunta(int numeroPergunta) {
    switch (numeroPergunta) {
        case 1:
            printf("Pergunta 1: Qual é a capital da França?\n");
            break;
        case 2:
            printf("Pergunta 2: Qual é o maior planeta do Sistema Solar?\n");
            break;
        case 3:
            printf("Pergunta 3: Quem escreveu 'Dom Quixote'?\n");
            break;
    }
}

int main() {
    Jogador jogadores[MAX_PLAYERS];
    int numJogadores = 0;
    int numPergunta, i, j;
    char resposta[50];

    printf("Bem-vindo ao Quiz!\n");
    printf("Quantos jogadores participarão? (até %d jogadores): ", MAX_PLAYERS);
    scanf("%d", &numJogadores);

    if (numJogadores < 1 || numJogadores > MAX_PLAYERS) {
        printf("Número de jogadores inválido. Encerrando o jogo.\n");
        return 1;
    }

    for (i = 0; i < numJogadores; i++) {
        printf("Nome do Jogador %d: ", i + 1);
        scanf("%s", jogadores[i].nome);
        jogadores[i].pontos = 0;
    }

    for (numPergunta = 1; numPergunta <= MAX_QUESTIONS; numPergunta++) {
        printf("\n\nRodada %d:\n", numPergunta);
        apresentarPergunta(numPergunta);

        for (i = 0; i < numJogadores; i++) {
            printf("\n%s, insira sua resposta: ", jogadores[i].nome);
            scanf("%s", resposta);

            // Verificar se a resposta está correta (dependendo da pergunta)
            int respostaCorreta = 0;
            if (numPergunta == 1 && strcmp(resposta, "Paris") == 0) {
                respostaCorreta = 1;
            } else if (numPergunta == 2 && strcmp(resposta, "Júpiter") == 0) {
                respostaCorreta = 1;
            } else if (numPergunta == 3 && strcmp(resposta, "Cervantes") == 0) {
                respostaCorreta = 1;
            }

            if (respostaCorreta) {
                jogadores[i].pontos++;
                printf("Resposta correta! %s ganhou 1 ponto. Pontuação atual: %d\n", jogadores[i].nome, jogadores[i].pontos);
            } else {
                printf("Resposta incorreta. Pontuação atual: %d\n", jogadores[i].pontos);
            }
        }
    }

    printf("\n\nJogo encerrado. Pontuações finais:\n");
    for (i = 0; i < numJogadores; i++) {
        for (j = i + 1; j < numJogadores; j++) {
            if (jogadores[i].pontos < jogadores[j].pontos) {
                Jogador temp = jogadores[i];
                jogadores[i] = jogadores[j];
                jogadores[j] = temp;
            }
        }
    }

    for (i = 0; i < numJogadores; i++) {
        printf("%s: %d pontos\n", jogadores[i].nome, jogadores[i].pontos);
    }

    return 0;
}
