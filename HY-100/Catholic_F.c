#include <stdio.h>

// Define example functions
void function1() {
    printf("Function 1\n");
}

void function2() {
    printf("Function 2\n");
}

void function3() {
    printf("Function 3\n");
}

// Function pointer type definitions
typedef float (*operationFunc)(float, float);

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    // Create an array of function pointers and initialize it with example functions
    void (*catholicF[3])() = {function1, function2, function3};

    // Call each function using the array
    for (int i = 0; i < 3; i++) {
        catholicF[i]();
    }

    return 0;
}

