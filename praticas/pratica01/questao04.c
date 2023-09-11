/*
Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/
#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.076f
#define PIS/PASEP 0.0165f


int main() { 

  float preco_inicial = 100.f;

  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;
  float valor PIS_PASEP = valor_inicial * PIS_PASEP;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_final;

  printf("o preco inicial é %f\n", preco_inicial);
  printf("o valor ICMS é %f\n", valor_icms);
  printf("o valor COFINS é %f\n", valor_cofins);
  printf("o valor de PISPASEP é %f\n", valor_pispasep);
  printf("o preco final é %f\n", preco_final);
  
  
  
  return 0;
 }

