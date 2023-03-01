/*Assume that a school is located along the straight long road with length L, and 
trees with even 1 meter distance between any two were planted on one side of the 
road. You may take this road as x axis starting zero point and terminating at L 
point, and each tree stands at integer number point, such as 0, 1, 2, 3, ... L. The 
city council made a decision to build subways underneath the road and other 
facilities on the ground along the road. So, trees in SOME areas with integer 
intervals, which staring point & ending point are integer as well, must be moved to 
other districts in the city. Write program to calculate how many trees need to 
move*/

#include <stdio.h>

int main() {
    int L, M, count = 0;
    printf("Enter the length of the road: ");
    scanf("%d", &L);

    printf("Enter how many areas are needed for new facilities: ");
    scanf("%d", &M);

    int start[M], end[M];

    for (int i = 0; i < M; i++) {
        printf("Area #%d starting & ending point: ", i+1);
        scanf("%d %d", &start[i], &end[i]);
    }

    for (int i = 0; i < L; i++) {
        int is_tree_in_area = 0;
        for (int j = 0; j < M; j++) {
            if (i >= start[j] && i <= end[j]) {
                is_tree_in_area = 1;
                break;
            }
        }
        if (is_tree_in_area) {
            count++;
        }
    }

    printf("Result of number of trees needed to move: %d\n", count);

    return 0;
}
