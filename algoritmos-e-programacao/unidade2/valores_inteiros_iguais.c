#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int numero1, numero2;
  printf("Digite os numeros 1 e 2\n");
  scanf("%d%d", &numero1, &numero2);

  if (numero1 == numero2)
  {
    printf("Os numeros são iguais");
  }
  else
  {
    if (numero1 > numero2)
    {
      printf("%d", numero1);
    }
    else
    {
      printf("%d", numero2);
    }
  }

  return 0;
}