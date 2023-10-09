/*Faça um programa em C que leia um ano e verifique se ele é bissexto (é múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400)*/
#include <stdio.h>

int main() {
  int ano = 0;
  printf("Por favor, insira um ano: ");
  scanf("%i", &ano);

   if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d É um ano bissexto.\n", ano);
    } else {
        printf("%d Não é um ano bissexto.\n", ano);
    }

    return 0;
}
