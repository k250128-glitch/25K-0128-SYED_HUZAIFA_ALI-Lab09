#include <stdio.h>

int main() {
    int grid[3][4];
    int *ptr;
    int i, j;

    // Fill the grid with numbers 1 to 12
    int num = 1;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            grid[i][j] = num++;
        }
    }

    // 1. Pointer to the first element
    ptr = &grid[0][0];

    printf("Accessing specific elements using ptr to first element:\n");
    printf("First element: %d\n", *ptr);          // 1
    printf("Fifth element: %d\n", *(ptr + 4));    // 5
    printf("Last element (12th): %d\n", *(ptr + 11)); // 12

    // 2. Pointer to beginning of second row
    int *row2 = &grid[1][0];

    printf("\nAccessing elements using row2 pointer with positive and negative indexing:\n");
    printf("First element of 2nd row: %d\n", row2[0]);   // 5
    printf("Third element of 2nd row: %d\n", row2[2]);   // 7
    printf("Previous element using negative index: %d\n", row2[-1]); // 4

    // 3. Scan all elements for numbers divisible by 3
    printf("\nNumbers divisible by 3:\n");
    ptr = &grid[0][0];
    for (i = 0; i < 12; i++) {
        if (*(ptr + i) % 3 == 0)
            printf("%d ", *(ptr + i));
    }
    printf("\n");

    // 4. Access last element using grid array indexing differently
    printf("\nLast element accessed differently: %d\n", grid[2][3]); // 12

    return 0;
}
