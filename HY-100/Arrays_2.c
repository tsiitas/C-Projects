#include <stdio.h>

// Function to calculate the average of an integer array
double arr_avg(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size; // Return the average as a double
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    double average = arr_avg(arr, size);
    printf("The average is: %.2f\n", average);

    return 0;
}