#include <stdio.h>

void meow(int n) {
  for (int i = 0; i < n; i++) {
    printf("Meow!\n");
  }
}

int main(void) {
  // Estruturas de Repetição

  int i = 0;
  while (i < 3) {
    meow(3);
    i--;
  }

  // Laço de Repetição For
  for (int i = 0; i < 3; i++) {
    printf("Meow!");
  }

  // Obs: Laços de Repetição que não contém valores booleanos se
  // tornam laços infinitos
  while (1) {
    printf("Isso será mostrado em minha tela até que eu, manualmente pare o "
           "programa");
  }
  // Não há laço condicional dentro do parenteses while...

  // Abstraindo o meow para dentro de uma função, temos...
  meow(3);
}
