#include <stdio.h>

int main()
{
     int rows=3, cols=2, a[3][2], b[3][2], sum[3][2];

  printf("\nEnter value of 1st matrix:");
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j) {
      scanf("%d", &a[i][j]);//storing the values in array a
    }

  printf("Enter value of 2nd matrix:");
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j) {
      scanf("%d", &b[i][j]);//storing the values in array b
    }

  // adding two matrices
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == cols - 1) {
        printf("\n");
      }
    }


    return 0;
}
