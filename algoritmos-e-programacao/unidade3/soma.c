#include <stdio.h>
#include <stdlib.h>

int main()
{

  int n, soma = 0, c, valor;

  printf("Digite a quantidade de números para somar?\n");
  scanf("%d", &n);
  printf("Digite %d que serão somados\n", n);

  for (c = 1; c <= n; c++)
  {
    scanf("%d", &valor);
    soma = soma + valor;
  }

  printf("Soma dos numeros digitados = %d\n", soma);

  return 0;
}