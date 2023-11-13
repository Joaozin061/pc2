#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_PERGUNTAS 3
#define TAM_MAX 100

// Defina as perguntas e respostas aqui
char perguntas[NUM_PERGUNTAS][TAM_MAX] = {
    "Qual a raíz quadrada de 625?",
    "Quem descobriu o Brasil primeiro?",
    "Quem escreveu a obra 'Dom Quixote'?"
};

char respostas[NUM_PERGUNTAS][TAM_MAX] = {
    "25",
    "índios",
    "Miguel de Cervantes"
};

// Função para exibir uma pergunta e obter uma resposta do usuário
int fazerPergunta(int numPergunta) {
    char resposta[TAM_MAX];
    
    printf("Pergunta %d: %s\n", numPergunta + 1, perguntas[numPergunta]);
    printf("Sua resposta: ");
    scanf(" %[^\n]s", resposta);

    if (strcmp(resposta, respostas[numPergunta]) == 0) {
        printf("Resposta correta!\n");
        return 1;
    } else {
        printf("Resposta incorreta. A resposta correta é: %s\n", respostas[numPergunta]);
        return 0;
    }
}

int main() {
    int pontuacao = 0;

    printf("Bem-vindo ao jogo de perguntas e respostas!\n");
    printf("Você responderá a %d perguntas. Vamos começar:\n", NUM_PERGUNTAS);

    for (int i = 0; i < NUM_PERGUNTAS; i++) {
        pontuacao += fazerPergunta(i);
        printf("Sua pontuação atual é: %d\n", pontuacao);
    }

    printf("Fim do jogo. Sua pontuação final é: %d\n", pontuacao);

}

return 0;
  }
  
  





