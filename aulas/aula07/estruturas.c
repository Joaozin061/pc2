#include <stdio.h>
#include <string.h>

int main() {
  struct contato_t {
    char nome[61];
    int telefone;
  
  
  };

  struct contato_t contato;
  strcpy(contato.nome, "JOSE");
  contato.telefone = 88889999;

  printf("%s - %i\n", contato.nome, contato.telefone);

  struct contato_t outro;
  outro = contato;

  printf("%s - %i\n", outro.nome, outro.telefone);

  strcpy(contato.nome, "MARIA");
  contato.telefone = 77776666;

  printf("%s - %i\n", contato.nome, contato.telefone);
  printf("%s - %i\n", outro.nome, outro.telefone);

  struct contato_t contatos[10];

  for(int i=0; i<10; i++) {
    printf("entre com um nome do %i contato", i+1);
    int ok = scanf("%[^\n]s", contatos[i].nome);
    printf("entre com um nome do %i contato", i+1);
    ok = scanf("%i", &contatos[i].telefone);
  }
  


  return 0;
}