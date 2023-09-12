#include <stdio.h>

int main () {  

  char caractere = 127;
  int inteiro = caracter; // conversao explicita
  float flutuante = inteiro; // conversao implicita
  double duplo = flutuante; // conversao implicita

  printf("conversao implicita\n);
  printf("o char %d convertido em int é %d\n", char, inteiro);
  printf("o int %d convertido em float é %f\n", inteiro, flutuante);
  prinff("o float %f convertido em double é %f\n", flutuante, duplo);


  