/*Given an array with integer numbers read-in from keyboard to each element, write 
program to rotate these integer numbers by m times scanned-in from keyboard. 
Notice that only one array in your program is allowed.*/

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of times to rotate the array: ");
    scanf("%d", &m);

    // rotate the array m times
    for (int i = 0; i < m; i++) {
        int temp = arr[0];
        for (int j = 0; j < n-1; j++) {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }

    printf("The rotated array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
