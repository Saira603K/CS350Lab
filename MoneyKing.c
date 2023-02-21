#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of monkeys: ");
    scanf("%d", &n);
    printf("Enter the number for counting: ");
    scanf("%d", &m);

    // Initialize the monkeys array with values from 0 to n-1
    int monkeys[n];
    for (int i = 0; i < n; i++) {
        monkeys[i] = i;
    }

    // Perform the election process until only one monkey is left
    int remaining = n;
    int index = 0;
    while (remaining > 1) {
        // Count m monkeys clockwise and remove the mth monkey
        index = (index + m - 1) % remaining;
        for (int i = index; i < remaining - 1; i++) {
            monkeys[i] = monkeys[i + 1];
        }
        remaining--;

        // Wrap around the end of the array if needed
        if (index == remaining) {
            index = 0;
        }
    }

    // The last remaining monkey is the king
    printf("The monkey king is monkey %d\n", monkeys[0]);

    return 0;
}
