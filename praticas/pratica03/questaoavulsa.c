#include <stdio.h>
#include <string.h>

int main() {
    int pontuacao = 0;
    char respostaUsuario[100];

    printf("Bem-vindo ao Jogo de Perguntas e Respostas!\n");

    // Pergunta 1
    printf("Qual é a capital do Brasil?\n");
    printf("Sua resposta: ");
    scanf(" %[^\n]", respostaUsuario);

    if (strcmp(respostaUsuario, "Brasília") == 0) {
        printf("Resposta correta! Você ganhou 1 ponto.\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta é: Brasília\n");
    }

    // Pergunta 2
    printf("Quantos planetas existem em nosso sistema solar?\n");
    printf("Sua resposta: ");
    scanf(" %[^\n]", respostaUsuario);

    if (strcmp(respostaUsuario, "8") == 0) {
        printf("Resposta correta! Você ganhou 1 ponto.\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta é: 8\n");
    }

    // Pergunta 3
    printf("Quem escreveu 'Dom Quixote'?\n");
    printf("Sua resposta: ");
    scanf(" %[^\n]", respostaUsuario);

    if (strcmp(respostaUsuario, "Miguel de Cervantes") == 0) {
        printf("Resposta correta! Você ganhou 1 ponto.\n");
        pontuacao++;
    } else {
        printf("Resposta incorreta. A resposta correta é: Miguel de Cervantes\n");
    }

    // Exibe a pontuação final
    printf("Pontuação final: %d/3\n", pontuacao);

    return 0;
}
