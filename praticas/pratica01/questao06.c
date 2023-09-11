/* 
Faça um programa em C que calcule as raizes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a)
*/
#include <stdio.h>
#include <math.h>

int main () {  
  double valor_de_a = 4;
  double valor_de_b = 6;
  double valor_de_c = 2;
  double delta = (pow(valor_de_b, 2)- 4 * valor_de_a * valor_de_c); 
  double valor_raiz_1 = -valor_de_b + sqrt((pow(b, 2)- 4 * valor_de_a * valor_de_c)/2*valor_de_a);
  double valor_raiz_2 = -valor_de_b - sqrt((pow(valor_de_b, 2)- 4 * valor_de_a * valor_de_c)/2*valor_de_a);

  printf("o valor da raiz 1 é %f\n", valor_raiz_1);
  printf("o valor da raiz 2 é %f\n", valor_raiz_2);
  
  

  return 0; 
  
  }