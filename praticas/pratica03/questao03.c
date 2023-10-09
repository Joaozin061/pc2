#include <stdio.h>

int main() {
  int nota = 0;
  int deu_certo = 0;
  
  printf("entre com uma note entre 0 e 5:");
  deu_certo = scanf("%i", &nota);
  if (deu_certo) {  
    if (nota == 1) {
    printf("ruim\n");
    } else if (nota == 2) {
    printf("insuficiente\n");
    } else if(nota == 3) {
    printf("suficiente\n");
    } else if (nota == 4) {
    printf("bom\n");
    } else if (nota == 5) {
    printf("otimo\n");
    } else {
    printf("nota invalida\n");

      switch(nota) {
        case 1: printf("ruim\n"); break;
        case 2: printf("insuficiente\n"); break;
        case 3: printf("suficiente\n"); break;
        case 4: printf("bom\n"); break;
        case 5: printf("otimo\n"); break;
        default:printf("nota invalida\n"); break;
       }
    } else {  
    printf("Por favor entre com um número inteiro. Tente novamente!\n");
    }

 return 0;
}
  



