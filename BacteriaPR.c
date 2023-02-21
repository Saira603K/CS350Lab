#include <stdio.h>
#include <stdlib.h>


int main() {
    int num_petri_dishes, i;
    int a_count = 0;
    int b_count = 0;
    int label, original, new;
    float a_sum = 0;
    float b_sum = 0;
    float reproduction_rate;

    printf("Enter total number of Petri dishes: ");
    scanf("%d", &num_petri_dishes);

    for (i = 0; i < num_petri_dishes; i++) {
        printf("Enter Petri dish label, original bacterial number, new bacterial number after one hour reproduction: ");
        scanf("%d%d%d", &label, &original, &new);
        
        reproduction_rate = (float)new / original;
        if (reproduction_rate > 100) {
            a_count++;
        } else {
            b_count++;
        }
    }
    printf("%d in A sub species \n", a_count);
    printf("%d in B sub species\n", b_count);


    return 0;
}
