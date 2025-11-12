#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int *ptr = arr;   // pointer to beginning of array
    int *ptr2;

    // Initial pointer accesses
    printf("*ptr -> %d\n", *ptr);              // arr[0] -> 10
    printf("*(ptr + 3) -> %d\n", *(ptr + 3));  // arr[3] -> 40
    printf("ptr[2] -> %d\n", ptr[2]);         // arr[2] -> 30

    // Move pointer forward by 4 positions
    ptr = ptr + 4;                              // now ptr -> arr[4]
    printf("After ptr = ptr + 4, *ptr -> %d\n", *ptr); // arr[4] -> 50
    printf("ptr[1] -> %d\n", ptr[1]);          // arr[5] -> 60

    // Another pointer to the 6th element
    ptr2 = &arr[5];                             // ptr2 -> arr[5]
    printf("*ptr2 -> %d\n", *ptr2);            // arr[5] -> 60

    // Access using negative indexing
    printf("ptr2[-2] -> %d\n", ptr2[-2]);      // arr[3] -> 40

    return 0;
}
