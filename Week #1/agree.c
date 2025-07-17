#include <ctype.h>
#include <stdio.h>

int main(void) {
  // É possível quebrar esse programa com um buffer overflow...
  char ans[1];

  printf("Você concorda ? (y/n)\n");
  scanf("%s", ans);

  // Podemos utilizar o Operador OR para verificar se a res é um
  // caracter maiúsculo
  if (tolower(*ans) == 'y') {
    printf("Concordo.\n");
  } else if (tolower(*ans) == 'n') {
    printf("Não Concordo.\n");
  } else {
    printf("Por favor, digite y ou n\n");
  }
}
