
2.accessing the elements by 3d-array by using printf and scanf
#include <stdio.h>
int main()
{
  int a[2][3][2],i,j,k;

  printf("Enter the values");

  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      for (k = 0; k < 2; ++k)
      {
        scanf("%d", &a[i][j][k]);
      }
    }
  }
  printf("\nDisplaying values:\n");
  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      for (k = 0; k < 2; ++k)
      {
        printf("a[%d][%d][%d] = %d\n", i, j, k, a[i][j][k]);
        printf("&a[%d][%d][%d] = %d\n", i, j, k, &a[i][j][k]);
      }
    }
  }
}