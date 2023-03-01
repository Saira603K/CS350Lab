//Write a program to verify whether a number from keyboard input is divisible by 3, 
//5 and 7 or not. 
#include <stdio.h>

int main() {
    // Write C code here
    int n, t, f, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 3 == 0 && n % 5 ==0 && n % 7 == 0){
        t = n/3;
        f = n/5;
        s = n/7;
        printf("%d %d %d ", t, f, s);
    }
    else if(n % 3 == 0 && n % 5 ==0)
    {
        t = n/3;
        f = n/5;
        printf("%d %d", t, f);
    }
    else if(n % 7 == 0 && n % 5 ==0)
    {
        s = n/7;
        f = n/5;
        printf("%d %d", s, f);
    }
    else if(n % 7 == 0 && n % 3 ==0)
    {
        s = n/7;
        t = n/3;
        printf("%d %d", s, t);
    }
    else if(n % 3 ==0)
    {
        t = n/3;
        printf("The number %d is divisible by 3: %d", n, t);
    }
    else if(n % 5 ==0)
    {
        f = n/5;
        printf("The number %d is divisible by 5: %d", n, f);
    }
    else if(n % 7 ==0)
    {
        s = n/7;
        printf("The number %d is divisible by 7: %d", n, s);
    }
    else{
        printf("NOT");
    }

    return 0;
}

