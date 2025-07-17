#include <stdio.h>

int main(void) {
  int n;
  // Questiona o usuário sobre o valor do Grid n-n
  do {
    printf("Size: ");
    scanf("%d", &n);
  } while (n < 1);

  // Monta o grid n-n com o tamanho requisitado pelo usuário
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("#");
    }
    printf("\n");
  }
}
