#include<stdio.h>
//Question 1: Swap two numbers by using a third variable
int main(){
  int integer1, integer2, temp; // asiigning variables
  printf("Question 1: Enter the first and second numbers: "); // asking for user input
  scanf("%d%d", &integer1, &integer2); // reading the user input
  printf("Numbers before swapping: %d %d\n", integer1, integer2);//print the user input
  //swapping the numbers
  temp = integer1;
  integer1 = integer2;
  integer2 = temp;
  printf("Answer 1:Numbers after the swap: %d %d\n", integer1, integer2);
  printf("\n");
  //return 0;
//=====================================================================
//Question 2: Reverse a given number
  int integer, reverse = 0, remainder;// assigning the variables
  printf("Question 2: Enter a number: ");//ask for user input
  scanf("%d/n", &integer); //read the user input
  //reverse the given number using a while loop
  while (integer != 0)//check if the number is 0
  {
    remainder = integer % 10;//remainder of the given number
    reverse = reverse * 10 + remainder; //reverse is multipied by 10 and added to the remainder
    integer /= 10;
    }
  printf("Answer2: Reversed number: %d\n", reverse);
  printf("\n");
  //return 0; 
//====================================================================
// Question 3: Find the greatest number from a given set of numbers
  int int1, int2, int3;

  printf("Question 3: Enter three different numbers: ");
  scanf("%d %d %d", &int1, &int2, &int3);

  // if int1 is greater than both int2 and int3 then int1 is the greatest
  if (int1 >= int2 && int1 >= int3)
    printf("Answer 3: a is the greatest number: %d\n", int1);

  // if int2 is greater than both int1 and int1 then int2 is the greatest
  if (int2 >= int1 && int2 >= int3)
    printf("Answer 3: b is the greatest number: %d\n", int2);

  // if int3 is greater than both int1 and int2, int3 is the greatest
  if (int3 >= int1 && int3 >= int2)
    printf("Answer 3: c is the greatest number: %d\n", int3);
  printf("\n");

  //return 0;
//===========================================================
// Question 4: Check if the entered year is a leap year or not
  int year; // assign variables
  printf("Question 4: Enter a year: ");//take user input
  scanf("%d", &year); //read user input
  //The year is leap if it can be evenly divided by 4
  if (year%4 == 0){
    printf("Answer 4: The year is a leap year.\n");
  } 
  //The year is NOT leap if it can be evenly divided by 100
  else if(year%100 == 0){
    printf("Answer 4: The year is NOT a leap year.\n");
  } 
  //The year is leap if it can be evenly divided by 100 and 400
  else if(year%100 == 0 && year%400 == 0){
    printf("Answer 4: This is a leap year.\n");
  }
  else{
    printf("Answer 4: This is NOT a leap year.\n");
  }  
  printf("\n");
  //return 0;
//===========================================================
// Question 5: Even or odd
  int a;
  printf("Question 5: Enter a number; ");
  scanf("%d", &a);
  if(a%2==0){
    printf("Answer 5: The number is even.\n");
  }
  else{
    printf("Answer 5: The number is odd.\n");
  }
  printf("\n");
  //return 0;
//===========================================================
  // Question 6: Shift the input by three bits
  int m; //assign the variable
  printf("Question 6: Enter a number to shift left: ");//ask for user input
  scanf("%d", &m);// read the user input
  //shift left by 1 is multipying by 2
  //shift left by 3 means num multiplied bu 2 to the power 3
  printf("Answer 6: Shifting the number to the left by 3 bits: %d\n", m<<3);
  printf("\n");
  //return 0;
//===========================================================
// Question 7: Use switch staements to display days
  char days;
  printf("Question 7: Enter a letter: \n");
  scanf("%c", &days);
  switch(days){
    case 'm': case 'M'://letter can be uppercase or lowercase
      printf("Answer 7: Monday\n");
      break;
    case 't': case 'T':
      printf("Answer 7: Tuesday\n");
      break;
    case 'w': case 'W':
      printf("Answer 7: Wednesday\n");
      break;
    case 'h': case 'H':
      printf("Answer 7: Thursday\n");
      break;
    case 'f': case 'F':
      printf("Answer 7: Friday\n");
      break;
    case 's': case 'S':
      printf("Answer 7: Saturday\n");
      break;
    case 'u': case 'U':
      printf("Answer 7: Sunday\n");
      break;
    default:
      printf("Answer 7: Invalid key\n");
        break;
    }
  printf("\n");
  
  //return 0;

//============================================================
// Question 8:Display Arthimatics using switch case
  int num, number1, number2, sum, subtraction, multiply, divide;
  printf("Question 8: Enter two numbers: ");// assigning
  scanf("%d %d", &number1, &number2);//read the user input
  printf("Enter 1 for sum.\n");//give user some choices
  printf("2 for multiplication.\n");
  printf("3 for subtraction \n");
  printf("4 for division\n");
  scanf("%d", &num);//read the user choice
  switch(num){
    case 1:
      sum = number1 + number2;
      printf("Sum of the given numbers is %d\n", sum);
      break;
    case 2:
      multiply = number1 * number2;
      printf("Product of the given numbers: %d\n ", multiply);
      break;
    case 3:
      subtraction = number1 - number2;
      printf("Difference of the given numbers: %d\n", subtraction);
      break;
    case 4:
      divide = number1 / number2;
      printf("Quotient of the given numbers: %d\n", divide);
      break;
    default:
      printf("The numbers have to be positive integers.\n");
        break;  
    printf("\n");
  }
  printf("\n");
  //return 0;
//============================================================
// Question 9: Inout a number and display the sum of that num using loop
  int n, sum1=0; //declare
  printf("Question 9: Enter a number: ");//take user input
  scanf("%d", &n);
  for(int i = 0; i <=n; i++)
    {
      sum1 = sum1 +i;
        }
  printf("Sum is %d\n", sum1);
  printf("\n");
  //return 0; 

//==============================================================
//Question 10: Print stars in a diamond shape
  int i, j, k, rows;
  printf("Question 10: Enter the number of rows: ");//user input
  scanf("%d", &rows); //read uner input
  for(i=1; i<=rows; i++)
    {
      for(k =1; k<=rows-i; k++)
        {
          printf(" ");
        }
      for(j=1; j<=2*i-1; j++)
        {
          printf("*");
        }
      printf("\n");
    }
  for(i = rows-1; i>=1; i--)
    {
      for(k=1; k<=(rows-i); k++)
        {
          printf(" ");
        }
      for(j = 1; j <=2*i-1; j++)
        {
          printf("*");
        }
      printf("\n");
    }
  return 0;
}
