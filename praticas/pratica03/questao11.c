/* Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²) */

#include <stdio.h>

int main() {
 float peso = 0.0f;
 float altura = 0.0f;

  printf("Entre com o peso em kg: ");
  int leu_certo = scanf("%f", &peso);
  
  
  while (peso <= 0) {
    getchar();
    printf("Peso inválido. Tente novamente: ");
    leu_certo = scanf("%f", &peso);
  }
  
  printf("Entre com a altura em m: ");
  leu_certo = scanf("%f", &altura);
  
  while(altura <=0) {
    getchar();
    printf("Altura inválida. Tente novamente: ");
    leu_certo = scanf("%f", &altura);
  }

  float imc = peso / (altura * altura);
  printf("seu imc é %1.0f\n", imc);


  return 0;
}