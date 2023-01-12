#include <stdio.h>
#define PI 3.141

int main(){
  /*Write a program to find the sum of two numbers*/
   int integer1, integer2, sum1; //declaration
  printf("Question1: Enter two integers: ");//prompt
  scanf("%d %d",&integer1, &integer2);//read user input
  sum1 = integer1 + integer2; //adding the inputs
    printf("Answer 1: Sum of integer1 and integer2 is %d\n",sum1);//print the sum
   //return 0;//indicate prog is a success 
/* Write a program to find the area and the circumference of a circle*/
  float radius, area, circumference;//declaration
  printf("Question 2: Enter raduis of a circle:");//prompt
  scanf("%f", &radius);//read user input
  area = PI*radius* radius;//calculate the area 
  circumference = 2* PI * radius;//calculte the circumference
  printf("Answer 2: Area of the circle is %0.2f\n", area);//print area
  printf("Answer 2: Circumfrence of the circle is %0.2f\n", circumference);
  //return 0;  
/*Write a Program to find the simple interest*/
  float principle, rate_of_interest, time, simple_interest;//declaration
  printf("Question 3: Enter the principle,rate of interest, time: ");//prompt
    scanf("%f %f %f", &principle,&rate_of_interest, &time); //read user input
  simple_interest = (principle*rate_of_interest*time)/100;//calculate
  printf("Answer 3:Simple interest is %0.02f\n", simple_interest);//print the calculated interest
  //return 0;
/* Write a program to cinvert temp from centigrade to Fahrenheit*/
  float temp1, temp2;//declaration
  printf("Question 4: Enter the temeratire in centigrade: ");//prompt
  scanf("%f", &temp1); //read the user input
  temp2 = 1.8 * temp1 + 32; //convert to fahrenheit
  printf("Answer 4: Temp in Fahrenheit = %0.05f\n", temp2);//print the result
  //return 0;
/*Write program to calculate sum of 5 subjects and find percentage*/
  float mark1, mark2, mark3, mark4, mark5, sum2, total;//declaration
  float percentage; //declaration
  printf("Question 5: Enter marks of 5 subjects: "); //prompt
  scanf("%f %f %f %f %f", &mark1, &mark2, &mark3, &mark4, &mark5);//read user input
  printf("Enter assumption total number: "); //prompt
  scanf("%f", &total); //read user input
  sum2 = mark1 + mark2 + mark3 + mark4 + mark5; //add the marks
  percentage = (sum2/total)*100; //calculate the percentage
  printf("Sum = %0.01f\n", sum2);
    printf("Answer 5: Percentage = %0.03f\n", percentage);//print
  
  
  return 0;
  
  
}