#include <stdio.h>
#include <stdlib.h>

int main() {
    int max_odd = -1;
    int min_even = -1;
    int n, x;

    printf("How many integers do you want to input? ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x % 2 == 1 && x > max_odd) {
            max_odd = x;
        } else if (x % 2 == 0 && (x < min_even || min_even == -1)) {
            min_even = x;
        }
    }

    int diff = max_odd - min_even;
    int abs_diff = abs(diff);

    printf("Result: %d", abs_diff);

    return 0;
}
