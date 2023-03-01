//Write a program to read in any integer number from keyboard and print hailstone 
//sequence. 

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Hailstone sequence: %d ", num);

    while (num != 1) {
        if (num % 2 == 1) {
            num = num * 3 + 1;
        }
        else {
            num = num / 2;
        }
        printf("%d ", num);
    }

    return 0;
}
