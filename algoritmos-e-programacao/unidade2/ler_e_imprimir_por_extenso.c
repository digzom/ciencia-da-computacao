#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int mes;
  printf("Digite um numero entre 12 \n");
  scanf("%d", &mes);
  switch (mes)
  {
  case 1:
    printf("Janeiro");
    break;

  case 2:
    printf("Favereiro");
    break;

  case 3:
    printf("Março");
    break;

  case 4:
    printf("Abril");
    break;

  case 5:
    printf("Maio");
    break;

  case 6:
    printf("Junho");
    break;

  case 7:
    printf("Julho");
    break;

  case 8:
    printf("Agosto");
    break;

  case 9:
    printf("Setembro");
    break;

  case 10:
    printf("Outubro");
    break;

  case 11:
    printf("Novembro");
    break;

  case 12:
    printf("Dezembro");
    break;

  default:
    printf("Este numero nao corresponde a nenhum mes");
  }

  return 0;
}