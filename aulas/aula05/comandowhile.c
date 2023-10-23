#include <stdio.h>

int main() {
  int numero = 0;

  printf("entre com um numero de 1 e 10:");
  int leu_certo = scanf("%i", &numero); 
  getchar(); 
  
  while (numero < 1 || numero > 10) {
   getchar();
   printf("erro ao ler o numero. tente novamente:");
   leu_certo = scanf("%i", &numero);
   getchar(); 
  }


  
  int i = 10;
  while (i<10){
  printf("%i x %i = %i\n", numero, i+1, numero * (i+1));
  i++;
}

  int i = 10;
  do {
    printf("%i x %i = %i\n", numero, i+1, numero * (i+1)); 
    i++;
  } while(i<10);
} 







  
  
  // for(int i = 0; i < 10; i++) {
  //   printf("%i x %i = %i\n", numero, i + 1, numero * (i+1));
  // }

  // for(int i = 10; i > 0; i--) {
  //   printf("%i x %i = %i\n", numero, i, numero * i);
  // }

  // for(int i = 0; i < 10; i = i+2){
  //   printf("%i x %i = %i\n", numero, i+1, numero * (i+1));
  // }
  
  
  return 0;
}