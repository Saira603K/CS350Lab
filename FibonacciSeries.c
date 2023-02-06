// Online C compiler to run C program online
#include <stdio.h>

// PRINT THE FIBONACCI SERIES FOR THE GIVEN NUMBER
int main(){
  int n;// declaring variables
  printf("Enter a number: ");//taking user input
  scanf("%d", &n);//storing user input
  //PRINT THE FIBONACCI SERIES
  int term1 = 0, term2=1, next_term = term1+term2;
  printf("The fibonacci series for %d is: %d  %d", n, term1, term2);
  for(int i = 3; i <= n; i++){
    printf(" %d ", next_term);
    term1 = term2;
    term2 = next_term;
    next_term = term1 + term2;}
  printf("\nFibonacci (%d) = %d", n, next_term);
  
return 0;
  }  
