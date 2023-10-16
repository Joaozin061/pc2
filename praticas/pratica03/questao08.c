/* Faça um programa em C que calcule o fatorial de um número inteiro.
n! = n * n-1 * n-2 * ... 3 * 2 * 1 */

#include <stdio.h>
  int fat, n;

  int main() {
    int numero = 0;
    long int fatorial = 1;

    printf("entre com um numero inteiro: ");
    int leu_certo = scanf("%i", &numero);

    for(int i = numero; i>1; i--){
      fatorial = fatorial * i;
    }

    printf("o fatorial de %i é %li\n", numero, fatorial);




    return 0;
  }
      
    