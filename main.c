#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float x, y;

  printf("Digite um número qualquer: \n");
  scanf("%f", &x);

  printf("Digite um outro número qualquer: \n");
  scanf("%f", &y);

  if (x >= y) {
    printf("%f é maior.\n", x); // Verdadeira
  } else {
    printf("%f é maior. \n", y); // Falsa
  }
  return 0;
}