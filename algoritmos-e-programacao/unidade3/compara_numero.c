#include <stdio.h>

int main()
{
  int n, soma = 0, c, valor;

  printf("Digite o numero a ser comparado?\n");
  scanf("%d", &n);
  printf("Digite %d que serão comparados\n", n);

  for (c = 1; c <= n; c++)
  {
    scanf("%d", &valor);
    if (valor > n)
    {
      soma = soma + 1;
    }
  }

  printf("Quantidade de números maiores que  = %d\n", soma);

  return 0;
}