/* Escrever um programa em C que liste os 10 primeiros números da série de Fibonacci. */
#include <stdio.h>

  int main() {

  int anterior = 1;
  int proximo = 1;
 
  printf("%i, %i, ", anterior, proximo);
    
  for(int i = 0; i < 8; i++) {
   int auxiliar = anterior + proximo;
   printf("%i, ", auxiliar);
   anterior = proximo;
   proximo = auxiliar;
  }

    printf("\n");

    
    return 0;
    
  }

