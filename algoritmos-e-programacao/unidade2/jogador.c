#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // passar de nível ao atingir 1000 pontos de experiência
  int pontos;
  printf("Digite os pontos:\n"); // enviando mensagem para o usuário
  scanf("%d", &pontos);          // lendo mensagem do usuário e atribuído o valor do input à variável 'pontos' (por isso &)
  if (pontos >= 1000)
  {
    printf("Voce passou de nivel");
  }
  else
  {
    printf("Voce ainda nao tem pontos suficientes para passar de nivel");
  }
}