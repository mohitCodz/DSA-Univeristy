// deleting algorithm
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: "); // asking for number of elements
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n); // taking element input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask for position to delete
    int pos;
    printf("Enter the position (0 to %d) of element to delete: ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements left
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // reduce size

        printf("Array after deletion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
