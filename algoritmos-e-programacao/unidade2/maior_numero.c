#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n1, n2, n3;
  printf("Digite o valor dos 3 números: \n");
  scanf("%d%d%d", &n1, &n2, &n3);

  if (n1 == n2 && n2 == n3) {
    printf("Os numeros sao iguais");
  }
  else {
    if (n1 > n2 && n1 > n3) {
      printf("O numero %d e maior", n1);
    }
    else {
      if (n2 > n3) {
        printf("O maior numero e %d", n2);
      }
      else {
        printf("O maior numero e %d", n3);
      }
    }
  }

  return 0;
}