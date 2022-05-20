# Fundamentos de Programação

## Estrutura Sequencial
Uma vez que um *ponto e vírgula* é encontrado, deve-se executar o próximo comando da sequência.

## Estrutura de Seleção
Com uma estrutura de seleção nós podemos fazer a escolha de um grupo, ou bloco de ações a serem executadas quando determinadas condições, descritas por expressões lógicas ou relacionais são ou não satisfeitas.

Essas estruturas podem ser homogênea ou heterogênea.

### Seleção Homogênea
Na seleção homogênea, um comando será executado apenas quando forem satisfeitas algumas condições, e a construção do algoritmo deve seguir um padrão.
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int pontos;
  printf("Digite os pontos:\n"); 
  scanf("%d", &pontos);          
  if (pontos >= 1000)
  {
    printf("Voce passou de nivel");
  }
  else
  {
    printf("Voce ainda nao tem pontos suficientes para passar de nivel");
  }
}
```

### Seleção Heterogênea
Quando não é possível identificar um padrão lógico de construção de uma estrutura de seleção, esta é caracterizada como uma estrutura de seleção heterogênea.
```c
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
```

### Multipla Escolha
É basicamente o switch/case.

