/* Faça um programa em C que leia um verbo e imprima a conjugação no presente do indicativo caso ele termine em AR (ex.: PROGRAMAR, EU PROGRA+O, TU PROGRAM-AS, ELE PROGRA-A, NÓS PROGRAMA-MOS, VÓS PROGRAM+AIS E ELES PROGRAM-AM)*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char pronomes[6][5] = {"EU","TU","ELE","NÓS","VÓS","ELES"};
  char conjugacoes[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};
  char verbo[21]; // até 21 caracteres

  printf("Entre com um verbo terminado em AR: ");
  int ok = scanf("%s", verbo);

  for(int i=0; i<strlen(verbo); i++) {
    verbo[i] = toupper(verbo[i]); // toupper converte para maiusculo 
                                  // tolower converte para minusculo
  }

  int ultima_posicao = strlen(verbo) - 1; 
  int penultima_posicao = ultima_posicao -1;

  if(verbo[penultima_posicao] == 'A' && verbo[ultima_posicao] == 'R') {
    char radical[21];
    strcpy(radical, verbo);
    radical[penultima_posicao] = '\0';
    printf("Conjugando o verbo %s no presente do indicativo:\n", verbo);
    for(int i=0; i<6; i++) {
      printf("%s %s%s\n", pronomes[i], radical, conjugacoes[i]);
    }
  } else { 
    printf("o verbo %s não termina em AR\n", verbo);
  }
  
 return 0;
}