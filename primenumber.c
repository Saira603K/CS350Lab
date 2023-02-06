// Online C compiler to run C program online
#include <stdio.h>
int main(){
  int n;// declaring variables
  printf("Enter a number: ");//taking user input
  scanf("%d", &n);//storing user input
  //to check if the number is a prime or not
  if (n == 1 || n == 2){
    printf("%d is a prime number", n);
    }
  for(int i = 2; i <= n/2; i++){
    if(n% i != 0){
      printf("Prime number?: Yes");//count the 1s then repeat 
      break;
    }
    else{
      printf("Prime number?: No");
      break;
    }
    }

return 0;
  }
