#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int age;
  printf("Informe a sua idade: \n");
  scanf("%d", &age);
  if (age < 18) {
    printf("Sua entrada não é permitida. \nEsse show só é permitido para maiores de 18 anos.");
  }
  else {
    printf("Prosseguindo com a compra do ingresso...");
  }

  return 0;
}
