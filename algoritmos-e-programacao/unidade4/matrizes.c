#include <stdio.h>

int main(void)
{
  int matriz[2][3];
  int valores[2];
  int i, x;

  printf("Digite 2 números inteiros.");

  for (i = 0; i < 2; i++) {
    scanf("%d", &valores[i]);
  }

  for (i = 0; i < 2; i++) {
    matriz[i][0] = valores[0];
    matriz[i][1] = valores[1];
  }

  if (i == 0) {
    matriz[i][2] = valores[0] + valores[1];
  }
  else {
    matriz[i][2] = valores[0] - valores[1];
  }

  for (i = 0; i < 2; i++) {
    for (x = 0; x < 3; x++) {
      printf("Na linha %d o valor da coluna %d é de %d \n", i, x, matriz[i][x]);
    }
  }

  return 0;
}