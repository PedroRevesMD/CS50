#include <stdio.h>

// Constante k (Tamanho do Array de notas)
const int k = 3;

// Prototype da função average
float average(int lenght, int scores[]);

int main(void) {
  int scores[k];

  for (int i = 0; i < k; i++) {
    printf("Insira a nota do Aluno:");
    scanf("%d", &scores[i]);
  }

  printf("A média do aluno foi de %.2f\n", average(k, scores));
}

float average(int lenght, int scores[]) {
  float average;

  for (int i = 0; i < lenght; i++) {
    average += scores[i];
  }

  return average / (float)lenght;
}
