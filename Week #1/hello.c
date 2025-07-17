#include <stdio.h>

int main(void) {
  int x, y;
  printf("Qual o valor de x ?\n");
  scanf("%d", &x);

  printf("Qual o valor de y ?\n");
  scanf("%d", &y);

  if (x > y) {
    printf("x é maior que y\n");
  } else if (x < y) {
    printf("y é maior que x\n");
  } else {
    printf("x e y são iguais\n");
  }
}
