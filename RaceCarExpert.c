#include <stdio.h>

int main() {
    int expert_A = 2, expert_B = 4, expert_C = 3;
    int best_car = -1, correct_expert = -1;

    // Expert A said: #2 is the best
    if (expert_A == 2) {
        best_car = 2;
        correct_expert = 0;
    }

    // Expert B said: #4 is the best
    if (expert_B == 4) {
        best_car = 4;
        correct_expert = 1;
    }

    // Expert C said: #3 is NOT the best
    if (expert_C != 3) {
        if (best_car == 3) {
            best_car = -1;
            correct_expert = 2;
        }
    } else {
        if (best_car != 3) {
            best_car = 3;
            correct_expert = 2;
        }
    }

    // Expert D said: expert B is wrong
    if (expert_B == best_car) {
        best_car = -1;
        correct_expert = 3;
    }

    // Print the results
    if (best_car != -1) {
        printf("Car #%d is the best.\n", best_car);
    } else {
        printf("No best car could be determined.\n");
    }

    if (correct_expert != -1) {
        printf("Expert %c is correct.\n", 'A' + correct_expert);
    } else {
        printf("No correct expert could be determined.\n");
    }

    return 0;
}
