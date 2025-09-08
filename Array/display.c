// Display Array

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: "); // asking to enter element
    scanf("%d", &n);

    int arr[n];  // size 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
