# Vetores
Podemos definir um vetor como uma sequência de valores do mesmo tipo.

Esses valores são armazenados em memória e faz o uso de um mesmo nome da variável, ou seja, com apenas um nome de uma variável é possível acessar inúmeros valores (através de um índice, por exemplo).

Os elementos de uma lista vão de 0 até n-1, tal que _n_ é o número de elementos da lista.

A partir do momento em que um vetor é executado, ele não poderá diminuir nem aumentar o seu tamanho.

Os elementos de um vetor são armazenados de maneira sequencial na memória. Ou seja, um vetor de 10 posições, onde cada posição ocupa 4 bytes de memória, ocupa 40 bytes de memória de uma vez.

## Declaração
```c
#include <stdio.h>

int main(void) 
{
  int vetor[10];

  return 0;
}
```
A declaração leva:
- O tipo do vetor (int)
- O nome da variável (vetor)
- Quantidade de posições (10)

## Atribuição
```c
#include <stdio.h>

int main(void) 
{
  float vetor[10];

  vetor[2] = 3;
  printf("O valor de vetor na posição 2 é %d", vetor[2]);

  return 0;
}
```

## Carregando
É possível capturar os valores de um vetor com um laço de repetição.
```c
#include <stdio.h>

int main()
{
  int i, tamanho;
  printf("Digite um número inteiro para definir o tamanho do vetor.");

  scanf("%d\n", &tamanho);

  int vetor[tamanho];

  for (i = 0; i < tamanho; i++) {
    vetor[i] = i;

    printf("O valor do vetor no índice %d é de %d", i, vetor[i]);
  }

  return 0;
}
```
Criamos um vetor do tipo inteiro e também uma variável auxiliar para percorrer um laço de repetição (i).

## Lendo
Também podemos utilizar estruturas de repetição para ler e atribuir os valores do vetor.
```c
int main(void)
{
  int vetor[5];
  int indice;

  printf("Escreva 5 numeros inteiros: ");

  for (indice = 0; indice < 5; indice++) {
    scanf("%d", &vetor[indice])
  }

  return 0;
}
```

## Exibindo
```c
#include <stdio.h>

int main(void)
{
  int vetor[5];
  int indice;

  printf("Escreva 5 numeros inteiros: ");

  for (indice = 0; indice < 5; indice++) {
    scanf("%d", &vetor[indice]);
  }

  printf("Valores em ordem: \n");

  for (indice = 0; indice < 5; indice++) {
    printf("%d ", vetor[indice]);
  }

  return 0;
}
```
O retorno desse código será 1 2 3 4 5.

# Matrizes
Matriz é uma generalização de um vetor. Ou seja, é uma tabela de vários valores que possuem um mesmo tipo e são armazenados sequencialmente (assim como os vetores). Então, vetores são matrizes de apenas uma dimensão. Os valores e posições são criados sequencialmente a partir da definição de uma matriz.

Também podemos dizer que matriz é uma **coleção de variáveis de mesmo tipo, acessíveis com um único nome e armazenados <u>_contiguamente_</u> na memória**.

A individualização de cada variável de um vetor é feita através do uso de índices.

Ou seja, a matriz é uma junção de mais de um vetor. Cada elemento é acessado por dois índices. O primeiro índice refere-se a uma linha e o outro a coluna.

Ex.: int matriz[4][5]

      [a][a][a][a][a]
      [a][a][a][a][a]
      [a][a][a][a][a]
      [a][a][a][a][a]

## Declarando
```c
#include <stdio.h>
int main(void)
{
  int matriz[3][5];

  return 0
}
```

## Atribuindo
Para atribuir valores a uma matriz, iremos utilizar um exemplo simples no qual será criado uma matriz de 3 linhas com 2 colunas do tipo inteiro.
```c
#include <stdio.h>

int main(void)
{
  int matriz[3][2];
  int y;

  for (y = 0; y < 3; y++) {
    matriz[y][0] = y + 5;
    matriz[y][1] = y + 8;
  }

  return 0;
}
```

## Carregando
É bem parecido com vetores.
```c
#include <stdio.h>

int main(void)
{
  int matriz[2][3];
  int i;

  for (i = 0; i < 2; i++) {
    matriz[i][0] = i + 2;
    matriz[i][1] = i + 4;
    matriz[i][2] = i + 6;
  }
  
  return 0;
}
```

## Lendo
```c
#include <stdio.h>
int main(void)
{
  int matriz[2][3];
  int i;
  int x;

  printf("Digite 2 números inteiros");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < 2; i++) {
    if (i == 0) {
      matriz[i][2] = matriz[i][0] + matriz[i][1];
    }
    else {
      matriz[i][2] = matriz[i][0] - matriz[i][1];
    }
  }
  
  return 0;
}
```

## Exibindo
```c
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
```

