#include <stdio.h>

int main() {
    int payment, num_bills, total_bills =0;

    // Prompt the user for the payment amount
    printf("Enter the payment amount: ");
    scanf("%d", &payment);

    // Calculate the number of $100 bills needed and subtract their value
    num_bills = payment / 100;
    payment -= num_bills * 100;
    total_bills += num_bills;
    printf("$100 bills: %d\n", num_bills);

    // Calculate the number of $50 bills needed and subtract their value
    num_bills = payment / 50;
    payment -= num_bills * 50;
    total_bills += num_bills;
    printf("$50 bills: %d\n", num_bills);

    // Calculate the number of $20 bills needed and subtract their value
    num_bills = payment / 20;
    payment -= num_bills * 20;
    total_bills += num_bills;
    printf("$20 bills: %d\n", num_bills);

    // Calculate the number of $10 bills needed and subtract their value
    num_bills = payment / 10;
    payment -= num_bills * 10;
    total_bills += num_bills;
    printf("$10 bills: %d\n", num_bills);

    // Calculate the number of $5 bills needed and subtract their value
    num_bills = payment / 5;
    payment -= num_bills * 5;
    total_bills += num_bills;
    printf("$5 bills: %d\n", num_bills);

    // Calculate the number of $1 bills needed and subtract their value
    num_bills = payment;
    printf("$1 bills: %d\n", num_bills);
    total_bills += num_bills;
    
    printf("Total number of bills: %d", total_bills);
    

    return 0;
}
