#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero;
  printf("Digite o número\n");
  scanf("%d", &numero);
  if (numero % 2 == 0) {
    int metade = numero / 2;
    printf("A metade é %d\n", metade);
  }

  return 0;
}