#include <stdio.h>

int main() { 

  double duplo = 270.987654
  float flutuante = (float)duplo; // conversao explicita
  int inteiro = (int)flutuante; // conversao explicita
  char caractere = (char)inteiro; // conversao explicita

  prinff("conversao explicita\n");
  printf("o double %f convertido em float é %f\n", duplo, flutuante);
 printf("o float %f convertido em int é %f\n", flutuante, inteiro);
  printf("o int %d convertido em char é %d\n", inteiro, caractere);

  return 0; 
} 
  
