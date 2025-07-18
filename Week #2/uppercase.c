#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[50];
  printf("Qual o seu nome? ");
  scanf("%s", nome);
  int length = strlen(nome);

  // Uma das maneiras de transformar letras minúsculas e maiúsculas no C
  // é subtraindo 32 do caracter
  for (int i = 0; i < length; i++) {
    if (nome[i] >= 'a' && nome[i] <= 'z') {
      nome[i] = nome[i] - 32;
    } else {
      continue;
    }
  }
  printf("Nome: %s\n", nome);

  // Ou também, de forma mais simples, porém utilizando código de ter
  // ceiros, você pode:

  for (int i = 0; i < length; i++) {
    printf("Nome: %c\n", toupper(nome[i]));
  }
}
