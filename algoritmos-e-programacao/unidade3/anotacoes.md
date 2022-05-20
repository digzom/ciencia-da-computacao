## Estruturas de repetição
De acordo com Guedes (2014) existem dois tipos de comandos internos para estruturas de repetição: os acumuladores e os contadores.

Quando a execução de um cálculo necessita de valores que sejam obtidos a cada iteração, ou quando o cálculo somente estará finalizado com a conclusão da repetição, utiliza-se os acumuladores. Para a operação em que será utilizado, um acumulador deve ser inicializado com um valor neutro (GUEDES, 2014).

```c
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
```

Os contadores devem ser usados quando a gente já sabe quantas vezes o laço deve repetir:

```c
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
```

