// Online C compiler to run C program online
#include <stdio.h>

int main() {
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

    return 0;
}
