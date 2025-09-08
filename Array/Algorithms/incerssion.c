// insertion - adding element at the last
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n+1]; // allocate extra space for insertion

    // taking input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // displaying the array
    printf("Created array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int position, element;
    printf("Enter the position (0 to %d) where you want to insert new element: ", n);
    scanf("%d", &position);

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    if (position < 0 || position > n) {
        printf("Invalid position!\n");
    } else {
        // shift elements to the right
        for (int i = n; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = element; // insert element

        printf("Array after insertion:\n");
        for (int i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
