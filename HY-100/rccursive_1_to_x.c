#include <stdio.h>

unsigned int factorial(unsigned int x) {
    // Base case: factorial of 0 or 1 is 1
    if (x == 0 || x == 1) {
        return 1;
    }
    // Recursive case: x * factorial of (x - 1)
    return x * factorial(x - 1);
}

int main() {
    unsigned int x = 15; // Example input
    printf("Factorial of %u is %u\n", x, factorial(x));
    return 0;
}