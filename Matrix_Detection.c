#include <stdio.h>

int main() {
    int rows, cols, count = 0;

    printf("Enter size of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter each element:\n");

    // Input array elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Count malignant cells
    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < cols - 1; j++) {
            if (arr[i][j] < 50 &&
                arr[i-1][j] >= 50 && arr[i+1][j] >= 50 &&
                arr[i][j-1] >= 50 && arr[i][j+1] >= 50) {
                count++;
            }
        }
    }

    printf("Result of malignant cells detection: %d\n", count);

    return 0;
}

