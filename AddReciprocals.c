// Online C compiler to run C program online
#include <stdio.h>
int main(){
  int a, i;// declaring variables
  float sum = 0.0;
  printf("Enter a number: ");//taking user input
  scanf("%d", &a);//storing user input
  //
  printf("(");
  for(i =1; i <= a; i++){
      if(i < a){
      printf("1/%d + ", i);//the reciprocals added
      sum += 1/(float)i;//i has to be float
      }
      if (i ==a){
      printf("1/%d )", i);
      sum += 1/(float)i;
      }
  }
  printf("\nThe sum of the reciprocals of %d is: %f", a, sum);
  return 0;
  } 
