#include <stdio.h>

int main() {
 float nota_a1;
 float nota_a2; 
 
 
  
  printf("entre com a nota 1: ");
  scanf("%f", &nota_a1);
  printf("entre com o nota 2: ");
  scanf("%f", &nota_a2);
  
  
 float media = 0.4f * nota_a1 + 0.6f * nota_a2;

 printf("A media final é %f\n", media);

 return 0;
}  
  