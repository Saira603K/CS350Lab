#include <stdio.h>

int main(){
  int array[100], size, i, max = 0;

  printf("Enter the number of elements in array\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (i = 1; i < size; i++)
    if (array[i] > array[max])
      max = i;

  printf("Maximum number is %d.\n", array[max]);
  return 0;
}
