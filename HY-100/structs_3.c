#include <stdio.h>
#include <stdlib.h>

// Define the struct point
struct point {
    double x;
    double y;
};

// Function to create and initialize a point
struct point* create_point(double x, double y) {
    // Allocate memory for a point
    struct point* new_point = (struct point*)malloc(sizeof(struct point));
    if (new_point == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    // Initialize the fields
    new_point->x = x;
    new_point->y = y;

    return new_point;
}

int main() {
    // Example usage of create_point
    struct point* p = create_point(3.5, 7.2);
    if (p != NULL) {
        printf("Point coordinates: x = %.2f, y = %.2f\n", p->x, p->y);
        free(p); // Free allocated memory
    }

    return 0;
}