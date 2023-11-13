#include <stdio.h>
#include <string.h>

int main() {
  char string[30]; // terminar com '\0';
  
  // preencher com um caracter 
  memset(string, 'a', 10); // aaaaaaaaaa
  printf("%s\n", string);
  // copiar uma string
  strcpy(string, "uma string");
  printf("%s\n", string);
  // concatenar uma string
  strcat(string, " outra string");
  printf("%s\n", string);
  // comparar string
  printf("sao iguais? %i\n", strcmp(string, "uma string"));
  // tamanho da string
  printf("tamanho = %li\n", strlen(string));
  
  
  return 0;
}