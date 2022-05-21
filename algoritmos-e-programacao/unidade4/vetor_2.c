#include <stdio.h>
int main()
{
  int matriz[3][2];
  int y;
  int x;

  for (y = 0; y < 3; y++)
  {
    matriz[y][0] = y + 5;
    matriz[y][1] = y + 8;
  }

  for (y = 0; y < 3; y++)
  {
    for (x = 0; x < 2; x++)
    {
      printf("O valor da linha %d na coluna %d é de %d\n", y, x, matriz[y][x]);
    }
  }
  return 0;
}