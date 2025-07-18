#include <stddef.h>
#include <stdio.h>
#include <string.h>

// Esse código tem um bug, pois não aceita espaços, a contagem está certa
// pois identificou que o meu primeiro nome contém 5 caracteres, porém
// não foi possível contar a outra parte do nome

int main(void) {
  char nome[100];
  printf("Qual o seu nome ?\n");
  scanf("%s", nome);
  int length = strlen(nome);
  printf("O tamanho da string é de %i\n", length);
}
