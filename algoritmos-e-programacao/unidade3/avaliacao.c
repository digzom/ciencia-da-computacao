#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int c;
  float height;
  for (c = 1; c <= 3; c++) {
    printf("Qual é a altura da pessoa %d? \n", c);
    scanf("%f", &height);

    if (height < 1.80) {
      printf("Entrada nao permitida.\n");
    }
  }

  return 0;
}