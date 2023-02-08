#include <stdio.h>

int main(){
  int array[100], length;
  float total = 0, ave = 0;

  printf("Enter the length of array: ");
  scanf("%d", &length);

  printf("Enter %d integers: ", length);

  for (int i = 0; i < length; i++){
    scanf("%d", &array[i]);//store the values in array
    total = total+array[i];//add the values in array
  }
  ave = total/length;
  printf("The average of this array is: %.2f ", ave);


  return 0;
}
