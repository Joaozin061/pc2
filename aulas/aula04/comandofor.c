#include <stdio.h>

int main() {
  
int numero = 0;

  printf("entre com um numero de 1 e 10:");
  int leu_certo = scanf("%i", &numero);

  
  for(int i = 0; i < 10; i++) {
    printf("%i x %i = %i\n", numero, i + 1, numero * (i+1));
  }
  
  for(int i = 10; i > 0; i--) {
    printf("%i x %i = %i\n", numero, i, numero * i);
  }

  for(int i = 0; i < 10; i = i+2){
    printf("%i x %i = %i\n", numero, i+1, numero * (i+1));
  }

  for(;;) {
    printf("ao infinito e alem!\n");
  }
    
    
    
    return 0;
  
}


