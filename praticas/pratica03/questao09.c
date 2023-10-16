/* Escrever um programa em C que liste os 10 primeiros números e imprima o maior e o menor entre eles. */
#include <stdio.h>

  int main() {
    int numero = 0;

    printf("entre com um numero inteiro: ");
    int leu_certo = scanf("%i", &numero);

    int maior = numero;
    int menor = numero;


  for(int i = 0; i < 9; i++) {
    printf("Entre com outro numero inteiro: ");
    int leu_certo = scanf("%i", &numero);

    if(numero > maior) {
      maior = numero;
    }
  
   if (numero < menor) {
     menor = numero;
   }
  }

    printf("o maior numero é %i e o menor numero é %i\n", maior, menor);
    
  return 0;
}